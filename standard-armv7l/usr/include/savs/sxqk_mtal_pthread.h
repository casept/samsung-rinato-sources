/******************************************************************************
 *                       Samsung Electronics Co., Ltd.                        *
 *                                                                            *
 *                           Copyright (C) 2011                               *
 *                          All rights reserved.                              *
 *                                                                            *
 *                       M/M Platform Lab. R&D Center                         *
 *                 Digital Media & Communications Business                    *
 *                                                                            *
 * This software is the confidential and proprietary information of Samsung   *
 * Electronics Co., Ltd. ("Confidential Information"). You shall not disclose *
 * such Confidential Information and shall use it only in accordance with the *
 * terms of the license agreement you entered into with Samsung Electronics   *
 * Co., Ltd.                                                                  *
 *                                                                            *
 * Removing or modifying of the above copyright notice or the following       *
 * descriptions will terminate the right of using this software.              *
 *                                                                            *
 * As a matter of courtesy, the authors request to be informed about uses of  *
 * this software and about bugs in this software.                             *
 ******************************************************************************/

/******************************************************************************
 * Sample implementation of MTAL for pthread-based platforms                  *
 *                                                                            *
 * Author                                                                     *
 * - Jeong-Yong Choi <eldragon.choi@samsung.com>                              *
 ******************************************************************************/

#ifndef __SXQK_MTAL_PTHREAD_H__918734917581976381765481754189__
#define __SXQK_MTAL_PTHREAD_H__918734917581976381765481754189__

#include <sxpi_base.h>

#define USE_HIBSIG   1
#define FORCE_CPU_MASK  0

#if defined(ANDROID) && FORCE_CPU_MASK
#define _GNU_SOURCE
#include <sched.h>
#endif

#include <pthread.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern "C"
{
#endif

#define MTASK_TS_RUNNING           0
#define MTASK_TS_STOPPED           1
#define MTASK_TS_TERMINATED        2

#define MTASK_TO_CTX(t)            ((MTASK_CTX *)(t))
#define MAX_MTASK_CNT              12

#define sxqkmt_assert_msg(x) \
	printf("[%s:%d] assert failed! ("#x")\n", __FILE__, __LINE__)

#define sxqkmt_assert_rv(x,r) {if(!(x)){sxqkmt_assert_msg(x); return (r);}}
#define sxqkmt_assert_g(x,g) {if(!(x)){sxqkmt_assert_msg(x); goto g;}}

typedef struct
{
	int               idx;
	pthread_t         tid;
	pthread_cond_t    wakup;
	pthread_mutex_t   mtx_wakup;
	volatile int      wakup_sig;
	SXPI_MTAL_ENTRY   entry;
	void            * arg;
	int               ret;
#if !USE_HIBSIG
	volatile int      state;
#endif
} MTASK_CTX;

static void * _sxqk_mtask_bridge(void * arg)
{
	MTASK_CTX * ctx;

	ctx = (MTASK_CTX *)arg;

	while(1)
	{
		pthread_mutex_lock(&ctx->mtx_wakup);
		if(ctx->wakup_sig == MTASK_TS_STOPPED)
		{
			pthread_cond_wait(&ctx->wakup, &ctx->mtx_wakup);
		}

		if(ctx->wakup_sig == MTASK_TS_TERMINATED)
		{
			pthread_mutex_unlock(&ctx->mtx_wakup);
			break;
		}
		pthread_mutex_unlock(&ctx->mtx_wakup);

#if USE_HIBSIG
		ctx->ret = ctx->entry(ctx->arg);

		pthread_mutex_lock(&ctx->mtx_wakup);
		ctx->wakup_sig = MTASK_TS_STOPPED;
		pthread_cond_signal(&ctx->wakup);
		pthread_mutex_unlock(&ctx->mtx_wakup);
#else
		ctx->state = MTASK_TS_RUNNING;
		ctx->ret = ctx->entry(ctx->arg);

		pthread_mutex_lock(&ctx->mtx_wakup);
		ctx->wakup_sig = MTASK_TS_STOPPED;
		pthread_mutex_unlock(&ctx->mtx_wakup);

		ctx->state = MTASK_TS_STOPPED;
#endif
	}

	return NULL;
}

static SXPI_MTASK sxqk_mtal_create(SXPI_MTAL * mtal, int idx)
{
	MTASK_CTX * ctx;
	pthread_attr_t attr;
	int ret;

	ctx = (MTASK_CTX *)malloc(sizeof(MTASK_CTX));
	sxqkmt_assert_rv(ctx != NULL, NULL);

	memset(ctx, 0, sizeof(MTASK_CTX));

	ret = pthread_cond_init(&ctx->wakup, NULL);
	sxqkmt_assert_g(ret == 0, ERR);

	ret = pthread_mutex_init(&ctx->mtx_wakup, NULL);
	sxqkmt_assert_g(ret == 0, ERR);

	ret = pthread_attr_init(&attr);
	sxqkmt_assert_g(ret == 0, ERR);

	ret = pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);
	sxqkmt_assert_g(ret == 0, ERR);

	ctx->idx = idx;
#if !USE_HIBSIG
	ctx->state = MTASK_TS_STOPPED;
#endif
	ctx->wakup_sig = MTASK_TS_STOPPED;
	ret = pthread_create(&ctx->tid, &attr, _sxqk_mtask_bridge, (void *)ctx);
	sxqkmt_assert_g(ret == 0, ERR);

	pthread_attr_destroy(&attr);

	return (SXPI_MTASK)ctx;

ERR :
	pthread_attr_destroy(&attr);
	pthread_mutex_destroy(&ctx->mtx_wakup);
	pthread_cond_destroy(&ctx->wakup);
	free(ctx);
	return NULL;
}

static int sxqk_mtal_run(SXPI_MTASK id, SXPI_MTAL_ENTRY entry, void * arg)
{
	MTASK_CTX * ctx;

	ctx = MTASK_TO_CTX(id);

	ctx->ret = 0;
	ctx->arg = arg;
	ctx->entry = entry;

	pthread_mutex_lock(&ctx->mtx_wakup);
	ctx->wakup_sig = MTASK_TS_RUNNING;
	pthread_cond_signal(&ctx->wakup);
	pthread_mutex_unlock(&ctx->mtx_wakup);

	return SXPI_OK;
}

static int sxqk_mtal_join(SXPI_MTASK id, int * res)
{
	MTASK_CTX * ctx;

	ctx = MTASK_TO_CTX(id);

#if USE_HIBSIG
	pthread_mutex_lock(&ctx->mtx_wakup);
	if(ctx->wakup_sig == MTASK_TS_RUNNING)
	{
		pthread_cond_wait(&ctx->wakup, &ctx->mtx_wakup);
	}
	pthread_mutex_unlock(&ctx->mtx_wakup);
#else
	while(ctx->state != MTASK_TS_STOPPED) usleep(0);
#endif

	if(res != NULL) *res = ctx->ret;

	return SXPI_OK;
}

static void sxqk_mtal_delete(SXPI_MTASK id)
{
	MTASK_CTX * ctx;
	int * res = NULL;

	ctx = MTASK_TO_CTX(id);

	pthread_mutex_lock(&ctx->mtx_wakup);
	ctx->wakup_sig = MTASK_TS_TERMINATED;
	pthread_cond_signal(&ctx->wakup);
	pthread_mutex_unlock(&ctx->mtx_wakup);

	pthread_join(ctx->tid, (void **)&res);
	pthread_cond_destroy(&ctx->wakup);
	pthread_mutex_destroy(&ctx->mtx_wakup);
	free(id);
}


static int sxqk_mtal_init(SXPI_MTAL * mtal, int max_task_cnt)
{
#if defined(ANDROID) && FORCE_CPU_MASK
	unsigned long cpu_mask;
	cpu_set_t cpus0, cpus1;
#endif

	if(max_task_cnt > MAX_MTASK_CNT)
	{
		max_task_cnt = MAX_MTASK_CNT;
	}

#if defined(ANDROID) && FORCE_CPU_MASK
	if(max_task_cnt > 1)
	{
		cpu_mask = (unsigned long)(1<<max_task_cnt) - 1;
		/*printf("[%s] cpu_mask: %lu\n", __FUNCTION__, cpu_mask);*/

		sched_getaffinity(0, sizeof(cpu_set_t), &cpus0);
		sched_setaffinity(getpid(), sizeof(cpu_set_t), (cpu_set_t *)&cpu_mask);
		sched_getaffinity(0, sizeof(cpu_set_t), &cpus1);

		/*printf("[%s] sched_setaffinity : %lu -> %lu \n", __FUNCTION__, cpus0.__bits[0], cpus1.__bits[0]); */
	}
#endif

	memset(mtal, 0, sizeof(SXPI_MTAL));

	mtal->create       = sxqk_mtal_create;
	mtal->run          = sxqk_mtal_run;
	mtal->join         = sxqk_mtal_join;
	mtal->release      = sxqk_mtal_delete;
	mtal->max_task_cnt = max_task_cnt;

	return SXPI_OK;
}

static void sxqk_mtal_deinit(SXPI_MTAL * mtal)
{
	memset(mtal, 0, sizeof(SXPI_MTAL));
}

#ifdef __cplusplus
}
#endif

#endif /* __SXQK_MTAL_PTHREAD_H__918734917581976381765481754189__ */

