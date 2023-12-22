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
 * Definitions of AAC library                                                 *
 *                                                                            *
 * Author                                                                     *
 * - Minseok Choi <minseok48.choi@samsung.com>                                *
 ******************************************************************************/

#ifndef __SAACF_H__2985743095729057093750295702975092750297509234__
#define __SAACF_H__2985743095729057093750295702975092750297509234__

#ifdef __cplusplus
extern "C" {
#endif

#include "scmn_base.h"

/*! SAAC demuxer identifier */
typedef void *                 SAACFD;

/*! time in 100-nanosec units */
typedef long long              SAACF_TIME;

/* return values ************************************************************/
/*! reached at the end of the stream */
#define SAACF_EOF                      (1)
/*! operation done successfully */
#define SAACF_OK                       (0)
/*! not sufficient memory */
#define SAACF_ERR_NOT_SUFF_MEM         (-1)
/*! invalid argument */
#define SAACF_ERR_INVALID_ARG          (-2)
/*! invalid data */
#define SAACF_ERR_INVALID_DATA         (-3)
/*! file i/o error */
#define SAACF_ERR_FILEIO               (-4)
/*! not expected operation */
#define SAACF_ERR_NOT_EXPECTED         (-5)
/*! not supported stream */
#define SAACF_ERR_NOT_SUPPORTED        (-6)
/*! unknown error */
#define SAACF_ERR_UNKNOWN              (-255)

/* macro for checking a return value ****************************************/
#define SAACF_IS_OK(ret)               ((ret) >= 0)
#define SAACF_IS_ERR(ret)              ((ret) < 0)

/* definitions of the type of the stream */
#define SAACF_FORMAT_ADIF              (0)
#define SAACF_FORMAT_ADTS              (1)

/*! initialization descriptor */
typedef struct
{
	/*! identifying duration prevents reading the whole stream to calculate
	 the duration, which is not proper under the streaming circumstances. if
	 this is set to 0, parser will calculate the duration */
	SAACF_TIME         duration;
} SAACFD_INIT_DSC;

/*! structure which describes the stream information */
typedef struct
{
	/*! audio codec fourcc */
	unsigned long       fourcc;
	/*! format of the stream */
	int                 fmt;
	/*! maximum frame size in bytes */
	int                 max_frm_size;
	/*! sampling rate (Hz) */
	int                 hz;
	/*! bits per a sample (bit) */
	int                 bits;
	/*! number of channels */
	int                 chans;
	/*! flag which indicates whether the stream is seekable or not */
	int		            seekable;
	/*! average bytes per second */
	int                 avg_bytes_per_sec;
	/*! flag which indicates whether the stream is a VBR stream or not */
	int                 vbr;
	/*! playback duration (100-nanosecond) */
	SAACF_TIME		    duration;
	/*! TAG (ID3) information if exists */
	SCMN_MTAG         * mtag;
} SAACFD_INFO;

/*!
 *****************************************************************************
 * @brief Creates AAC demuxer instance.
 *
 * NOTE: This function should be called before calling the other functions.
 *
 * @param mfal [in] SCMN_MFAL structure.
 *        info [out] stream informations.
 *        err [out] error code. this can be NULL.
 *
 * @return If success, returns an identifier. Else, returns NULL.
 *****************************************************************************
 */
SAACFD saacfd_create(SCMN_MFAL * mfal, SAACFD_INIT_DSC * init_dsc, 
	SAACFD_INFO * info, int * err);

/*!
 *****************************************************************************
 * @brief Deinitializes the demuxer instance and closes the stream.
 *
 * @param id [in] SAACFD identifier.
 *****************************************************************************
 */
void saacfd_delete(SAACFD id);

/*!
 *****************************************************************************
 * @brief For ADTS, this retrieves a frame. Otherwise, this just fills the
 *        buffer for ADIF streams.
 *
 * @param id [in] SAACFD identifier.
 *        buf [in] address of the output buffer.
 *        buf_size [in] size of the output buffer.
 *        bytes [out] number of bytes which have been actually read.
 *        start [out] start time of the frame.
 *        end [out] end time of the frame.
 *
 * NOTE: when only frame size is needed, set buf to NULL.
 *
 * @return If success, returns SAACF_OK. Else returns error code.
 *****************************************************************************
 */
int saacfd_get_frm(SAACFD id, void * buf, int size, int * bytes,
	SAACF_TIME * start, SAACF_TIME * end);

/*!
 *****************************************************************************
 * @brief Jumps to the specified position.
 *
 * @param id [in] SAACFD identifier.
 *        time [in] time to jump to.
 *        keytime [out] time stamp after seeking.
 *
 * @return If success, returns SAACF_OK. Else returns error code.
 *****************************************************************************
 */
int saacfd_seek(SAACFD id, SAACF_TIME * time, SAACF_TIME * keytime);

/*!
 *****************************************************************************
 * @brief Retrieves format data.
 *
 * @param id [in] SAACFD identifier.
 *        buf [in] buffer to store the format data.
 *        buf_size [in] size of the buffer.
 *        size [out] size of format data.
 *
 * @return If success, returns SAACF_OK. Else, returns error code.
 *****************************************************************************
 */
int saacfd_get_fmt(SAACFD id, void * buf, int buf_size, int * size);

#ifdef __cplusplus
};
#endif

#endif /* __SAACF_H__2985743095729057093750295702975092750297509234__ */


