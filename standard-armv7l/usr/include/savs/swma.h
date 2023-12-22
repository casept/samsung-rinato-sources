/******************************************************************************
 *                       Samsung Electronics Co., Ltd.                        *
 *                                                                            *
 *                           Copyright (C) 2011                               *
 *                          All rights reserved.                              *
 *                                                                            *
 *                       Mobile Media Lab. R&d Center                         *
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
 * Declarations of API for for SWMAD                                          *
 *                                                                            *
 * Author                                                                     *
 * - Seock Woo Jang (2009-09-19)                                              *
 * - Revathi S (revathi.s@samsung.com) /                                      * 
 *   Venkatakrishna Thanneeru (krishna.tv@samsung.com)(2011-02-01)            *
 ******************************************************************************/

#ifndef __SWMA_H__9302843874204839047382439289430248392043892043890248392__
#define __SWMA_H__9302843874204839047382439289430248392043892043890248392__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

typedef void * SWMAD;

/* SWMA General purpose return(error) code */
/* General operation success */
#define SWMA_OK                    (0)
/* Not sufficient memory */
#define SWMA_ERR                   (-1)
/* Not sufficient memory */
#define SWMA_ERR_NOT_SUFF_MEM      (-2)
/* Not supported function */
#define SWMA_ERR_NOT_SUPPORT       (-3)
/* Invalid argument error */
#define SWMA_ERR_INVALID_ARG       (-4)
/* Invalid bitstream */
#define SWMA_ERR_INVALID_BS        (-5)
/* No syncword */
#define SWMA_ERR_NO_SYNC           (-6)
/* Not expected execution point */
#define SWMA_ERR_NOT_EXPECTED      (-8)
/* Not sufficient bitstream */
#define SWMA_ERR_NOT_SUFF_BS       (-9)
/* Bad CRC */
#define SWMA_ERR_BAD_CRC           (-10)
/* Memory alloc fail */
#define SWMA_ERR_MEM_FAIL          (-11)
/* Broken payload or frame */
#define SWMA_ERR_BROKEN_FRM        (-12)
/* Hold because of lack of bs */
#define SWMA_ERR_HOLD              (-13)
/* Divided by Zero Error */
#define SWMA_ERR_DIV_ZERO          (-14)
/* Internal Error */
#define SWMA_ERR_INTERNAL          (-15)
/* Unknown error */
#define SWMA_ERR_UNKNOWN           (-0xFF)




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
	/*! bit per sample normalizing.\n
	0: no normalizing \n
	1: 8-bit normalizing \n
	2: 16-bit normalizing
	*/
	int               use_normbits;
	/*! 0: No acceleration (S/W), 1: Uses Acceleration (h/W) */
	int               use_accel;
	/*! wave format tag from WAVEFORMATEX.\n
	1 : WMAUDIO version 1, if waveformatex format tag is 0x160 \n
	2 : WMAUDIO version 2(WMA7, WMA8, WMA9), if waveformatex format tag is 0x161 \n
	3 : WMAUDIO version 3(WMA10), if waveformatex format tag is 0x162, then pro \n
	                              if waveformatex format tag is 0x163, it is lossless \n
	*/
	/* int               version;*/
	/*! number of channel.\n
	*/
	int               nch;
	/*! number of samples per second. it is valid when less than 48000 */ 
	int               hz;
	/*! average bytes per second. */
	int               avg_bytes;
	/*! block align. */
	int               blk_align;
	/*! bits per sample. */
	int               bits;
	/*! samples per block. */
	int               blk_smpls;
	/*! Transform flag.(0 - half tx, 1 - full tx) */
	int               full_hz;
	/*! encoded option. */
	int               enc_opt;
	/*! which channel are present in the stream */
	int               ch_mask;
	/*! downmixing channel mask; 
	int               dst_ch_mask; */
	/*! advanced encoding option */
	int               adv_enc_opt;
	/*! advanced encoding option 2 */
	int               adv_enc_opt2;
	/*! Format tag  */
	int               format_tag;
} SWMAD_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available and pcm out is valid */
	int               fa;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int               read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long     fn;
} SWMAD_STAT;

/* common functions */
int swma_init(void);
void swma_deinit(void);

/* decoder functions */
/* SWMAD swmad_create(SWMAD_INIT_DSC* init_dsc, int wmaudio_version, int * err); */
SWMAD swmad_create(SWMAD_INIT_DSC* init_dsc, int * err);
void swmad_delete(SWMAD id);
int swmad_decode(SWMAD id, SCMN_BITB * bitb, SCMN_AUDB * audb, SWMAD_STAT * stat);
int swmad_reset(SWMAD id);

#ifdef __cplusplus
}
#endif

#endif /* __SWMA_H__9302843874204839047382439289430248392043892043890248392__ */

