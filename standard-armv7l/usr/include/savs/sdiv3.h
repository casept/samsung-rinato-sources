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
 * Declarations of structure and primitive function for SDIV3.                *
 *                                                                            *
 * Author                                                                     *
 * - Bbong <jiwin.kim@samsung.com>                                            *
 ******************************************************************************/

#ifndef __SDIV3_H__984301584350432958443119913241004398104013503756__
#define __SDIV3_H__984301584350432958443119913241004398104013503756__

#ifdef __cplusplus
extern "C"
{
#endif

#include <scmn_base.h>

/*! SDIV3 instance identifier for decoder */
typedef void                      * SDIV3D;

/* SDIV3 General purpose return(error) code */
/*! General operation success */
#define SDIV3_OK                    (0)
/*! Not sufficient memory */
#define SDIV3_ERR_NOT_SUFF_MEM      (-2)
/*! Not supported function */
#define SDIV3_ERR_NOT_SUPPORT       (-3)
/*! Invalid argument error */
#define SDIV3_ERR_INVALID_ARG       (-4)
/*! Invalid bitstream */
#define SDIV3_ERR_INVALID_BS        (-5)
/*! Not expected execution point */
#define SDIV3_ERR_NOT_EXPECTED      (-8)
/*! Unknown error */
#define SDIV3_ERR_UNKNOWN           (-0xFF)

/* SDIV3 return value checking macro ****************************************/
#define SDIV3_IS_OK(ret)            ((ret) >= 0)
#define SDIV3_IS_ERR(ret)           ((ret) < 0)

/* SDIV3 frame type */
/*! I-frame type */
#define SDIV3_FT_I                  0
/*! P-frame type */
#define SDIV3_FT_P                  1
/*! Unknown type */
#define SDIV3_FT_UNKNOWN            10

/*! Decoder configure information structure */
typedef struct
{
	/*! frame width */
	int               w;
	/*! frame height */
	int               h;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;
}SDIV3D_INIT_DSC;

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
} SDIV3D_STAT;

/* common functions */
int sdiv3_init(void);
void sdiv3_deinit(void);

/* decoder functions */
SDIV3D sdiv3d_create(SDIV3D_INIT_DSC * init_dsc, int * err);
void sdiv3d_delete(SDIV3D id);
int sdiv3d_decode(SDIV3D id, SCMN_BITB * bitb, SCMN_IMGB * img,
	SDIV3D_STAT * stat);

#ifdef __cplusplus
}
#endif

#endif /* __SDIV3_H__984301584350432958443119913241004398104013503756__ */

