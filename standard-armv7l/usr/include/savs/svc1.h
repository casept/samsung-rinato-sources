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
 * Declarations of structure and primitive function for SVC1                  *
 *                                                                            *
 ******************************************************************************/


#ifndef __SVC1_H__2134213421452254621459078907890786789674578645__
#define __SVC1_H__2134213421452254621459078907890786789674578645__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SVC1 instance identifier for decoder */
typedef void *           SVC1D;


/*! picture type for simple/main profile */
#define SVC1_PT_I                        0 /* intra */
#define SVC1_PT_BI                       1 /* */
#define SVC1_PT_P                        2 /* predictive inter */
#define SVC1_PT_B                        3 /* bi-predictive inter */
#define SVC1_PT_SKIP                     4 /* skipped */


/*! Frame layer metadata */
typedef struct
{
	/*! the size of the FRAMEDATA field in bytes */
	int          framesize;
	/*! 32-bit time stamp of the current frame in milliseconds \
		relative to the time stamp of the first frame */
	int          timestamp;
} SVC1_FL_META;

/*!
 * Initialization descriptor for decoder
 */
typedef struct
{
	/*! flag that indicates whether bitstream include FLM(frame layer meta data)
	or not (1:FLM exists, 0:FLM does not exist) */
	int use_flm;
	/*! flag that indicates whether error concealment is working or not */
	int use_ec;
	/* 0 : No acceleration (S/W), 
	 * 1 : Uses Acceleration (H/W) 
	 * 2 : Single thread without deblocking filter
	 * 3 : 3 mb decoding threads + 1 db thread
	 * 4 : 4 mb decoding threads + 1 db thread
	*/
	int use_accel;
} SVC1D_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available? */
	int                 fa;
	/*! width of decoded frame */
	int                 w;
	/*! height of decoded frame */
	int                 h;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int                 read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long       fn;
	/*! bitstream type */
	int                 bt;
	/*! frame type */
	int                 ft;
} SVC1D_STAT;

int svc1_init(void);
void svc1_deinit(void);

SVC1D svc1d_create(SVC1D_INIT_DSC * init_dsc, int * err);
void svc1d_delete(SVC1D id);
int svc1d_decode(SVC1D id, SCMN_BITB * bitb, SCMN_IMGB * imgb, SVC1D_STAT * stat);
int svc1d_dpb_flush(SVC1D id, SCMN_IMGB * imgb, SVC1D_STAT * stat);
int svc1d_get_last_frame(SVC1D id, SCMN_IMGB * imgb, SVC1D_STAT * stat);
int svc1d_get_last_frame_mt(SVC1D id, SCMN_IMGB * imgb, SVC1D_STAT * stat);
#ifdef __cplusplus
}
#endif

#endif /* __SVC1_H__2134213421452254621459078907890786789674578645__ */

