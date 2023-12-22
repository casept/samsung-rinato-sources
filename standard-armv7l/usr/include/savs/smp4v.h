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
 * Declarations of structure and primitive function for SMP4V.                *
 *                                                                            *
 ******************************************************************************/

#ifndef __SMP4V_H__9320483920473824392439023248390248392043__
#define __SMP4V_H__9320483920473824392439023248390248392043__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SMP4V instance identifier for decoder */
typedef void *           SMP4VD;

/*! SMP4V instance identifier for encoder */
typedef void *           SMP4VE;

/* MPEG-4 bitstream type  ***************************************************/
/*! visual object sequence */
#define SMP4V_BT_VSOS                     0xB0
/*! visual object sequence end code */
#define SMP4V_BT_VSOSE                    0xB1
/*! visual object */
#define SMP4V_BT_VSO                      0xB5
/*! video object */
#define SMP4V_BT_VO                       0x00
/*! video object layer */
#define SMP4V_BT_VOL                      0x20
/*! video object plane */
#define SMP4V_BT_VOP                      0xB6
/*! group of video object plane */
#define SMP4V_BT_GVOP                     0xB3
/*! video plane with short video header */
#define SMP4V_BT_SVH                      0x80
/*! user data */
#define SMP4V_BT_UD                       0xB2
/*! video packet header */
#define SMP4V_BT_VP                       0xC4
/*! Unknown */
#define SMP4V_BT_UNKNOWN                  0xC5

/* MPEG-4 frmae type  ******************************************************/
/*! I-VOP frame type */
#define SMP4V_FT_I                        0
/*! P-VOP frame type */
#define SMP4V_FT_P                        1
/*! B-VOP frame type */
#define SMP4V_FT_B                        2
/*! Sprite frame type */
#define SMP4V_FT_S                        3
/*! SKIP frame type */
#define SMP4V_FT_SKIP                     4
/*! Mixed frame type */
#define SMP4V_FT_MIXED                    5
/*! Unknown type */
#define SMP4V_FT_UNKNOWN                  10

/*!
 * Frame flush command for decoder. \
 * (Application could call smp4vd_decode() function one more time, especially \
 *  when stat.ld equals zero. And at this time the argument of bitb->size \
 *  should be set to SMP4VD_FRM_FLUSH) \
 */
#define SMP4VD_FRM_FLUSH                   0xAAAAAAAA

/*! maximum count of internal input frame buffer in encoder */
#define SMP4VE_MAX_INBUF_CNT               4

/*! maximum video packet count for a frame in encoder */
#define SMP4VE_MAX_VP_CNT                  256

/****************************************************
 * configuration type for decoder
 ****************************************************/
/* setting */
#define SMP4VD_CFG_SET_USAGE            (100)

/* getting */
#define SMP4VD_CFG_GET_USAGE            (500)


/****************************************************
 * configuration type for encoder
 ****************************************************/
/* setting */
#define SMP4VE_CFG_SET_RC_MODE          (100)
#define SMP4VE_CFG_SET_COMPLEXITY       (101)

/* getting */
#define SMP4VE_CFG_GET_RC_MODE          (500)
#define SMP4VE_CFG_GET_COMPLEXITY       (501)


/****************************************************
 * CODEC USAGE
 ****************************************************/
#define SMP4V_USAGE_VT                  (0)
#define SMP4V_USAGE_PLAYBACK            (1)

/****************************************************
 * Complexity level
 ****************************************************/
#define SMP4V_CPX_LOW                   (1)
#define SMP4V_CPX_MEDIUM                (2)
#define SMP4V_CPX_HIGH                  (3)


/*! Initialization descriptor for decoder */
typedef struct
{
	/* 0: No error concealment, 1: Use error concealment */
	int use_ec;
	/* 0: S/W decoder working, 1: H/W related decoder working if availabe */
	int use_accel;
} SMP4VD_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! A decoded frame is available? */
	int                 fa;
	/*! Width of decoded frame */
	int                 w;
	/*! Height of decoded frame */
	int                 h;
	/*! Byte size of decoded bitstream (read size of bitstream) */
	int                 read;
	/*! Frame number increased whenever decoding a frame. */
	unsigned long       fn;
	/*! Bitstream type */
	int                 bt;
	/*! Frame type */
	int                 ft;
	/*! Low delay information of decoded frame (0:delayed, 1:no delay) */
	int                 ld;
} SMP4VD_STAT;

/*! Initialization descriptor for encoder */
typedef struct
{
	/*! Frame width */
	int            w;
	/*! Frame height */
	int            h;
	/*! Quantization parameter (can be 1 ~ 31).
	If the rate control is enabled, it is used for first frame only. */
	int            qp;
	/*! Bit rate (bps). Zero value means rate control is off.  */
	int            bps;
	/*! Frame rate (Hz), if available. If rate control is on, it should be
	set properly */
	int            fps;
	/*! Count of input frame buffer inside of encoder */
	int            inbuf_cnt;
	/*! Period of I-VOP. \n
	- 0: only one I-VOP at the first time. \n
	- 1: every frame is coded in I-VOP frame. \n
	*/
	int            gov_period;
	/*! Video packet size in byte. Zero value means no video packetization and
	disable resynchronization marker. */
	int            vp_size;
	/*! Bounded minimum QP.
	When rate control is on, the calculating QP is above this. */
	int            qp_min;
	/*! Bounded maximum QP.
	When rate control is on, the calculating QP is below this. */
	int            qp_max;
	/*! Enable frame skip on rate control.\n
	- 0: Disable skip frame.\n
    - 1: Enable skip frame.
	*/
	int            use_fskip;
	/*! Enable AC/DC prediction or not.
	- 0: Disable AC/DC prediction.
	- 1: Enable AC/DC prediction.
	*/
	int            use_acdc;
	/*! Enable header extention code or not.
	- 0: Disable header extention code.
	- 1: Enable header extention code.
   	*/
	int            use_hec;
	/*! Enable H/W accelerator or not.
	- 0: Disable acceleration (S/W).
	- 1: Enable acceleration (H/W).
   	*/
	int            use_accel;
	/*! 0: NV12_LINEAR, 1: NV12_TILE
	If use_accel parameter is set to 0, i.e., software encoder,
	this parameter is unavailable. */
	int            color_format;
	/*! Set Data Partitioning 
	- 0: Disable data partitioning.
	- 1: Enable data partitioning.
	*/
	int            use_dp; 
}SMP4VE_INIT_DSC;

/*! Parameters for encoding of each frame */
typedef struct
{
	/*! Force intra frame */
	int              f_intra;
	/*! Force skip frame */
	int              f_fskip;
	/*! New quantization parameter. if zero or rate control enabled, ignored */
	int              qp;
	/*! New bitrate. if zero or rate control is disabled, ignored */
	int              bps;
	/*! New frame rate. if zero, ignored */
	int              fps;
	/*! New size of video packet. if zero or resynchronization marker disabled, ignored */
	int              vp_size;
} SMP4VE_PARAM;

/*! Encoder output status information structure */
typedef struct
{
	/*! An encoded frame is available? */
	int                 fa;
	/*! Encoded stream byte size */
	int					write;
	/*! Frame count increased whenever encoding a picture. */
	unsigned long       fn;
	/*! Frame type of encoded frame */
	int                 ft;
	/*! Quantization parameter */
	int                 qp;
	/*! reconstructed frame */
	SCMN_IMGB           rec;
	/*! The total number of video packets in one frame */
	int                 vp_cnt;
	/*! Array containing byte size for each video packet */
	int               * vp_size;
} SMP4VE_STAT;

/* Common functions for MPEG-4 decoder and encoder */
int smp4v_init(void);
void smp4v_deinit(void);

/* Function declaration for MPEG-4 decoder */
SMP4VD smp4vd_create(SMP4VD_INIT_DSC * init_dsc, int * err);
void smp4vd_delete(SMP4VD id);
int smp4vd_decode(SMP4VD id, SCMN_BITB * bitb, SCMN_IMGB * img,
	SMP4VD_STAT * stat);
int smp4vd_config(SMP4VD id, int cfg, void * data, int * size);

/* Function declaration for MPEG-4 encoder */
SMP4VE smp4ve_create(SMP4VE_INIT_DSC * init_dsc, int * err);
void smp4ve_delete(SMP4VE id);
int smp4ve_encode_header(SMP4VE id, SCMN_BITB * bitb, SMP4VE_STAT * stat);
int smp4ve_encode(SMP4VE id, SCMN_IMGB * img, SMP4VE_PARAM * param,
	SCMN_BITB * bitb, SMP4VE_STAT * stat);
int smp4ve_get_inbuf(SMP4VE id, int idx, SCMN_IMGB * img);
int smp4ve_config(SMP4VE id, int cfg, void * data, int * size);

#ifdef __cplusplus
}
#endif

#endif /* __SMP4V_H__9320483920473824392439023248390248392043__ */

