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
 * Declarations of structure and primitive function for SMP123.               *
 *                                                                            *
 * Author                                                                     *
 * - Kwang Pyo Choi <kp5.choi@samsung.com>                                    *
 ******************************************************************************/


#ifndef __SMP123_H__398204328947382483902843924738294392048390248392__
#define __SMP123_H__398204328947382483902843924738294392048390248392__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SMP123 instance identifier for decoder */
typedef void                       * SMP123D;

/*! SMP123 instance identifier for encoder */
typedef void                       * SMP123E;

/* SMP123 General purpose return(error) code */
/*! General operation success */
#define SMP123_OK                    (0)
/*! Not sufficient memory */
#define SMP123_ERR_NOT_SUFF_MEM      (-2)
/*! Not supported function */
#define SMP123_ERR_NOT_SUPPORT       (-3)
/*! Invalid argument error */
#define SMP123_ERR_INVALID_ARG       (-4)
/*! Invalid bitstream */
#define SMP123_ERR_INVALID_BS        (-5)
/*! Not expected execution point */
#define SMP123_ERR_NOT_EXPECTED      (-8)
/*! Not sufficient bitstream */
#define SMP123_ERR_NOT_SUFF_BS       (-9)
/*! Bad CRC */
#define SMP123_ERR_BAD_CRC           (-10)
/*! No syncword */
#define SMP123_ERR_NO_SYNC           (-11)
/*! Unknown error */
#define SMP123_ERR_UNKNOWN           (-0XFF)

/* SMP123 return value checking macro ****************************************/
#define SMP123_IS_OK(ret)            ((ret) >= 0)
#define SMP123_IS_ERR(ret)           ((ret) < 0)

/* used for encoder */
#define SMP123_MAX_BS_SIZE           (1440)
#define SMP123_MIN_FRM_SIZE          (1152)
#define SMP123_MAX_NCH               (2)

/*! Decoder configure information structure */
typedef struct
{
	/*! 0: no channel packing, 1: every channels are packed into channel 0 */
	int               use_pack;
	/*! channel normalizing.\n
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
} SMP123D_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available? */
	int               fa;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int               read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long     fn;
	/*! number of channel */
	int               nch;
	/*! bit per sample */
	int               bits;
	/*! sampling frequency */
	int               hz;
} SMP123D_STAT;

/*! Encoder configure information structure */
typedef struct
{	
	/* default sampling frequency */
	int               hz;
	/* default number of channels */
	int               nch;
	/* default bps                */
	int               bps;
	/*! 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;

} SMP123E_INIT_DSC;

/*! Encoder output status information structure */
typedef struct
{
	/*! a frame is available? */
	int               fa;
	/*! byte size of encoded bitstream (read size of bitstream) */
	int               write;
	/*! frame number increased whenever encoding a frame. */
	unsigned long     fn;
	
} SMP123E_STAT;


/* common functions */
int smp123_init(void);
void smp123_deinit(void);

/* encoder functions */
SMP123E smp123e_create(int m, SMP123E_INIT_DSC * init_dsc, int * err);
void smp123e_delete(SMP123E id);
int smp123e_encode(SMP123E id, SCMN_AUDB * audb, SCMN_BITB * bitb, 
	SMP123E_STAT * stat);

/* decoder functions */
SMP123D smp123d_create(SMP123D_INIT_DSC * init_dsc, int * err);
void smp123d_delete(SMP123D id);
int smp123d_reset(SMP123D id);
int smp123d_decode(SMP123D id, SCMN_BITB * bitb, SCMN_AUDB * audb,
	SMP123D_STAT * stat);

#ifdef __cplusplus
}
#endif

#endif /* __SMP123_H__398204328947382483902843924738294392048390248392__ */

