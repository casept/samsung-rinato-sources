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

/******************************************************************************
 * API declarations of FLAC demuxer library.                                  *
 *                                                                            *
 * Author                                                                     *
 * - Minseok Choi <minseok48.choi@samsung.com>                                *
 ******************************************************************************/

#ifndef __SFLACF_H__28935639867957269856938548354835684__
#define __SFLACF_H__28935639867957269856938548354835684__

#include "scmn_base.h"

#ifdef __cplusplus
extern "C" {
#endif

/*! FLAC demuxer identifier */
typedef void *                         SFLACFD;

/*! time unit */
typedef long long                      SFLACF_TIME;

/* return values ************************************************************/
/*! stream reached the end of the file */
#define SFLACF_EOF                     (1)
/*! operation completed successfully */
#define SFLACF_OK                      (0)
/*! invalid argument */
#define SFLACF_ERR_INVALID_ARG         (-1)
/*! not sufficient memory */
#define SFLACF_ERR_NOT_SUFF_MEM        (-2)
/*! invalid bitstream */
#define SFLACF_ERR_INVALID_BS          (-3)
/*! file I/O failed */
#define SFLACF_ERR_FILE_IO             (-4)
/*! not FLAC file */
#define SFLACF_ERR_NOT_FLAC            (-5)
/*! not supported file - mainly variable block size */
#define SFLACF_ERR_NOT_SUPPORT         (-6)
/*! current frame is larger that the buffer */
#define SFLACF_ERR_TOO_SMALL_BUF       (-7)
/*! unknown error */
#define SFLACF_ERR_UNKNOWN             (-100)

/* macro for check the return value *****************************************/
#define SFLACF_IS_OK(ret)              ((ret) >= 0)
#define SFLACF_IS_ERR(ret)             ((ret) < 0)

/*! SFLACF initialization descriptor */
typedef struct
{
	/*! identifying duration prevents accessing the end of the stream which is
	not proper under the streaming circumstances. setting this as 0 lets the
	demuxer calculate the duration. */
	SFLACF_TIME        duration;
} SFLACFD_INIT_DSC;

/*! Structure for audio stream information */
typedef struct
{
	/*! audio codec fourcc */
	unsigned long       fourcc;
	/*! maximum frame size */
	int                 max_frm_size;
	/*! sampling rate (Hz) */
	int                 hz;
	/*! bits per sample (bit) */
	int                 bits;
	/*! number of channel */
	int                 chans;
	/*! flag: does this supports seeking or not */
	int		            seekable;
	/*! average bytes per second */
	int                 avg_bytes_per_sec;

	/*! total number of samples */
	long long           samples;
	/*! minimum block size */
	int                 min_blk_size;
	/*! maximum block size */
	int                 max_blk_size;
	/*! minimum frame size */
	int                 min_frm_size;
	/*! duration (100-ns unit) */
	SFLACF_TIME         duration;
	/*! tag */
	SCMN_MTAG         * mtag;
} SFLACFD_INFO;

/*!
 *****************************************************************************
 * @brief Creates FLAC demuxer instance using SCMN_MFAL.
 *
 * NOTE: This function should be called before calling the other functions.
 *
 * @param mfal [in] SCMN_MFAL structure.
 *        init_dsc [in] initialization descriptor.
 *        info [out] audio informations.
 *        err [out] error code. this can be NULL.
 *
 * @return If success, returns an identifier. Else, returns NULL.
 *****************************************************************************
 */
SFLACFD sflacfd_create(SCMN_MFAL * mfal, SFLACFD_INIT_DSC * init_dsc,
	SFLACFD_INFO * info, int * err);

/*!
 *****************************************************************************
 * @brief Deinitializes FLAC demuxer instance and closes opened stream.
 *
 * @param id [in] SFLACFD identifier.
 *****************************************************************************
 */
void sflacfd_delete(SFLACFD id);

/*!
 *****************************************************************************
 * @brief Retrieves the stream informations.
 *
 * @param id [in] SFLACFD identifier.
 *        info [in] address of the stream information.
 *
 * @return If success, returns SFLACF_OK. Else, returns error code.
 *****************************************************************************
 */
int sflacfd_get_info(SFLACFD id, SFLACFD_INFO * info);

/*!
 *****************************************************************************
 * @brief Retrieves the sample and advanced to the next sample.
 *
 * @param id [in] SFLACFD identifier.
 *        buf [in] address of the output buffer.
 *        buf_size [in] size of the output buffer.
 *        bytes_read [out] length of the current sample.
 *        start [out] start time.
 *        end [out] end time.
 *
 * @return If success, returns SFLACF_OK. Else, returns error code.
 *****************************************************************************
 */
int sflacfd_get_frm(SFLACFD id, void * buf, int buf_size, int * bytes_read,
	SFLACF_TIME * start, SFLACF_TIME * end);

/*!
 *****************************************************************************
 * @brief Jumps to the specified position.
 *
 * @param id [in] SFLACFD identifier.
 *        time [in] time to jump to.
 *        keytime [out] time stamp after seeking.
 *
 * @return If success, returns SFLACF_OK. Else, returns error code.
 *****************************************************************************
 */
int sflacfd_seek(SFLACFD id, SFLACF_TIME * time, SFLACF_TIME * keytime);

/*!
 *****************************************************************************
 * @brief Retrieves STREAMINFO block.
 *
 * @param id [in] SFLACFD identifier.
 *        buf [in] buffer for storing STREAMINFO block. It can be NULL.
 *        len [out] length of STREAMINFO block.
 *
 * @return If success, returns SFLACF_OK. Else, returns error code.
 *****************************************************************************
 */
int sflacfd_get_fmt(SFLACFD id, void * buf, unsigned int * len);

#ifdef __cplusplus
};
#endif

#endif /* __SFLACF_H__28935639867957269856938548354835684__ */

