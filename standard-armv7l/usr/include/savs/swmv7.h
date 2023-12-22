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
 * Declarations of structure and primitive function for SWMV7.                *
 *                                                                            *
 ******************************************************************************/

#ifndef __SWMV7_H__984369876789432647352453625476345327432546345873424__
#define __SWMV7_H__984369876789432647352453625476345327432546345873424__

#ifdef __cplusplus
extern "C"
{
#endif

#include <scmn_base.h>

/*! SWMV7 instance identifier for decoder */
typedef void                      * SWMV7D;

/* SWMV7 frame type */
/*! I-frame type */
#define SWMV7_FT_I                  0
/*! P-frame type */
#define SWMV7_FT_P                  1
/*! Unknown type */
#define SWMV7_FT_UNKNOWN            10


/*! Decoder configure information structure */
typedef struct
{
	/*! frame width */
	int               w;
	/*! frame height */
	int               h;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;
}SWMV7D_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available? */
	int               fa;
	/*! width of decoded frame */
	int               w;
	/*! height of decoded frame */
	int               h;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int               read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long     fn;
	/*! frame type */
	int               ft;
} SWMV7D_STAT;

int swmv7_init(void);
void swmv7_deinit(void);
SWMV7D swmv7d_create(SWMV7D_INIT_DSC * init_dsc, int * err);
void swmv7d_delete(SWMV7D id);
int swmv7d_decode(SWMV7D id, SCMN_BITB * bitb, SCMN_IMGB * img,
	SWMV7D_STAT * stat);

#ifdef __cplusplus
}
#endif

#endif /* __SWMV7_H__984369876789432647352453625476345327432546345873424__ */

