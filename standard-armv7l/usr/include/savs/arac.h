/******************************************************************************
 *                       Samsung Electronics Co., Ltd.                        *
 *                                                                            *
 *                           Copyright (C) 2010                               *
 *                          All rights reserved.                              *
 *                                                                            *
 *                       Mobile Media Lab. R&D Center                         *
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

#ifndef __ARAC_H__493243892439247382483928493274832849302843__
#define __ARAC_H__493243892439247382483928493274832849302843__

#ifdef __cplusplus
extern "C"
{
#endif

#include "sxpi_base.h"

/*****************************************************************************
 * config types for decoder
 *****************************************************************************/
#define ARACD_CFG_SET_GURA_MODE          (SXPI_COD_CFG_USER + 1)

/*****************************************************************************
 * config types for encoder
 *****************************************************************************/
#define ARACE_CFG_SET_HINT_SCR_VID       (SXPI_COD_CFG_USER + 100)
#define ARACE_CFG_SET_LF_TILES_ENABLED   (SXPI_COD_CFG_USER + 101)
#define ARACE_CFG_SET_WP_ENABLED         (SXPI_COD_CFG_USER + 102)

#define ARACE_CFG_GET_HINT_SCR_VID       (SXPI_COD_CFG_USER + 200)
#define ARACE_CFG_GET_LF_TILES_ENABLED   (SXPI_COD_CFG_USER + 201)
#define ARACE_CFG_GET_WP_ENABLED         (SXPI_COD_CFG_USER + 202)


/*****************************************************************************
 * H.264 NAL unit type (nal_unit_type in NAL header)
 *****************************************************************************/
/* Unknown type */
#define ARAC_BT_NUT_TRAIL_N              0
#define ARAC_BT_NUT_TRAIL_R              1
#define ARAC_BT_NUT_TSA_N                2
#define ARAC_BT_NUT_TLA                  3
#define ARAC_BT_NUT_STSA_N               4
#define ARAC_BT_NUT_STSA_R               5
#define ARAC_BT_NUT_RADL_N               6
#define ARAC_BT_NUT_DLP                  7
#define ARAC_BT_NUT_RASL_N               8
#define ARAC_BT_NUT_TFD                  9

/* BLA slice type */
#define ARAC_BT_NUT_BLA                  16
#define ARAC_BT_NUT_BLANT                17
#define ARAC_BT_NUT_BLA_N_LP             18
/* IDR slice type */
#define ARAC_BT_NUT_IDR                  19
#define ARAC_BT_NUT_IDR_N_LP             20
/* CRA slice type */
#define ARAC_BT_NUT_CRA                  21

/* Video prameter set */
#define ARAC_BT_NUT_VPS                  32
/* Sequence prameter set */
#define ARAC_BT_NUT_SPS                  33
/* Picture prameter set */
#define ARAC_BT_NUT_PPS                  34
/* Access unit delimiter */
#define ARAC_BT_NUT_AUD                  35
#define ARAC_BT_NUT_EOS                  36
#define ARAC_BT_NUT_EOB                  37
/* Filler data */
#define ARAC_BT_NUT_FD                   38
/* Supplemental enhancement information */
#define ARAC_BT_NUT_SEI                  39
#define ARAC_BT_NUT_SEI_SUFFIX           40

/*****************************************************************************
 * ETC
 *****************************************************************************/
/* maximum slice count for a picture in encoder */
#define ARACE_MAX_SLICE_CNT              256

/* maximum task count for decoder and encoder */
#define ARAC_MAX_TASK_CNT                8
#define ARACD_MAX_TASK_CNT               ARAC_MAX_TASK_CNT
#define ARACE_MAX_TASK_CNT               12

/* maximum tile count for horizontal or vertical direction */
#define ARACE_MAX_TILE_CNT               3

/* maximum frame count to be encoded simultaneously */
#define ARACE_MAX_FMT_CNT                4


/*****************************************************************************
 * extra description for creating of encoder
 *****************************************************************************/
typedef struct
{
	/* tiles column info (1-2) */
	int             tiles_column;
	/* tiles row info (1-2) */
	int             tiles_row;

	/* The number of frames to be encoded simultaneously (1-3)(frame-based MT)
	 *  - # of task should be set as multiples of frm_based_mt)
	 *  - 1 means frame-based MT will not be applied                         */
	int             fmt_cnt;

	/* fps (floating point unit) */
	SXPI_RATIO      fps_ratio;

	/* use filler data for RC */
	int             use_filler_data;
} ARACE_CDSC_EXTRA;

/*****************************************************************************
 * API for decoder and encoder
 *****************************************************************************/
int arac_init(void);
void arac_deinit(void);

/*****************************************************************************
 * API for decoder only
 *****************************************************************************/
SXPIX aracd_create(SXPI_VDEC_CDSC * cdsc, int * err);
void aracd_delete(SXPIX id);
int aracd_decode(SXPIX id, SXPI_BITB * bitb, SXPI_VDEC_STAT * stat);
int aracd_pull(SXPIX id, SXPI_IMGB ** imgb);
int aracd_clone(SXPIX id, SXPI_IMGB * imgb);
int aracd_config(SXPIX id, int cfg, void * buf, int * size);

/*****************************************************************************
 * API for encoder only
 *****************************************************************************/
SXPIX arace_create(SXPI_VENC_CDSC * cdsc, int * err);
void arace_delete(SXPIX id);
int arace_push(SXPIX id, SXPI_IMGB * imgb);
int arace_encode(SXPIX id, SXPI_BITB * bitb, SXPI_VENC_STAT * stat);
int arace_encode_header(SXPIX id, SXPI_BITB * bitb,  SXPI_VENC_STAT * stat);
int arace_get_inbuf(SXPIX id, SXPI_IMGB ** imgb);
int arace_config(SXPIX id, int cfg, void * buf, int * size);

#ifdef __cplusplus
}
#endif

#endif /* __ARAC_H__493243892439247382483928493274832849302843__ */


