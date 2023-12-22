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
 * API for S264 Encoder/Decoder                                               *
 ******************************************************************************/

#ifndef __S264_H__893243284930248930249309082943298432432__
#define __S264_H__893243284930248930249309082943298432432__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! S264 instance identifier for decoder */
typedef void                           * S264D;

/*! S264 instance identifier for encoder */
typedef void                           * S264E;

/* H.264 NAL unit type (nal_unit_type in NAL header) */
/*! Unknown type */
#define S264_NUT_UNKNOWN                 0
/*! Non-IDR slice type */
#define S264_NUT_SLICE                   1
/*! Data partition A type */
#define S264_NUT_DPA                     2
/*! Data partition B type */
#define S264_NUT_DPB                     3
/*! Data partition C type */
#define S264_NUT_DPC                     4
/*! IDR slice type */
#define S264_NUT_IDR                     5
/*! Supplemental enhancement information */
#define S264_NUT_SEI                     6
/*! Sequence parameter set */
#define S264_NUT_SPS                     7
/*! Picture parameter set */
#define S264_NUT_PPS                     8
/*! Access unit delimiter */
#define S264_NUT_AUD                     9
/*! End of sequence */
#define S264_NUT_EOSEQ                   10
/*! End of stream */
#define S264_NUT_EOSTREAM                11
/*! Filler data */
#define S264_NUT_FILL                    12
/*! Mixed type */
#define S264_NUT_MIXED                   24


/* NAL priority (nal_ref_idc in NAL header) */
#define S264_NP_DISPOSABLE               0
#define S264_NP_LOW                      1
#define S264_NP_HIGH                     2
#define S264_NP_HIGHEST                  3

/*! slice mode for non-contraint */
#define S264E_SM_NONE                    0
/*! slice mode for fixed MB count */
#define S264E_SM_FIXED_MB                1
/*! slice mode for fixed N byte */
#define S264E_SM_FIXED_BYTE              2

/*! maximum count of internal input picture buffer in encoder */
#define S264E_MAX_INBUF_CNT              4

/*! maximum slice count for a picture in encoder */
#define S264E_MAX_SLICE_CNT              256

/****************************************************
 * configuration type for S264D
 ****************************************************/
/* setting */
#define S264D_CFG_SET_NUM_THREAD      100

/* getting */
#define S264D_CFG_GET_NUM_THREAD      2100



/*! Initialization description for decoder */
typedef struct
{
	/*! 0: Uses NAL, 1: Uses Annex B/H.264 */
	int use_annexb;
	/* 0: No error concealment, 1: Use error conceament */
	int use_ec;
	/*! 0: No acceleration (S/W), 
	    1: Uses Acceleration (H/W), 
	    2: Uses Acceleration (S/W) <- currently not supported 
	*/
	int use_accel;
	/*! display delay for MFC */
	int display_delay;
	/*! use output buffer cache for MFC */
	int use_cache;
} S264D_INIT_DSC;

/*! Decoder output status information structure */
typedef struct
{
	/*! A decoded picture is available? */
	int                 pa;
	/*! Width of decoded picture */
	int                 w;
	/*! Height of decoded picture */
	int                 h;
	/*! Byte size of decoded bitstream (read size of bitstream) */
	int                 read;
	/*! Picture number increased whenever decoding a picture. This may not
	be equal to frame_num or POC of H.264 */
	unsigned long       pn;
	/*! NAL unit type of decoded NAL */
	int                 nut;
	/*! NAL priority of decoded NAL */
	int                 pri;
	/*! Picture type */
	unsigned char       pt;
	/*! Picture Order Count */
	unsigned int        poc;
} S264D_STAT;

/*! Initialization description for encoder */
typedef struct
{
	/*! Picture width */
	int            w;
	/*! Picture height */
	int            h;
	/*! Quantization parameter (can be 1 ~ 51). If the rate control is enabled,
	and this value is zero, the QP is calculated automatically. Otherwise,
	if RC is enabled but this value is not zero, the setted vaule is
	initial QP for first picture encoding. */
	int            qp;
	/*! Bit rate (bps). Zero value means rate control is off. */
	int            bps;

	/*! Frame rate (Hz) */
	int            fps;
	/*! count of input frame buffer inside of encoder (min=0, max=4) */
	int            inbuf_cnt;
	/*! Period of IDR-picture.\n
	- 0: only one IDR picture at the first time.\n
	- 1: every picture is coded in IDR-picture
	*/
	int            idr_period;
	/*! count of reference picture (min=1, max=3) */
	int            ref_pic_cnt;
	/*! Slice mode
	- S264E_SM_NONE: No slicing
	- S264E_SM_FIXED_MB: Slicing by the fixed number of macroblock
	- S264E_SM_FIXED_BYTE: Slicing by the fixed number of byte
	*/
	int            slice_mode;
	/*! Slice mode argument
	- If the slice mode is S264E_SM_NONE, this value is ignored.
	- If the slice_mode is S264E_SM_FIXED_MB, this value is the number of
	  macroblock.
	- If the slice mode is S264E_SM_FIXED_BYTE, this value is the number of
	  byte.
	*/
	int            slice_mode_arg;
	/*! Bounded minimum QP. When RC is ON, the calculating QP is above this. */
	int 		   qp_min;
	/*! Bounded maximum QP. When RC is ON, the calculating QP is below this. */
	int 		   qp_max;
	/*! Bitstream output format
	- 0: NAL format
	- 1: Annex B/H.264 format
	*/
	int            use_annexb;
	/*! Enable deblocking filter or not
	- 0: No deblocking filter
	- 1: Use deblocking filter
	*/
	int            use_deblock;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int            use_accel;
    /*! 0: NV12_LINEAR, 1: NV12_TILE
    If use_accel parameter is set to 0, i.e., software encoder,
    this parameter is unavailable. */
    int            color_format;
} S264E_INIT_DSC;

/*! Parameters for encoding of each picture */
typedef struct
{
	/*! Force IDR-picture */
	int              f_idr;
	/*! new quantization parameter. If zero or rate control enabled, ignored */
	int              qp;
	/*! new bitrate. If zero or rate control disabled, ignored */
	int              bps;
	/*! new framerate.If zero, ignored */
	int              fps;
	/*! New argument of slice mode. if zero, ignored */
	int              slice_mode_arg;
} S264E_PARAM;

/*! Encoder output status information structure */
typedef struct
{
	/*! An encoded picture is available? */
	int                 pa;
	/*! Encoded stream byte size */
	int					write;
	/*! Picture number increased whenever encoding a picture. This may not
	be equal to frame_num or POC of H.264 */
	unsigned long       pn;
	/*! NAL unit type of encoded NAL */
	int                 nut;
	/*! quantization parameter */
	int                 qp;
	/*! reconstructed picture */
	SCMN_IMGB           rec;
	/*! The total number of slice in one picture */
	int                 slice_cnt;
	/*! Array containing byte size for each slice */
	int               * slice_size;
} S264E_STAT;

/* Common functions for H.264 decoder and encoder */
int   s264_init(void);
void  s264_deinit(void);

/* Function declaration for H.264 decoder */
S264D s264d_create(S264D_INIT_DSC * init_dsc, int * err);
void  s264d_delete(S264D id);
int   s264d_decode(S264D id, SCMN_BITB * bitb, SCMN_IMGB * img, S264D_STAT * stat);
int   s264d_dpb_flush(S264D id, SCMN_IMGB * imgb, S264D_STAT * stat);
int   s264d_config(S264D id, int cfg, void * data, int * size);


/* Function declaration for H.264 encoder */
S264E s264e_create(S264E_INIT_DSC *init_dsc, int * err);
void  s264e_delete(S264E id);
int   s264e_encode_sps(S264E id, SCMN_BITB * bitb, S264E_STAT * stat);
int   s264e_encode_pps(S264E id, SCMN_BITB * bitb, S264E_STAT * stat);
int   s264e_encode(S264E id, SCMN_IMGB * img, S264E_PARAM * param,
	SCMN_BITB * bitb, S264E_STAT * stat);
int   s264e_get_inbuf(S264E id, int idx, SCMN_IMGB * img);

#ifdef __cplusplus
}
#endif

#endif /* __S264_H__893243284930248930249309082943298432432__ */

