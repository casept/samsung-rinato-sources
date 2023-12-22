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
 * Declarations of API for SFLAC.                                             *
 *                                                                            *
 * Author                                                                     *
 * - Kwang Pyo Choi <kp5.choi@samsung.com>                                    *
 ******************************************************************************/

#ifndef __SFLAC_H__37820138904738483234273892743892473829478329__
#define __SFLAC_H__37820138904738483234273892743892473829478329__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SFLAC instance identifier for decoder */
typedef void                      * SFLACD;

/*
 * SFLAC General purpose return(error) code
 * NOTE: If you try changing these values, you must also change values in
 * 	dec/armv5te/sflacd_bs_armv5te.s
 */
/*! General operation success */
#define SFLAC_OK                    (0)
/*! Not sufficient memory */
#define SFLAC_ERR_NOT_SUFF_MEM      (-2)
/*! Not supported function */
#define SFLAC_ERR_NOT_SUPPORT       (-3)
/*! Invalid argument error */
#define SFLAC_ERR_INVALID_ARG       (-4)
/*! Invalid bitstream */
#define SFLAC_ERR_INVALID_BS        (-5)
/*! No syncword */
#define SFLAC_ERR_NO_SYNC           (-6)
/*! Not expected execution point */
#define SFLAC_ERR_NOT_EXPECTED      (-8)
/*! Not sufficient bitstream */
#define SFLAC_ERR_NOT_SUFF_BS       (-9)
/*! Bad CRC */
#define SFLAC_ERR_BAD_CRC           (-10)
/*! Unknown error */
#define SFLAC_ERR_UNKNOWN           (-0XFF)

/* SFLAC return value checking macro ****************************************/
#define SFLAC_IS_OK(ret)            ((ret) >= 0)
#define SFLAC_IS_ERR(ret)           ((ret) < 0)

/* SFLAC bitstream type */
/*! frame bitstream */
#define SFLAC_BT_FRM                0
/*! meta data bitstream */
#define SFLAC_BT_META               1
/*! meta + frame bitstream */
#define SFLAC_BT_MIXED              2
/*! Unknown bitstream */
#define SFLAC_BT_UNKNOWN            10

/*! Decoder configure information structure */
typedef struct
{
	/*! 0: no channel packing, 1: every channels are packed into channel 0 */
	int               use_pack;
	/*! number of channel normalizing.\n
	0: no normalizing \n
	1: 1 channel normalizing \n
	2: 2 channels normalizing
	*/
	int               use_normnch;
	/*! bit per sample normalizing.\n
	0: no normalizing \n
	1: 8-bit normalizing \n
	2: 16-bit normalizing
	*/
	int               use_normbits;
	/*! 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;
} SFLACD_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available? */
	int               fa;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int               read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long     fn;
	/*! bitstream type */
	int               bt;
	/*! number of channel */
	int               nch;
	/*! bit per sample */
	int               bits;
	/*! sampling frequency */
	int               hz;
} SFLACD_STAT;

/*! stream information structure */
typedef struct
{
	/*! bitstream type */
	int               bt;
	/*! number of channel . the value is not influenced by normalizing*/
	int               nch;
	/*! bit per sample. the value is not influenced by normalizing */
	int               bits;
	/*! sampling frequency */
	int               hz;
} SFLACD_INFO;

/* common functions */
int sflac_init(void);
void sflac_deinit(void);

/* decoder functions */
SFLACD sflacd_create(SFLACD_INIT_DSC * init_dsc, int * err);
void sflacd_delete(SFLACD id);
int sflacd_decode(SFLACD id, SCMN_BITB * bitb, SCMN_AUDB * audb,
	SFLACD_STAT * stat);
int sflacd_reset(SFLACD id);
int sflacd_info(SFLACD id, SCMN_BITB * bitb, SFLACD_INFO * info);

#ifdef __cplusplus
}
#endif

#endif /* __SFLAC_H__37820138904738483234273892743892473829478329__ */

