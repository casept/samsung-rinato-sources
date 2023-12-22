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
 * Declarations of API for for SAC3. 				                          *
 *                                                                            *
 * Author                                                                     *
 * - ChangJoon Lee <yesjoon.lee@samsung.com>                                  *
 ******************************************************************************/


#ifndef __SAC3_H__9302843874204839047382439289430248392043892043890248392__
#define __SAC3_H__9302843874204839047382439289430248392043892043890248392__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

typedef void *	SAC3D;

/* SAC3 General purpose return(error) code */
/* General operation success */
#define SAC3_OK                    (0)
/* Not sufficient memory */
#define SAC3_ERR_NOT_SUFF_MEM      (-2)
/* Not supported function */
#define SAC3_ERR_NOT_SUPPORT       (-3)
/* Invalid argument error */
#define SAC3_ERR_INVALID_ARG       (-4)
/* Invalid bitstream */
#define SAC3_ERR_INVALID_BS        (-5)
/* No syncword */
#define SAC3_ERR_NO_SYNC           (-6)
/* Not expected execution point */
#define SAC3_ERR_NOT_EXPECTED      (-8)
/* Not sufficient bitstream */
#define SAC3_ERR_NOT_SUFF_BS       (-9)
/* Bad CRC */
#define SAC3_ERR_BAD_CRC           (-10)
/* Bad block switching */
#define SAC3_ERR_BAD_BLOCK_SWITCH  (-11)
/* Unknown error */
#define SAC3_ERR_UNKNOWN           (-0XFF)

/* SAC3 return value checking macro ****************************************/
#define SAC3_IS_OK(ret)            ((ret) >= 0)
#define SAC3_IS_ERR(ret)           ((ret) < 0)

/* Channel modes **********************************************************/
#define SAC3_CM_DUAL               0 /* Independent channel (Ch1, Ch2) */
#define SAC3_CM_C                  1
#define SAC3_CM_L_R                2
#define SAC3_CM_L_C_R              3
#define SAC3_CM_L_R_S              4
#define SAC3_CM_L_C_R_S            5
#define SAC3_CM_L_R_SL_SR          6
#define SAC3_CM_L_C_R_SL_SR        7


/* Maximum number of channels */
#define SAC3_MAX_NCH              (5)


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
	/*! 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;
	/*! 0: No fast algorithm,      1: Uses fast algorithm    */
	int	              use_fast_2ch_out;

	int      use_lfe_out;
	int      use_dmixmod;
	int      use_comp_cut;
	int      use_comp_boost;
	int      use_comp_mode;
} SAC3D_INIT_DSC;

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
	    this value is influenced by channel normailizing */
	int               nch;
	/*! output bit per sample. */
	int               bits;
	/*! output sampling frequency */
	int               hz;
	/*! channel mode */
	int               chan_mode;
} SAC3D_STAT;


/*! Decoder output status information structure */
typedef struct
{
	/*! number of channel . the value is not influenced by normalizing*/
	int               nch;
	/*! sampling frequency */
	int               hz;
	/*! channel mode */
	int               chan_mode;
	/*! frame size */
	int               fsize;
} SAC3D_INFO;

/* common functions */
int sac3_init(void);
void sac3_deinit(void);

/* decoder functions */
SAC3D sac3d_create(SAC3D_INIT_DSC* init_dsc, int * err);
void sac3d_delete(SAC3D id);
void sac3d_reset(SAC3D id);
int sac3d_decode(SAC3D id, SCMN_BITB * bitb, SCMN_AUDB * audb, SAC3D_STAT * stat);
int sac3d_info(SAC3D id, SCMN_BITB * bitb, SAC3D_INFO * info);

int sac3d_get_valid_I0(SAC3D id, unsigned char * bs_buf, int bs_size, 
					   unsigned char * bs_inbuf, int * bs_insize);

int sac3d_setConf(SAC3D id, int dd_key, int dd_value);

#ifdef __cplusplus
}
#endif

#endif /* __SAC3_H__9302843874204839047382439289430248392043892043890248392__ */

