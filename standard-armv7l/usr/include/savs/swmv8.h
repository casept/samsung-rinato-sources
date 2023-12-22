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
 * Declarations of structure and primitive function for SWMV8.                *
 *                                                                            *
 ******************************************************************************/

#ifndef __SWMV8_H__8146941341757241253159341551563155451361145354__
#define __SWMV8_H__8146941341757241253159341551563155451361145354__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SWMV8 instance identifier for decoder */
typedef void *           SWMV8D;

/*! picture type */
#define SWMV8_PT_I                        0 /* I picture */
#define SWMV8_PT_P                        1 /* P picture */
/* #define PT_XI                          2 */ /* XIntra8 */


/*!
 * Initialization descriptor for decoder
 */
typedef struct
{
 	/*! frame width */
	int w;
	/*! frame height */
	int h;
	/*! flag that indicates whether error concealment is working or not */
	int use_ec;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int use_accel;
} SWMV8D_INIT_DSC;

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
	/*! frame type */
	int                 ft;
} SWMV8D_STAT;

int swmv8_init(void);
void swmv8_deinit(void);

SWMV8D swmv8d_create(SWMV8D_INIT_DSC * init_dsc, int * err);
void swmv8d_delete(SWMV8D id);
int swmv8d_decode(SWMV8D id, SCMN_BITB * bitb, SCMN_IMGB * img,
	SWMV8D_STAT * stat);

#ifdef __cplusplus
}
#endif

#endif /* __SWMV8_H__8146941341757241253159341551563155451361145354__ */

