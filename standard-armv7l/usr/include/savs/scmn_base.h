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
 * Common include file for Samsung Audio/Video Solution                       *
 *                                                                            *
 ******************************************************************************/

#ifndef __SCMN_BASE_H__930824390247839028439204839024832__
#define __SCMN_BASE_H__930824390247839028439204839024832__

/*! Image dimension (width & height) changed */
#define SAVS_DIM_CHANGED           (101)
/*! General operation success */
#define SAVS_OK                    (0)

/*! Not sufficient memory */
#define SAVS_ERR_NOT_SUFF_MEM      (-101)
/*! Not supported function */
#define SAVS_ERR_NOT_SUPPORT       (-102)
/*! Invalid argument error */
#define SAVS_ERR_INVALID_ARG       (-103)
/*! Invalid configuration data */
#define SAVS_ERR_INVALID_CONFIG    (-104)
/*! Invalid bitstream */
#define SAVS_ERR_CORRUPTED_BS      (-105)

/*! Too small bitstream buffer (encoder only) */
#define SAVS_ERR_SMALL_BS_BUF      (-301)
/*! Too small image buffer (decoder only) */
#define SAVS_ERR_SMALL_IMG_BUF     (-302)
/*! Generic hardware problem */
#define SAVS_ERR_HW                (-303)
/*! Not available resource now */
#define SAVS_ERR_NOT_AVAILABLE     (-304)
/*! Not expected execution point */
#define SAVS_ERR_NOT_EXPECTED      (-305)

/*! Unknown error */
#define SAVS_ERR_UNKNOWN           (-2000)

/*! Return value checking macro */
#define SAVS_IS_OK(ret)            ((ret) >= 0)
#define SAVS_IS_ERR(ret)           ((ret) < 0)

/*! For temporary use, following definition will be removed */
/*! These are copied from each header of codecs in old version */
#define S263_DIM_CHANGED            (1)
#define S263_OK                     (0)
#define S263_ERR_NOT_SUFF_MEM       (-2)
#define S263_ERR_NOT_SUPPORT        (-3)
#define S263_ERR_INVALID_ARG        (-4)
#define S263_ERR_INVALID_BS         (-5)
#define S263_ERR_SMALL_BS_BUF       (-6)
#define S263_ERR_SMALL_IMG_BUF      (-7)
#define S263_ERR_NOT_EXPECTED       (-8)
#define S263_ERR_HW                 (-9)
#define S263_ERR_NOT_AVAILABLE      (-10)
#define S263_ERR_UNKNOWN            (-0xFF)
#define S263_IS_OK(ret)             ((ret) >= 0)
#define S263_IS_ERR(ret)            ((ret) < 0)

#define SMP4V_DIM_CHANGED           (1)
#define SMP4V_OK                    (0)
#define SMP4V_ERR_NOT_SUFF_MEM      (-2)
#define SMP4V_ERR_NOT_SUPPORT       (-3)
#define SMP4V_ERR_INVALID_ARG       (-4)
#define SMP4V_ERR_INVALID_BS        (-5)
#define SMP4V_ERR_SMALL_BS_BUF      (-6)
#define SMP4V_ERR_SMALL_IMG_BUF     (-7)
#define SMP4V_ERR_NOT_EXPECTED      (-8)
#define SMP4V_ERR_HW                (-9)
#define SMP4V_ERR_NOT_AVAILABLE     (-10)
#define SMP4V_ERR_UNKNOWN           (-0xFF)
#define SMP4V_IS_OK(ret)            ((ret) >= 0)
#define SMP4V_IS_ERR(ret)           ((ret) < 0)

#define S264_DIM_CHANGED            (1)
#define S264_OK                     (0)
#define S264_ERR_NOT_SUFF_MEM       (-2)
#define S264_ERR_NOT_SUPPORT        (-3)
#define S264_ERR_INVALID_ARG        (-4)
#define S264_ERR_INVALID_BS         (-5)
#define S264_ERR_NOT_FIND_ANNEXB_PREFIX  (-6)
#define S264_ERR_INVALID_SPS        (-7)
#define S264_ERR_INVALID_PPS        (-8)
#define S264_ERR_SMALL_BS_BUF       (-10)
#define S264_ERR_SMALL_IMG_BUF      (-11)
#define S264_ERR_NOT_EXPECTED       (-12)
#define S264_ERR_HW                 (-13)
#define S264_ERR_NOT_AVAILABLE      (-14)
#define S264_ERR_UNKNOWN            (-0xFF)
#define S264_IS_OK(ret)             ((ret) >= 0)
#define S264_IS_ERR(ret)            ((ret) < 0)
 
/*! structure for representing variable data */
typedef struct
{
	int       type; /*type */
	int       size; /* byte size of data. size doesn't include '\0' */
	void    * data; /* address of data */
	int       ___dummy; /* dummy data to make align. don't use this */
} SCMN_VDATA;

#include "scmn_mtype.h"
#include "scmn_bitb.h"
#include "scmn_imgb.h"
#include "scmn_audb.h"
#include "scmn_mfal.h"
#include "scmn_mtag.h"

#if 0 /* we don't want to include time info. in lib */
char * scmn_version(void);
#endif

#endif /* __SCMN_BASE_H__930824390247839028439204839024832__ */

