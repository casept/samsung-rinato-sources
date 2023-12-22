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
 * API of S263 video codec                                                    *
 *                                                                            *
 ******************************************************************************/

#ifndef __S263_H__9320483920473824392439023248390248392043__
#define __S263_H__9320483920473824392439023248390248392043__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! S263 instance identifier for encoder */
typedef void                           * S263E;

/*! S263 instance identifier for decoder */
typedef void                           * S263D;

/* H.263 bitstream type  ***************************************************/
/*! frame bitstream */
#define S263_BT_FRM                      0x00
/*! end of sequence */
#define S263_BT_EOS                      0x1F
/*! Unknown */
#define S263_BT_UNKNOWN                  0xFF

/* H.263 picture (frame) coding type  **************************************/
/*! I-frame type */
#define S263_FT_I                        0
/*! P-frame type */
#define S263_FT_P                        1
/*! Improved PB-frame type */
#define S263_FT_PB                       2
/*! B-frame type */
#define S263_FT_B                        3
/*! Skip frame type */
#define S263_FT_SKIP                     4
/*! Mixed frame type */
#define S263_FT_MIXED                    5
/*! Unknown type */
#define S263_FT_UNKNOWN                  10


/*! maximum count of internal input frame buffer in encoder */
#define S263E_MAX_INBUF_CNT              4

/*! maximum slice count for a frame in encoder */
#define S263E_MAX_SLICE_CNT              256

/*!
 * Initialization descriptor for decoder
 */
typedef struct
{
	/* 0: No error concealment, 1: Use error conceament */
	int use_ec;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int use_accel;
} S263D_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! a decoded frame is available? */
	int                 fa;
	/*! width of decoded frame */
	int                 w;
	/*! height of decoded frame */
	int                 h;
	/*! byte size of decoded bitstream (read size of bitstream) */
	int                 read;
	/*! frame number increased whenever decoding a frame. */
	unsigned long       fn;
	/*! bitstream type */
	int                 bt;
	/*! frame type */
	int                 ft;
} S263D_STAT;

/*! Encoder configure information structure */
typedef struct
{
	/*! Frame width */
	int               w;
	/*! Frame height */
	int               h;
	/*! Quantization parameter (can be 1 ~ 31).
	 * If the rate control is enabled, it is used for first frame only.
	*/
	int               qp;
	/*! Bit rate (bps). Zero value means rate control is off.  */
	int               bps;
    /*! Frame rate (Hz), if available. If rate control is on, it should be
	 * set properly */
	int               fps;
	/*! count of input frame buffer inside of encoder */
	int               inbuf_cnt;
	/*! Period of I frame (Must be larger than zero) */
	int               gop_period;
	/*! profile value. only support 0 and 3 */
	int               profile;
	/*! num. of MB rows for one gob. if zero, GOB is not used */
	int               gob_size;
	/*! slice size in the unit of bit. if zero, Slice is not used */
	int               slice_size;
	/*! Bounded minimum QP.
	When rate control is on, the calculating QP is above this. */
	int               qp_min;
	/*! Bounded maximum QP.
	When rate control is on, the calculating QP is below this. */
	int               qp_max;
	/* frame skipping enable */
	int               use_fskip;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int               use_accel;
    /*! 0: NV12_LINEAR, 1: NV12_TILE 
    If use_accel parameter is set to 0, i.e., software encoder, 
    this parameter is unavailable. */
    int               color_format;
}S263E_INIT_DSC;

/*! Parameters for encoding of each frame */
typedef struct
{
	/*! force intra frame */
	int                 f_intra;
	/*! force skip frame */
	int                 f_fskip;
	/*! New quantization parameter. if zero or rate control enabled, ignored */
	int                 qp;
	/*! New bitrate. if zero or rate control is disabled, ignored */
	int                 bps;
	/*! New frame rate. if zero, ignored */
	int                 fps;
	/*! New size of slice. If zero, ignored */
	int                 slice_size;
} S263E_PARAM;

/*! Encoder output status information structure */
typedef struct
{
	/*! An encoded picture is available? */
	int                 fa;
	/*! encoded bitstream byte size */
	int					write;
	/*! frame count increased whenever decoding a picture. */
	unsigned long       fn;
	/*! frame type of encoded frame */
	int                 ft;
	/*! quantization parameter */
	int                 qp;
	/*! reconstructed picture */
	SCMN_IMGB           rec;
	/*! The total number of slice in one frame */
	int                 slice_cnt;
	/*! Array containing byte size for each slice */
	int               * slice_size;
} S263E_STAT;

/* Common functions for H.263 decoder and encoder */
int s263_init(void);
void s263_deinit(void);

/* Function declaration for H.263 decoder */
S263D s263d_create(S263D_INIT_DSC * init_dsc, int * err);
void s263d_delete(S263D id);
int s263d_decode(S263D id, SCMN_BITB * bitb, SCMN_IMGB * img, S263D_STAT * stat);

/* Function declaration for H.263 encoder */
S263E s263e_create(S263E_INIT_DSC * init_dsc, int * err);
void s263e_delete(S263E id);
int s263e_encode(S263E id, SCMN_IMGB * img, S263E_PARAM * param,
	SCMN_BITB * bitb, S263E_STAT * stat);
int s263e_get_inbuf(S263E id, int idx, SCMN_IMGB * img);

#ifdef __cplusplus
}
#endif

#endif /* __S263_H__9320483920473824392439023248390248392043__ */

