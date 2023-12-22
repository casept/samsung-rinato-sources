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
 * Declarations of Image Processing functions                                 *
 *                                                                            *
 ******************************************************************************/


#ifndef __SIMGP_H__9028394073284382940382940372849328940__
#define __SIMGP_H__9028394073284382940382940372849328940__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/* return values ************************************************************/
/*! operation success */
#define SIMGP_OK                     (0)
/*! invalid argument */
#define SIMGP_ERR_INVALID_ARG        (-1)
/*! not sufficient memory */
#define SIMGP_ERR_NOT_SUFF_MEM       (-2)
/*! not supported yet */
#define SIMGP_ERR_NOT_SUPPORTED      (-3)
/*! unknown error */
#define SIMGP_ERR_UNKNOWN            (-100)

/* return value checking macro **********************************************/
#define SIMGP_IS_OK(ret)             ((ret) >= 0)
#define SIMGP_IS_ERR(ret)            ((ret) < 0)

/* rotation directions ******************************************************/
#define SIMGP_ROT_NONE               0
#define SIMGP_ROT_90L                1
#define SIMGP_ROT_90R                2
#define SIMGP_ROT_180                3
#define SIMGP_ROT_HORI               4
#define SIMGP_ROT_VERT               5

/* 8x8 deblocking filter strength range *************************************/
#define SIMGP_DBF8X8_STRENGTH_MIN    0
#define SIMGP_DBF8X8_STRENGTH_MAX    15

/* copy *********************************************************************/
int simgp_cpy(SCMN_IMGB * src, SCMN_IMGB * dst);

/* resize *******************************************************************/
int simgp_rsz(SCMN_IMGB * src, SCMN_IMGB * dst);
int simgp_rsz_csc(SCMN_IMGB * src, SCMN_IMGB * dst);
int simgp_rsz_rot(SCMN_IMGB * src, int rot, SCMN_IMGB * dst);

/* rotate *******************************************************************/
int simgp_rot(SCMN_IMGB * src, int rot, SCMN_IMGB * dst);

/* fpa (frame packing arrangement) - for 3D *********************************/
int simgp_fpa(SCMN_IMGB * src, SCMN_IMGB * dst, int ci_type);

/* color space conversion ***************************************************/
int simgp_csc(SCMN_IMGB * src, SCMN_IMGB * dst);
int simgp_csc_dither(SCMN_IMGB * src, SCMN_IMGB * dst);
int simgp_csc_rot(SCMN_IMGB * src, int rot, SCMN_IMGB * dst);

/* video quality enhancer ***************************************************/
int simgp_vqe_cs_init(int qlev);
int simgp_vqe_cs(SCMN_IMGB * src, SCMN_IMGB * dst);
int simgp_vqe_de(SCMN_IMGB * src, SCMN_IMGB * dst, int qlev);
int simgp_vqe_dejagging(SCMN_IMGB * src, SCMN_IMGB * dst, int qlev);

/* transcoder for AllShare ***************************************************/
int simgp_txc_csc_rsz_rot(SCMN_IMGB * src, SCMN_IMGB * dst, int rot, 
	SCMN_IMGB * tmp1, SCMN_IMGB * tmp2);
int simgp_txc_csc_rsz_rot_init(SCMN_IMGB * src, SCMN_IMGB * dst, int rot,
	SCMN_IMGB * tmp1, SCMN_IMGB * tmp2);
int simgp_txc_csc_rsz_rot_deinit(int rot, SCMN_IMGB * tmp1, SCMN_IMGB * tmp2);

/* deblocking filter for 8x8 block ******************************************/
void simgp_dbf8x8(unsigned char * img, int strength, int s, int w, int h);
int simgp_dbf8x8_yuv(SCMN_IMGB * img, int strength);

#ifdef __cplusplus
}
#endif

#endif /* __SIMGP_H__9028394073284382940382940372849328940__ */

