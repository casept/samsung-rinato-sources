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
 * SAAC API declaration 	                 			                      *
 *                                                                            *
 * Author                                                                     *
 * - ChangJoon Lee <yesjoon.lee@samsung.com>                                  *
 * - Rishabh Bhargava <rishabh.b@samsung.com>                                 *
 ******************************************************************************/


#ifndef __SAAC_H__530845556494835668456698308455860635__
#define __SAAC_H__530845556494835668456698308455860635__

#ifdef __cplusplus
extern "C"
{
#endif

#include <scmn_base.h>

#define SAACD_OPT_NONE              (0)
#define SAACD_OPT_PS_OFF            (1)
#define SAACD_OPT_SBR_PS_OFF        (3)

/* Maximum number of channels */
#define SAAC_MAX_NCH                 (5+1)
/* Frame size of AAC */
#define SAAC_MIN_FRM_SIZE            (1024)
/* Frame size of SBR */
#define SAAC_MAX_FRM_SIZE            (2 * SAAC_MIN_FRM_SIZE) 

/* Sec 8.2.2: 6144*NCC bits */
/* Decoder input buffer size */
#define SAAC_MIN_BS_SIZE   (768*SAAC_MAX_NCH)
/* Encoder output buffer size */
#define SAAC_MAX_BS_SIZE   (768*(SAAC_MAX_NCH+1))

/* SAAC General purpose return (error) codes */
/*! General operation success */
#define SAAC_OK                      (0)
/*! Not sufficient memory */
#define SAAC_ERR_NOT_SUFF_MEM        (-2)
/*! Not supported function */
#define SAAC_ERR_NOT_SUPPORTED       (-3)
/*! Invalid argument error */
#define SAAC_ERR_INVALID_ARG         (-4)
/*! Invalid bitstream */
#define SAAC_ERR_INVALID_BS          (-5)
/*! Not expected execution point */
#define SAAC_ERR_NOT_EXPECTED        (-8)
/*! Not sufficient bitstream */
#define SAAC_ERR_NOT_SUFF_BS         (-9)
/*! Bad CRC */
#define SAAC_ERR_BAD_CRC             (-10)
/*! Invalid Huffman codebook */
#define SAAC_ERR_INVALID_HCB         (-11)
/*! Unknown error */
#define SAAC_ERR_UNKNOWN             (-0XFF)

/* SAAC return value checking macro ****************************************/
#define SAAC_IS_OK(ret)              ((ret) >= 0)
#define SAAC_IS_ERR(ret)             ((ret) < 0)

/*! SAACE instance identifier for encoder */
typedef void                       * SAACE;

/*! SAACD instance identifier for decoder */
typedef void                       * SAACD;

/*! Encoder configure information structure */
typedef struct
{
	/* default bps                */
	int               bps;
	/* default sampling frequency */
	int               hz;
	/* default number of channels */
	int               nch;
} SAACE_INIT_DSC;

/*! Decoder configure information structure */
typedef struct
{
	/*! 0: no channel packing, 1: every channels are packed into channel 0 */
	int               use_pack;
	/*! channel normalizing.\n
	0: no normalizing \n
	1: 1 channel normalizing \n
	2: 2 channel normalizing
	*/
	int               use_normnch;
	/*! bits per sample normalizing.\n
	0: no normalizing \n
	1: 8-bit normalizing \n
	2: 16-bit normalizing \n
	3: 24-bit normalizing
	*/
	int               use_normbits;
	/*! 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;
 	/* decoding option \n
	SAACD_OPT_NONE: No option.\n
	SAACD_OPT_PS_OFF: PS tool off, Operates AAC + SBR only.\n
	SAACD_OPT_SBR_PS_OFF: SBR and PS tools off, Operates AAC only.\n
	*/
	int               opt;
	/* default sampling frequency */
	int               hz;
	/* default number of channels */
	int               nch;
	/* bsac present flag */
	int               bsac_present;
} SAACD_INIT_DSC;

/*! Encoder output status information structure */
typedef struct
{
	/*! a encoded frame is available? */
	int               fa;
	/*! byte size of encoded bitstream (write size of bitstream) */
	int               write;
	/*! frame number increased whenever encoding a frame. */
	unsigned long     fn;
} SAACE_STAT;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available? */
	int               fa;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int               read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long     fn;
	/*! number of decoded output channel, 
	    this value is influenced by opt in INIT_DSC 
		or channel normailizing */
	int               nch;
	/*! output bit per sample. */
	int               bits;
	/*! output sampling frequency, this value is influenced by opt in INIT_DSC */
	int               hz;
} SAACD_STAT;

/*! Decoder information structure */
typedef struct
{
	/*! number of channel. this value is influenced by PS*/
	/*! This value is not influenced by channel normalizing or opt in INIT_DSC */
	/*! If PS on, nch should be 2 */
	int               nch; 
	/*! sampling frequency. this value is influenced by SBR*/
	/*! This value is not influenced by opt in INIT_DSC */
	/*! If SBR on, hz should be doubled */
	int               hz;
	/* Flag to find precense of SBR. */
	int               sbr;
	/* Flag to find precense of PS. */
	int               ps;
} SAACD_INFO;

/* common functions */
int saac_init(void);
void saac_deinit(void);

/* encoder functions */
SAACE saace_create(SAACE_INIT_DSC * init_dsc, int * err);
void saace_delete(SAACE id);
int saace_encode(SAACE id, SCMN_AUDB * audb, SCMN_BITB * bitb, 
				 SAACE_STAT * stat);

/* decoder functions */
SAACD saacd_create(SAACD_INIT_DSC * init_dsc, int * err);
void saacd_delete(SAACD id);
int saacd_decode(SAACD id, SCMN_BITB * bitb, SCMN_AUDB * audb,
				 SAACD_STAT * stat);
int saacd_info(SAACD id, SCMN_BITB * bitb, SAACD_INFO * info);
void saacd_reset(SAACD id);

#ifdef __cplusplus
}
#endif

#endif /* __SAAC_H__530845556494835668456698308455860635__ */

