/******************************************************************************
 *                       Samsung Electronics Co., Ltd.                        *
 *                                                                            *
 *                           Copyright (C) 2011                               *
 *                          All rights reserved.                              *
 *                                                                            *
 *                       M/M Platform Lab. R&D Center                         *
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

#ifndef __SXPI_BASE_H__8902438274832849328940382904832904839024__
#define __SXPI_BASE_H__8902438274832849328940382904832904839024__

/*****************************************************************************
 * general purpose return (error) code
 *****************************************************************************/
/* user's ok code */
#define SXPI_OK_USER                     (2000)
/* progress success, but output is not available temporarily */
#define SXPI_OK_OUT_NOT_AVAILABLE        (303)
/* no more frames, but it is OK */
#define SXPI_OK_NO_MORE_FRM              (205)
/* an error occurs in decoding, and it has been concealed, but it should be
treated in a success */
#define SXPI_OK_ERR_CONCEALED            (204)
/* frame dimension (width or height) has been changed */
#define SXPI_OK_DIM_CHANGED              (203)
/* decoding success, but output frame has been delayed */
#define SXPI_OK_FRM_DELAYED              (202)
/* reached EOF and it should be treated as a success */
#define SXPI_OK_EOF                      (102)
/* general operation success */
#define SXPI_OK                          (0)

/* not sufficient memory */
#define SXPI_ERR_OUT_OF_MEMORY           (-102)
/* unsupported function */
#define SXPI_ERR_UNSUPPORTED             (-103)
/* unexpected execution */
#define SXPI_ERR_UNEXPECTED              (-104)
/* invalid argument error */
#define SXPI_ERR_INVALID_ARG             (-105)
/* not available resource now */
#define SXPI_ERR_NOT_AVAILABLE           (-106)
/* generic hardware problem */
#define SXPI_ERR_HW                      (-107)
/* cannot open file */
#define SXPI_ERR_NOT_OPEN_FILE           (-108)
/* file I/O error */
#define SXPI_ERR_FILE_IO                 (-109)
/* malformed data or invalid data */
#define SXPI_ERR_MALFORMED_DATA          (-110)
/* reached EOF and it should be treated as an error */
#define SXPI_ERR_EOF                     (-111)
/* too small buffer: the data area passed is too small */
#define SXPI_ERR_SMALL_BUF               (-112)
/* invalid configuration */
#define SXPI_ERR_INVALID_CONFIG          (-113)
/* the maximum value has been reached already */
#define SXPI_ERR_REACHED_MAX             (-114)

/* invalid bitstream */
#define SXPI_ERR_INVALID_BS              (-202)
/* cannot allocate audio buffer */
#define SXPI_ERR_NOT_ALLOC_AUD_BUF       (-203)
/* cannot allocate frame buffer */
#define SXPI_ERR_NOT_ALLOC_FRM_BUF       (-203)
/* cannot allocate bitstream buffer */
#define SXPI_ERR_NOT_ALLOC_BS_BUF        (-204)
/* too small bitstream buffer */
#define SXPI_ERR_SMALL_BS_BUF            (-205)
/* too small audio buffer */
#define SXPI_ERR_SMALL_AUD_BUF           (-206)
/* too small image buffer */
#define SXPI_ERR_SMALL_IMG_BUF           (-207)
/* not sufficient bitstream */
#define SXPI_ERR_NOT_SUFF_BS             (-208)
/* bad (not matched) CRC */
#define SXPI_ERR_BAD_CRC                 (-209)
/* cannot sync frame */
#define SXPI_ERR_NO_SYNC                 (-210)
/* unsupported color space */
#define SXPI_ERR_UNSUPPORTED_CS          (-211)
/* bad (not matched) hash code */
#define SXPI_ERR_BAD_HASH                (-212)

/* unknown error */
#define SXPI_ERR_UNKNOWN                 (-1999)
/* user's error code */
#define SXPI_ERR_USER                    (-2000)

/*****************************************************************************
 * return code checking macro
 *****************************************************************************/
#define SXPI_IS_OK(ret)                  ((ret) >= 0)
#define SXPI_IS_ERR(ret)                 ((ret) < 0)

/*****************************************************************************
 * media types
 *****************************************************************************/
#define SXPI_MT_UNKNOWN              0 /* unknown media type */

/* video types **************************************************************/
/*! MPEG-1 video */
#define SXPI_MT_VID_MPG1             100
/*! MPEG-2 video */
#define SXPI_MT_VID_MPG2             101
/*! MPEG-4 part 2 video */
#define SXPI_MT_VID_MPG4             102
/*! H.263 */
#define SXPI_MT_VID_H263             103
/*! H.264/MPEG-4 part 10 */
#define SXPI_MT_VID_H264             104
/*! Microsoft WMV7 */
#define SXPI_MT_VID_WMV7             105
/*! Microsoft WMV8 */
#define SXPI_MT_VID_WMV8             106
/*! Microsoft WMV9 */
#define SXPI_MT_VID_WMV9             107
/*! VC-1 */
#define SXPI_MT_VID_VC1              SXPI_MT_VID_WMV9
/*! On2 VP6 */
#define SXPI_MT_VID_VP6              108
/*! On2 VP7 */
#define SXPI_MT_VID_VP7              109
/*! Divx 3.11 */
#define SXPI_MT_VID_DIV3             110
/*! Sorenson Spark (H.263) */
#define SXPI_MT_VID_SORENSON_SPARK   111
#define SXPI_MT_VID_SORENSON_H263    SXPI_MT_VID_SORENSON_SPARK
/*! Theora */
#define SXPI_MT_VID_THEORA           112
/*! RealVideo 10 :
RealVideo 1.0, based on h.263 (included with RealPlayer 5) */
#define SXPI_MT_VID_RV10             113
/*! RealVideo 20 :
RealVideo G2 and RealVideo G2+SVT, also based on h.263 (included with
RealPlayer 6) */
#define SXPI_MT_VID_RV20             114
/*! RealVideo 30 :
RealVideo 8, suspected to based largely on either H.263 or an early draft of
H.264 (included with RealPlayer 8) */
#define SXPI_MT_VID_RV30             115
/*! RealVideo 40 :
RealVideo 9, suspected to be based on H.264 (included with RealPlayer 9).
RealVideo 10, aka RV9 EHQ (included with RealPlayer 10). It is an encoder side improvement and therefore is fully backwards compatible with older players which has the RV9 decoder */
#define SXPI_MT_VID_RV40             116
/*! Microsoft MPEG-4 Version3 */
#define SXPI_MT_VID_MP43             117
/*! VC-1 AP*/
#define SXPI_MT_VID_VC1AP            118
/*! VP8 */
#define SXPI_MT_VID_VP8              119
/*! H.265 */
#define SXPI_MT_VID_H265             120
/*! HEVC */
#define SXPI_MT_VID_HEVC             SXPI_MT_VID_H265
/* MPEG-H video */
#define SXPI_MT_VID_MPEG_H           SXPI_MT_VID_HEVC
/*! VC-4 */
#define SXPI_MT_VID_VC4              121
/*! Huff YUV */
#define SXPI_MT_VID_HFYU             122
/* evey video */
#define SXPI_MT_VID_EVEY             160
/* linda video */
#define SXPI_MT_VID_LINDA            170
/* maetel video */
#define SXPI_MT_VID_MAETEL           171
/*! Raw video */
#define SXPI_MT_VID_RAW              123
/*! Unknown video type */
#define SXPI_MT_VID_UNKNOWN          299

/* audio types **************************************************************/
/*! Linear PCM */
#define SXPI_MT_AUD_PCM              300
/*! A-Law PCM */
#define SXPI_MT_AUD_PCM_A            301
/*! Mu-Law PCM */
#define SXPI_MT_AUD_PCM_M            302
/*! MPEG-1 audio layer 1 */
#define SXPI_MT_AUD_MP1              303
/*! MPEG-1 audio layer 2 */
#define SXPI_MT_AUD_MP2              304
/*! MPEG-1 audio layer 3 */
#define SXPI_MT_AUD_MP3              305
/*! MPEG-4 AAC-LC & MAIN */
#define SXPI_MT_AUD_AAC              306
/*! Dolby Digital AC-3 */
#define SXPI_MT_AUD_AC3              307
/*! DTS Inc. DTS */
#define SXPI_MT_AUD_DTS              308
/*! AMR-NB */
#define SXPI_MT_AUD_AMR_NB           309
/*! AMR-WB */
#define SXPI_MT_AUD_AMR_WB           310
/*! QCELP */
#define SXPI_MT_AUD_QCP              311
/*! Microsoft WMA2 (WMA7/8/9) */
#define SXPI_MT_AUD_WMA              312
#define SXPI_MT_AUD_WMA9_STD         SXPI_MT_AUD_WMA
/*! Microsoft WMA9 Professional */
#define SXPI_MT_AUD_WMA9_PRO         313
/*! Microsoft WMA9 Lossless */
#define SXPI_MT_AUD_WMA9_LS          314
/*! Microsoft WMA9 Voice */
#define SXPI_MT_AUD_WMA9_VOICE       315
/*! Microsoft WMA10 Professional */
#define SXPI_MT_AUD_WMA10_PRO        316
/*! MPEG-4 BSAC */
#define SXPI_MT_AUD_BSAC             320
/*! EVRC */
#define SXPI_MT_AUD_EVRC             321
/*! FLAC */
#define SXPI_MT_AUD_FLAC             322
/*! Vorbis */
#define SXPI_MT_AUD_VORBIS           323
/*! Apple Lossless Audio Codec */
#define SXPI_MT_AUD_ALAC             324
/*! G.726 ADPCM 16Kbps */
#define SXPI_MT_AUD_G726_16K         325
/*! G.726 ADPCM 24Kbps */
#define SXPI_MT_AUD_G726_24K         326
/*! G.726 ADPCM 32Kbps */
#define SXPI_MT_AUD_G726_32K         327
/*! G.726 ADPCM 40Kbps */
#define SXPI_MT_AUD_G726_40K         328
/*! Microsoft IMA ADPCM */
#define SXPI_MT_AUD_ADPCM_IMA_MS     329
/*! Microsoft ADPCM */
#define SXPI_MT_AUD_ADPCM_MS         330
/*! Real Audio Codec RA4/5 (sipr) */
#define SXPI_MT_AUD_RASP             331
/*! Real Audio Codec RA6 (cook) */
#define SXPI_MT_AUD_RACK             332
/*! G.722.1 Annex C Codec */
#define SXPI_MT_AUD_G7221            333
/*! Unknown audio type */
#define SXPI_MT_AUD_UNKNOWN          499

/* image types **************************************************************/
#define SXPI_MT_IMG_BMP              500
#define SXPI_MT_IMG_JPG              501
#define SXPI_MT_IMG_GIF              502
#define SXPI_MT_IMG_PNG              503
#define SXPI_MT_IMG_UNKNOWN          699

/* text types ***************************************************************/
#define SXPI_MT_TXT_ASCII            700
#define SXPI_MT_TXT_UTF16            701
#define SXPI_MT_TXT_UTF16BE          702
#define SXPI_MT_TXT_UTF8             703
#define SXPI_MT_TXT_UNICODE          SXPI_MT_TXT_UTF16
#define SXPI_MT_TXT_UNKNOWN          899

/* tag types ****************************************************************/
#define SXPI_MT_TAG_ID3              900
#define SXPI_MT_TAG_OGG              901
#define SXPI_MT_TAG_APE              902
#define SXPI_MT_TAG_FLAC             903
#define SXPI_MT_TAG_WMV              904
#define SXPI_MT_TAG_WMA              SXPI_MT_TAG_WMV
#define SXPI_MT_TAG_MP4              905
#define SXPI_MT_TAG_MKV              906
#define SXPI_MT_TAG_MKA              SXPI_MT_TAG_MKV
#define SXPI_MT_TAG_UNKNOWN          999

/* drm types ****************************************************************/
#define SXPI_MT_DRM_DIVX            1100
#define SXPI_MT_DRM_UNKNOWN         1299


/* file types ***************************************************************/
/*! ISO base video file format: MP4, 3GP... */
#define SXPI_MT_FLE_ISO              2000
/*! AVI video file format */
#define SXPI_MT_FLE_AVI              2001
/*! WMV video file format */
#define SXPI_MT_FLE_WMV              2002
/*! MKV video file format */
#define SXPI_MT_FLE_MKV              2003
/*! WMA audio file format */
#define SXPI_MT_FLE_WMA              SXPI_MT_FLE_WMV
/*! MKA audio file format */
#define SXPI_MT_FLE_MKA              SXPI_MT_FLE_MKV
/*! FLV video file format */
#define SXPI_MT_FLE_FLV              2004
/*! MP1 audio file format */
#define SXPI_MT_FLE_MP1              SXPI_MT_AUD_MP1
/*! MP2 audio file format */
#define SXPI_MT_FLE_MP2              SXPI_MT_AUD_MP2
/*! MP3 audio file format */
#define SXPI_MT_FLE_MP3              SXPI_MT_AUD_MP3
/*! FLAC audio file */
#define SXPI_MT_FLE_FLAC             SXPI_MT_AUD_FLAC
/*! BMP imag file */
#define SXPI_MT_FLE_BMP              SXPI_MT_IMG_BMP
/*! JPEG image file */
#define SXPI_MT_FLE_JPG              SXPI_MT_IMG_JPG
/*! GIF image file */
#define SXPI_MT_FLE_GIF              SXPI_MT_IMG_GIF
/*! PNG image file */
#define SXPI_MT_FLE_PNG              SXPI_MT_IMG_PNG
/*! OGG file format */
#define SXPI_MT_FLE_OGG              2005
/*! WAV audio file format */
#define SXPI_MT_FLE_WAV              2006
/*! AAC audio file format (ADTS or ADIF) */
#define SXPI_MT_FLE_AAC              2007
/*! AMR audio file format */
#define SXPI_MT_FLE_AMR              2008
/*! WEBM video file format */
#define SXPI_MT_FLE_WEBM             2009 /* == MKV? */
/*! RM video file format */
#define SXPI_MT_FLE_RMF              2010
/*! Unknown file format */
#define SXPI_MT_FLE_UNKNOWN          2199

/* subtitle types ***********************************************************/
/* Please note this url."http://en.wikipedia.org/wiki/Subtitle_(captioning)"*/
#define SXPI_MT_SUB_SRT				(3000)		/* SubRip(.srt) */
#define SXPI_MT_SUB_SMI				(3001)		/* SAMI(.smi) */
#define SXPI_MT_SUB_MDSUB			(3002)		/* MicroDVD(.sub) */
#define SXPI_MT_SUB_MPSUB			(3003)		/* MPSub(.sub) */
#define SXPI_MT_SUB_SVSUB			(3004)		/* SubViewer(.sub) */
#define SXPI_MT_SUB_VBSUB			(3005)		/* VobSub(.sub) */
#define SXPI_MT_SUB_3GPP			(3006)		/* 3GPP timed text(inband) */
#define SXPI_MT_SUB_ASS				(3007)		/* Advanced SSA(.ass) */
#define SXPI_MT_SUB_SSA				(3008)		/* Substation Alpha(.ssa) */
#define SXPI_MT_SUB_UNKNOWN			(3199)

/* macro to check media types ***********************************************/
#define SXPI_MT_IS_VID(t)           ((t)>=100 && (t)<300)
#define SXPI_MT_IS_AUD(t)           ((t)>=300 && (t)<500)
#define SXPI_MT_IS_IMG(t)           ((t)>=500 && (t)<700)
#define SXPI_MT_IS_TXT(t)           ((t)>=700 && (t)<900)
#define SXPI_MT_IS_DRM(t)           ((t)>=1100 && (t)<1300)

/*****************************************************************************
 * UUID and IID
 *****************************************************************************/
typedef struct
{
	unsigned int   d1;
	unsigned short d2;
    unsigned short d3;
    unsigned char  d4[8];
} SXPI_UUID;

typedef SXPI_UUID   SXPI_IID;

#define SXPI_UUID_IS_EQUAL(id1, id2)        \
    (((id1).d1    == (id2).d1)              \
	&& ((id1).d2    == (id2).d2)            \
	&& ((id1).d3    == (id2).d3)            \
    && ((id1).d4[0] == (id2).d4[0])         \
    && ((id1).d4[1] == (id2).d4[1])         \
    && ((id1).d4[2] == (id2).d4[2])         \
    && ((id1).d4[3] == (id2).d4[3])         \
    && ((id1).d4[4] == (id2).d4[4])         \
    && ((id1).d4[5] == (id2).d4[5])         \
    && ((id1).d4[6] == (id2).d4[6])         \
    && ((id1).d4[7] == (id2).d4[7]))

#define SXPI_IID_IS_EQUAL(id1, id2) SXPI_UUID_IS_EQUAL(id1, id2)

/*****************************************************************************
 * utilities for lifecycle management
 *****************************************************************************/
typedef int (*SXPI_FN_ADDREF)(void * x);
typedef int (*SXPI_FN_GETREF)(void * x);
typedef int (*SXPI_FN_RELEASE)(void * x);

#define SXPI_ADDREF_SAFE(x)        if(x){if((x)->addref){(x)->addref(x);}}
#define SXPI_GETREF_SAFE(x)        ((x)? (((x)->getref)? (x)->getref(x):-1): -1)
#define SXPI_RELEASE_SAFE(x)       if(x){if((x)->release){(x)->release(x);}}

/*****************************************************************************
 * declare interface of reference base
 *****************************************************************************/
#define SXPI_REFBASE_DECLARE(INTERFACE) \
	int refcnt; \
	int (*addref)  (INTERFACE * ref); \
	int (*getref)  (INTERFACE * ref); \
	int (*release) (INTERFACE * ref);

/*****************************************************************************
 * instance identifier
 *****************************************************************************/
typedef void                           * SXPIX;

/*****************************************************************************
 * media task abstraction layer
 *****************************************************************************/
typedef void * SXPI_MTASK;
typedef int (* SXPI_MTAL_ENTRY)(void * arg);

typedef struct _SXPI_MTAL SXPI_MTAL;
struct _SXPI_MTAL
{
	SXPI_MTASK (* create)(SXPI_MTAL * mtal, int idx);
	int  (* run)(SXPI_MTASK id, SXPI_MTAL_ENTRY entry, void * arg);
	int  (* join)(SXPI_MTASK id, int * res);
	void (* release)(SXPI_MTASK id);

	int    max_task_cnt;
	void * pdata[4];
	int  * ndata[4];
};

/*****************************************************************************
 * media file abstraction layer
 *****************************************************************************/
/* file descriptor */
typedef void *                 SXPI_MFAL_FD;

/* file position */
typedef long long              SXPI_MFAL_FPOS;
typedef long long              SXPI_MFAL_FSIZE;

#define SXPI_MFAL_OMODE_NONE                (0)
#define SXPI_MFAL_OMODE_WRITABLE            (1<<0)
#define SXPI_MFAL_OMODE_CACHABLE            (1<<1)
#define SXPI_MFAL_OMODE_APPEND              (1<<2)

/* file I/O interface structure */
typedef struct _SXPI_MFAL SXPI_MFAL;
struct _SXPI_MFAL
{
	SXPI_REFBASE_DECLARE(SXPI_MFAL)

	/* function address table for I/O */
	SXPI_MFAL_FD (*open)(SXPI_MFAL * mfal, unsigned int  omode);
	void         (*close)(SXPI_MFAL_FD fd);
	int          (*read)(SXPI_MFAL_FD fd, void * buf, int size);
	int          (*write)(SXPI_MFAL_FD fd, void * buf, int size);
	int          (*getpos)(SXPI_MFAL_FD fd, SXPI_MFAL_FPOS * fpos);
	int          (*setpos)(SXPI_MFAL_FD fd, SXPI_MFAL_FPOS * fpos);
	int          (*skip)(SXPI_MFAL_FD fd, SXPI_MFAL_FSIZE * fsize);
	int          (*getsize)(SXPI_MFAL_FD fd, SXPI_MFAL_FSIZE * fsize);
	int          (*ioctl)(SXPI_MFAL_FD fd, int cmd, void * arg);

	/* arbitrary data, if needs */
	int          ndata[4];
	/* arbitrary address, if needs */
	void       * pdata[4];
};

#define SXPI_MFAL_BT_MDATA       0
#define SXPI_MFAL_BT_HEADER      1
#define SXPI_MFAL_BT_INDEX       2
#define SXPI_MFAL_BT_OTHER       3

typedef struct
{
	int                     type;
	SXPI_MFAL_FPOS          pos;
	SXPI_MFAL_FSIZE         size;
} SXPI_MFAL_BLK;

/*****************************************************************************
 * config types for codec
 *****************************************************************************/
/* getting */
#define SXPI_COD_CFG_GET_COMPLEXITY      (100)
#define SXPI_COD_CFG_GET_SPEED           (101)
#define SXPI_COD_CFG_GET_ACCEL           (102)

#define SXPI_COD_CFG_GET_WIDTH           (201)
#define SXPI_COD_CFG_GET_HEIGHT          (202)
#define SXPI_COD_CFG_GET_RECON           (203)

#define SXPI_COD_CFG_GET_QP_MIN          (400)
#define SXPI_COD_CFG_GET_QP_MAX          (401)
#define SXPI_COD_CFG_GET_QP              (402)
#define SXPI_COD_CFG_GET_RCT             (403)
#define SXPI_COD_CFG_GET_BPS             (404)
#define SXPI_COD_CFG_GET_FPS             (405)
#define SXPI_COD_CFG_GET_SLICE_MODE      (406)
#define SXPI_COD_CFG_GET_I_PERIOD        (408)
#define SXPI_COD_CFG_GET_BU_SIZE         (409)
#define SXPI_COD_CFG_GET_USE_DEBLOCK     (410)
#define SXPI_COD_CFG_GET_USE_PREFIX      (411)
#define SXPI_COD_CFG_GET_VBV_SIZE        (412)
#define SXPI_COD_CFG_GET_COLOR_SPACE     (413)
#define SXPI_COD_CFG_GET_USE_FILLER      (414)


/* setting */
#define SXPI_COD_CFG_SET_COMPLEXITY      (2100)
#define SXPI_COD_CFG_SET_SPEED           (2101)

#define SXPI_COD_CFG_SET_DELAY_MIN       (2200)
#define SXPI_COD_CFG_SET_DELAY_MAX       (2201)
#define SXPI_COD_CFG_SET_FORCE_OUT       (2202)

#define SXPI_COD_CFG_SET_FINTRA          (2400)
#define SXPI_COD_CFG_SET_QP              (2401)
#define SXPI_COD_CFG_SET_BPS             (2402)
#define SXPI_COD_CFG_SET_VBV_SIZE        (2403)
#define SXPI_COD_CFG_SET_FPS             (2404)
#define SXPI_COD_CFG_SET_SLICE_MODE      (2405)
#define SXPI_COD_CFG_SET_I_PERIOD        (2407)
#define SXPI_COD_CFG_SET_QP_MIN          (2408)
#define SXPI_COD_CFG_SET_QP_MAX          (2409)
#define SXPI_COD_CFG_SET_BU_SIZE         (2410)
#define SXPI_COD_CFG_SET_USE_DEBLOCK     (2411)
#define SXPI_COD_CFG_SET_USE_PREFIX      (2412)
#define SXPI_COD_CFG_SET_USE_PIC_SIGNATURE (2413)
#define SXPI_COD_CFG_SET_WIDTH           (2414)
#define SXPI_COD_CFG_SET_HEIGHT          (2415)
#define SXPI_COD_CFG_SET_COLOR_SPACE     (2416)
#define SXPI_COD_CFG_SET_USE_SAO         (2417)
#define SXPI_COD_CFG_SET_TASK_CNT        (2418)
#define SXPI_COD_CFG_SET_USE_FILLER      (2419)

/* common */
#define SXPI_COD_CFG_RESET               (10000)

/* last config */
#define SXPI_COD_CFG_LAST                (19999)
/* users' config */
#define SXPI_COD_CFG_USER                (20000)

/*****************************************************************************
 * complexity levels for codec
 *****************************************************************************/
#define SXPI_COD_CPX_MINIMUM              (1)
#define SXPI_COD_CPX_LOW                  (2)
#define SXPI_COD_CPX_MEDIUM               (3)
#define SXPI_COD_CPX_HIGH                 (4)
#define SXPI_COD_CPX_MAXIMUM              (5)

/*****************************************************************************
 * speed levels for codec
 *****************************************************************************/
#define SXPI_COD_SPD_MINIMUM              (1)
#define SXPI_COD_SPD_LOW                  (2)
#define SXPI_COD_SPD_MEDIUM               (3)
#define SXPI_COD_SPD_HIGH                 (4)
#define SXPI_COD_SPD_MAXIMUM              (5)

/*****************************************************************************
 * acceleration types for codec
 *****************************************************************************/
/* no acceleration (S/W) */
#define SXPI_COD_ACCEL_NONE               (1)
/* dedicated H/W acceleration */
#define SXPI_COD_ACCEL_DEDICATED          (2)
/* use frame buffer acceleration (physical frame buffer) */
#define SXPI_COD_ACCEL_FRM_BUF            (4)

/*****************************************************************************
 * rate control types for codec
 *****************************************************************************/
/* rate control off */
#define SXPI_COD_RCT_OFF                  (0)
/* constant bitrate rate control based on VBV size */
#define SXPI_COD_RCT_CBR                  (1)
/* average bitrate rate control without constraint of VBV size */
#define SXPI_COD_RCT_ABR                  (2)

/*****************************************************************************
 * slice type for video codec
 *****************************************************************************/
#define SXPI_VCOD_ST_UNKNOWN             (0)
#define SXPI_VCOD_ST_I                   (1)
#define SXPI_VCOD_ST_P                   (2)
#define SXPI_VCOD_ST_B                   (3)


/*****************************************************************************
 * basic unit size for rate contol of video codec
 *****************************************************************************/
/* frame level */
#define SXPI_VCOD_RC_BUS_FRAME           (0)
/* 1 or more row level */
#define SXPI_VCOD_RC_BUS_ROW             (1)
/* coding block level (ex. MB, LCU) */
#define SXPI_VCOD_RC_BUS_CB              (2)


/*****************************************************************************
 * slice mode types for video codec
 *****************************************************************************/
/* no slicing */
#define SXPI_VCOD_SMT_NONE               (0)
/* slicing based on fixed coding block (ex. MB, LCU) count */
#define SXPI_VCOD_SMT_FIXED_CB           (1)
/* slicing based on fixed N byte */
#define SXPI_VCOD_SMT_FIXED_BYTE         (2)

/* macro to make slice mode value from type and argument */
#define SXPI_VCOD_GET_SM(type, val)      (((type)<<24) | ((val) & 0x00FFFFFF))

/*****************************************************************************
 * description for creating of video decoder
 *****************************************************************************/
typedef struct
{
	/* acceleration type */
	int            accel;
	/* address of multi-task interface */
	SXPI_MTAL    * mtal;
} SXPI_VDEC_CDSC;

/*****************************************************************************
 * status after video decoder operation
 *****************************************************************************/
typedef struct
{
	/* byte size of decoded bitstream (read size of bitstream) */
	int            read;
	/* frame number monotonically increased whenever decoding a frame.
	note that it has negative value if the decoded data is not frame */
	int            fnum;
    /* bitstream type */
    int            btype;
	/* slice type */
	int            stype;
	/* quantization parameter used for decoding */
	int            qp;
} SXPI_VDEC_STAT;

/*****************************************************************************
 * description for creating of encoder
 *****************************************************************************/
typedef struct
{
	/* acceleration type */
	int            accel;
	/* width of input frame */
	int            w;
	/* height of input frame */
	int            h;
	/* frame rate (Hz) */
	int            fps;
	/* period of I(IDR)-frame
	   - 0: only one I(IDR)-frame at the first time.
	   - 1: every frame is coded in I(IDR)-frame     */
	int            i_period;
	/* rate control type */
	int            rc_type;
	/* quantization parameter.
	   if the rate control is enabled, the value would be ignored */
	int            qp;
    /* bitrate (unit: bit).
	   if the rate control is off, the value would be ignored */
	int            bps;
	/* color space of input image */
	int            cs;

	/* MTAL pointer */
	SXPI_MTAL    * mtal;
	/* extra description pointer */
	void         * extra;
} SXPI_VENC_CDSC;

/*****************************************************************************
 * status after video encoder operation
 *****************************************************************************/
typedef struct
{
	/* encoded bitstream byte size */
	int            write;
	/* frame number increased whenever encoding a frame */
	unsigned int   fnum;
    /* bitstream type */
    int            btype;
	/* slice type */
	int            stype;
	/* quantization parameter used for encoding */
	int            qp;
	/* the total number of slice in one picture */
	int            slice_cnt;
	/* array containing byte size for each slice */
	int          * slice_size;
} SXPI_VENC_STAT;

/*****************************************************************************
 * description for creating of image decoder
 *****************************************************************************/
typedef struct
{
	/* acceleration type */
	int cstrm;
	int            accel;
} SXPI_IDEC_CDSC;

/* mode flags for image codec property */
#define SXPI_ICOD_MODE_JPG_PROGRESSIVE          (1<<2)

/*****************************************************************************
 * status after image decoder operation
 *****************************************************************************/
typedef struct
{
	/* picture width */
	int            w;
	/* picture height */
	int            h;
	/* color space */
	int            cs;
	/* mode flags */
	int            mode;
	/* byte size of decoded bitstream (read size of bitstream) */
	int            read;
} SXPI_IDEC_STAT;

/*****************************************************************************
 * type and macro for media time
 *****************************************************************************/
/* media time in 100-nanosec unit */
typedef long long                    SXPI_MTIME;

/* 100-nanosec unit tick */
#define SXPI_MTIMEUNIT               ((SXPI_MTIME)10000000)

/* macro for media time */
#define SXPI_MSEC_TO_MTIME(ms)       (((SXPI_MTIME)(ms))*10000)
#define SXPI_MTIME_TO_MSEC(mt)       ((int)((mt)/10000))

/*****************************************************************************
 * type and macro for fourcc
 *****************************************************************************/
/* 4bytes fourcc type */
typedef unsigned int                 SXPI_FOURCC;
/* 2bytes twocc type */
typedef unsigned short               SXPI_TWOCC;

/*****************************************************************************
 * structure for representing variant type data
 *****************************************************************************/
typedef struct
{
	int       type; /* type */
	int       size; /* byte size of data. size doesn't include '\0' */
	void    * data; /* address of data */
	int       ___dummy; /* dummy data to make align. don't use this */
} SXPI_VDATA;

/*****************************************************************************
 * prototype of physical buffer allocation/free function
 *****************************************************************************/
typedef void * (*SXPI_FN_BALLOC)(int size, void ** addr_p);
typedef void (*SXPI_FN_BFREE)(void * addr_v, void * addr_p);

/*****************************************************************************
 * bitstream buffer
 *****************************************************************************/
typedef struct _SXPI_BITB SXPI_BITB;
struct _SXPI_BITB
{
    SXPI_REFBASE_DECLARE(SXPI_BITB)

    /* user space address indicating buffer */
    void              * addr;
    /* physical address indicating buffer, if any */
    void              * pddr;
	/* byte size of buffer */
    int                 size;
    /* bitstream has an error? */
    int                 err;
    /* media type, if any */
    int                 mt;

    /* arbitrary data, if needs */
    int                 ndata[4];
    /* arbitrary address, if needs */
    void              * pdata[4];

    /* for internal usage ***************************************************/
    /* function address for allocating an bitstream buffer, if any.
    the value would be set after creating BITB buffer.
    dont' call the function directly. */
    SXPI_FN_BALLOC      __balloc;
    /* function address for freeing an bitstream buffer, if any.
    the value would be set after creating BITB buffer.
    dont' call the function directly. */
    SXPI_FN_BFREE       __bfree;
};

/*****************************************************************************
 * color spaces
 *****************************************************************************/
/* unknown color space */
#define SXPI_CS_UNKNOWN             0

/* YUV planar type */
#define SXPI_CS_YUV400              10 /* Y */
#define SXPI_CS_YUV420              11 /* Y:U:V 4:2:0 */
#define SXPI_CS_YUV422              12 /* Y:U:V 4:2:2 */
#define SXPI_CS_YUV444              13 /* Y:U:V 4:4:4 */
#define SXPI_CS_YV12                14 /* Y:V:U 4:2:0 */
#define SXPI_CS_I420                SXPI_CS_YUV420 /* Y:U:V */
#define SXPI_CS_IYUV                SXPI_CS_YUV420 /* Y:U:V */
#define SXPI_CS_YV16                15 /* Y:V:U 4:2:2 */
#define SXPI_CS_NV12                16
#define SXPI_CS_NV21                17
#define SXPI_CS_YUV422N             SXPI_CS_YUV422
#define SXPI_CS_YUV422W             18
#define SXPI_CS_GRAY                SXPI_CS_YUV400
#define SXPI_CS_Y800                SXPI_CS_YUV400
#define SXPI_CS_Y16                 19
#define SXPI_CS_NV12_T64X32         21 /* 64x32 Tiled NV12 type */

#define SXPI_CS_YUV400A8            40 /* Y + Alpha 8bit */
#define SXPI_CS_YUV420A8            41 /* Y:U:V 4:2:0 + Alpha 8bit */
#define SXPI_CS_YUV422A8            42 /* Y:U:V 4:2:2 + Alpha 8bit */
#define SXPI_CS_YUV444A8            43 /* Y:U:V 4:4:4 + Alpha 8bit */
#define SXPI_CS_YUV422NA8           SXPI_CS_YUV422A8
#define SXPI_CS_YUV422WA8           44
#define SXPI_CS_NV12A8              45
#define SXPI_CS_NV21A8              46
#define SXPI_CS_GRAYA               SXPI_CS_YUV400A8

/* YUV pack type */
#define SXPI_CS_UYVY                100
#define SXPI_CS_YUYV                101
#define SXPI_CS_YUY2                SXPI_CS_YUYV
#define SXPI_CS_V422                SXPI_CS_YUYV
#define SXPI_CS_YUNV                SXPI_CS_YUYV
#define SXPI_CS_Y8A8                110

/* RGB pack type */
#define SXPI_CS_RGB565              200
#define SXPI_CS_BGR565              201

#define SXPI_CS_RGB555              210 /* 1 : R(5) : G(5) : R(5) */
#define SXPI_CS_BGR555              211

#define SXPI_CS_RGB666              300
#define SXPI_CS_BGR666              301

#define SXPI_CS_RGB888              400
#define SXPI_CS_BGR888              401

#define SXPI_CS_RGBA5658            430 /* R(5):G(6):B(5):A(8) */
#define SXPI_CS_ARGB8565            431
#define SXPI_CS_BGRA5658            435
#define SXPI_CS_ABGR8565            436

#define SXPI_CS_RGBA8888            500
#define SXPI_CS_BGRA8888            501
#define SXPI_CS_ARGB8888            502
#define SXPI_CS_ABGR8888            503



/* RGB planar type */
#define SXPI_CS_R8G8B8              600 /* 24bit */
#define SXPI_CS_B8G8R8              601

#define SXPI_CS_RGB565A8            650 /* 24bit: <R(5):G(6):B(5)> <A(8)> */
#define SXPI_CS_BGR565A8            651

#define SXPI_CS_R8G8B8A8            700 /* 32bit */
#define SXPI_CS_B8G8R8A8            701
#define SXPI_CS_A8R8G8B8            702
#define SXPI_CS_A8B8G8R8            703


/* macro for color space */
#define SXPI_CS_IS_YUV(cs)          ((cs)>=0 && (cs)<200)
#define SXPI_CS_IS_YUV_PLANAR(cs)   ((cs)>=0 && (cs)<100)
#define SXPI_CS_IS_YUV_PACK(cs)     ((cs)>=100 && (cs)<200)
#define SXPI_CS_IS_RGB(cs)          ((cs)>=200 && (cs)<800)
#define SXPI_CS_IS_RGB_PACK(cs)     ((cs)>=200 && (cs)<600)
#define SXPI_CS_IS_RGB16_PACK(cs)   ((cs)>=200 && (cs)<300)
#define SXPI_CS_IS_RGB18_PACK(cs)   ((cs)>=300 && (cs)<400)
#define SXPI_CS_IS_RGB24_PACK(cs)   ((cs)>=400 && (cs)<500)
#define SXPI_CS_IS_RGB32_PACK(cs)   ((cs)>=500 && (cs)<600)
#define SXPI_CS_IS_RGB_PLANAR(cs)   ((cs)>=600 && (cs)<800)
#define SXPI_CS_IS_RGB24_PLANAR(cs) ((cs)>=600 && (cs)<700)
#define SXPI_CS_IS_RGB32_PLANAR(cs) ((cs)>=700 && (cs)<800)



/*****************************************************************************
  image buffer definition

  __ba[], __bp[]
    +---------------------------------------------------+ ---
    |                                                   |  ^
    |                                              |    |  |
    |    a[], p[]                                  v    |  |
    |   --- +-----------------------------------+ ---   |  |
    |    ^  |  (x, y)                           |  y    |  |
    |    |  |   +---------------------------+   + ---   |  |
    |    |  |   |                           |   |  ^    |  |
    |    |  |   |                           |   |  |    |  |
    |    |  |   |                           |   |  |    |  |
    |    |  |   |                           |   |  |    |  |
    |       |   |                           |   |       |
    |  __ah |   |                           |   |  h    |  e[]
    |       |   |                           |   |       |
    |    |  |   |                           |   |  |    |  |
    |    |  |   |                           |   |  |    |  |
    |    |  |   |                           |   |  v    |  |
    |    |  |   +---------------------------+   | ---   |  |
    |    v  |                                   |       |  |
    |   --- +---+-------------------------------+       |  |
    |     ->| x |<----------- w ----------->|           |  |
    |       |<------------- __aw -------------->|       |  |
    |                                                   |  v
    +---------------------------------------------------+ ---

    |<---------------------- s[] ---------------------->|

 *****************************************************************************/

#define SXPI_IMGB_MAX_PLANE         (4)

typedef struct _SXPI_IMGB SXPI_IMGB;

struct _SXPI_IMGB
{
	SXPI_REFBASE_DECLARE(SXPI_IMGB)

	/* width of image */
	int                 w;
	/* height of image */
	int                 h;
	/* left postion */
	int                 x;
	/* top position */
	int                 y;
	/* color space type of image */
	int                 cs;
	/* stride of each image plane */
	int                 s[SXPI_IMGB_MAX_PLANE];
	/* elevation of each image plane */
	int                 e[SXPI_IMGB_MAX_PLANE];
	/* user space address of each image plane */
	void              * a[SXPI_IMGB_MAX_PLANE];
	/* physical address of each image plane, if needs */
	void              * p[SXPI_IMGB_MAX_PLANE];

	/* arbitrary data, if needs */
	int                 ndata[4];
	/* arbitrary address, if needs */
	void              * pdata[4];

	/* for internal usage ***************************************************/
	/* aligned width, if needs */
	int                 __aw;
	/* aligned height, if needs */
	int                 __ah;
	/* function address for allocating an image buffer, if any.
	the value would be set after creating IMGB buffer.
	dont' call the function directly. */
	SXPI_FN_BALLOC      __balloc;
	/* function address for freeing an image buffer, if any.
	the value would be set after creating IMGB buffer.
	dont' call the function directly. */
	SXPI_FN_BFREE       __bfree;
	/* user space address of actual buffer. don't access by this member */
	void              * __ba[SXPI_IMGB_MAX_PLANE];
	/* physical address of actual buffer. don't access by this member */
	void              * __bp[SXPI_IMGB_MAX_PLANE];
	/* actual buffer size */
	int                 __bsize[SXPI_IMGB_MAX_PLANE];
	/************************************************************************/
};

/*****************************************************************************
 * audio buffer definition
 *****************************************************************************/

/* max number of channel *****************************************************/
#define SXPI_AUDB_MAX_NCH                (7+1)

/* channel muxing type *******************************************************/
/* unpack type (each channel uses seperated buffer */
#define SXPI_AUDB_CMT_UNPACK             (0)
/* pack type (each channel's sample interleaved in a buffer) */
#define SXPI_AUDB_CMT_PACK               (1)

/* channel id ****************************************************************/
/* center */
#define SXPI_AUDB_CHAN_C                 (0)
/* left */
#define SXPI_AUDB_CHAN_L                 (1)
/* right */
#define SXPI_AUDB_CHAN_R                 (2)
/* surround */
#define SXPI_AUDB_CHAN_S                 (3)
/* left surround */
#define SXPI_AUDB_CHAN_LS                (4)
/* right surround */
#define SXPI_AUDB_CHAN_RS                (5)
/* LFE */
#define SXPI_AUDB_CHAN_LFE               (6)
/* reserved */
#define SXPI_AUDB_CHAN_RESEVED           (7)

/* sample format ************************************************************/
#define SXPI_AUDB_FMT_UNKNOWN            (0)
#define SXPI_AUDB_FMT_S8                 (1)
#define SXPI_AUDB_FMT_U8                 (2)
#define SXPI_AUDB_FMT_S16                (3)
#define SXPI_AUDB_FMT_S16LE              SXPI_AUDB_FMT_S16
#define SXPI_AUDB_FMT_S16BE              (4)
#define SXPI_AUDB_FMT_U16                (5)
#define SXPI_AUDB_FMT_U16LE              SXPI_AUDB_FMT_U16
#define SXPI_AUDB_FMT_U16BE              (6)
#define SXPI_AUDB_FMT_S24                (7)
#define SXPI_AUDB_FMT_S24LE              SXPI_AUDB_FMT_S24
#define SXPI_AUDB_FMT_S24BE              (8)
#define SXPI_AUDB_FMT_S24DAUD            (9)
#define SXPI_AUDB_FMT_U24                (10)
#define SXPI_AUDB_FMT_U24LE              SXPI_AUDB_FMT_U24
#define SXPI_AUDB_FMT_U24BE              (11)
#define SXPI_AUDB_FMT_S32                (12)
#define SXPI_AUDB_FMT_S32LE              SXPI_AUDB_FMT_S32
#define SXPI_AUDB_FMT_S32BE              (13)
#define SXPI_AUDB_FMT_U32                (14)
#define SXPI_AUDB_FMT_U32LE              SXPI_AUDB_FMT_U32
#define SXPI_AUDB_FMT_U32BE              (15)
#define SXPI_AUDB_FMT_F32                (16)
#define SXPI_AUDB_FMT_F32LE              SXPI_AUDB_FMT_F32
#define SXPI_AUDB_FMT_F32BE              (17)
#define SXPI_AUDB_FMT_FLT                SXPI_AUDB_FMT_F32
#define SXPI_AUDB_FMT_F64                (18)
#define SXPI_AUDB_FMT_F64LE              SXPI_AUDB_FMT_F64
#define SXPI_AUDB_FMT_F64BE              (19)
#define SXPI_AUDB_FMT_DBL                SXPI_AUDB_FMT_F64

#define SXPI_AUDB_FMT_MULAW              (20)
#define SXPI_AUDB_FMT_ALAW               (21)
#define SXPI_AUDB_FMT_ZORK               (22)
#define SXPI_AUDB_FMT_DVD                (23)
#define SXPI_AUDB_FMT_BLURAY             (24)
#define SXPI_AUDB_FMT_LXF                (25)
#define SXPI_AUDB_FMT_S302M              (26)

#define SXPI_AUDB_FMT_S8P                (100)
#define SXPI_AUDB_FMT_S16LEP             (101)
#define SXPI_AUDB_FMT_S16BEP             (102)
#define SXPI_AUDB_FMT_S16P               SXPI_AUDB_FMT_S16LEP
#define SXPI_AUDB_FMT_S24LEP             (103)
#define SXPI_AUDB_FMT_S24BEP             (104)
#define SXPI_AUDB_FMT_S24P               SXPI_AUDB_FMT_S24LEP
#define SXPI_AUDB_FMT_S32P               (105)
#define SXPI_AUDB_FMT_S32LEP             SXPI_AUDB_FMT_S32P
#define SXPI_AUDB_FMT_S32BEP             (106)
#define SXPI_AUDB_FMT_F32P               (107)
#define SXPI_AUDB_FMT_F32BEP             (108)
#define SXPI_AUDB_FMT_F32LEP             SXPI_AUDB_FMT_F32P
#define SXPI_AUDB_FMT_FLTP               SXPI_AUDB_FMT_F32P
#define SXPI_AUDB_FMT_F64LEP             (109)
#define SXPI_AUDB_FMT_F64BEP             (110)
#define SXPI_AUDB_FMT_F64P               SXPI_AUDB_FMT_F64LEP
#define SXPI_AUDB_FMT_DBLP               SXPI_AUDB_FMT_F64P

/* audio buffer definition **************************************************/
typedef struct _SXPI_AUDB SXPI_AUDB;
struct _SXPI_AUDB
{
	SXPI_REFBASE_DECLARE(SXPI_AUDB)

	/* sample count of each audo track */
	int      s[SXPI_AUDB_MAX_NCH];
	/* byte count of each audio track */
	int      b[SXPI_AUDB_MAX_NCH];
	/* user space address of each audio track */
	void   * a[SXPI_AUDB_MAX_NCH];
	/* physical address of each audio track */
	void   * p[SXPI_AUDB_MAX_NCH];
	/* number of channel */
	int      nch;
	/* bits per a sample */
	int      bits;
	/* sampling rate (Hz) */
	int      hz;
	/* channel muxing type */
	int      cmt;
	/* sample format */
	int      fmt;

	/* arbitrary data, if needs */
	int      ndata[4];
	/* arbitrary address, if needs */
	void   * pdata[4];

	/* for internal usage ****************/
	/* function address for allocating an audio buffer, if any.
	the value would be set after creating audio buffer.
	don't call the function directly. */
	SXPI_FN_BALLOC      __balloc;
	/* function address for freeing an audio buffer, if any.
	the value would be set after creating audio buffer.
	don't call the function directly. */
	SXPI_FN_BFREE       __bfree;
};

/*****************************************************************************
 * definition of composite stream
 *****************************************************************************/
#define SXPI_CSTRM_TYPE_BITB                 (1<<1)
#define SXPI_CSTRM_TYPE_MFAL                 (1<<2)

typedef struct
{
	int            type;
	SXPI_BITB    * bitb;
	SXPI_MFAL    * mfal;
} SXPI_CSTRM;


/*! maximum number of attached pictures */
#define SXPI_MTAG_MAX_PIC_CNT             (16)

/*! structure for media informations described in a tag */
typedef struct
{
	SXPI_VDATA		  title;		/* title */
	SXPI_VDATA		  artist;		/* artist */
	SXPI_VDATA		  album;		/* album */
	SXPI_VDATA		  genre;		/* genre */
	SXPI_VDATA		  album_artist; /* album artist */
	SXPI_VDATA		  author;		/* author */
	SXPI_VDATA		  composer; 	/* composer */
	SXPI_VDATA		  writer;		/* writer */
	SXPI_VDATA		  date; 		/* date */
	int				  year; 		/* year */
	int				  track_num;	/* track number */
	int				  track_total;	/* total track number */
	int				  disc_num; 	/* disc number */
	int				  compilation;	/* compilation, 0=No, 1=Yes */
	int				  pic_cnt;		/* the number of pictures embeded */
	SXPI_BITB		  pic[SXPI_MTAG_MAX_PIC_CNT]; /* picture information */
	SXPI_VDATA		  location; 	/* location */
} SXPI_MTAG;

/* structure for rational number */
typedef struct  _SXPI_RATIO
{
	int               den; /* denominator (b in a/b) */
	int               num; /* numerator (a in a/b) */
} SXPI_RATIO;


/*****************************************************************************
 * including other headers
 *****************************************************************************/



#endif /* __SXPI_BASE_H__8902438274832849328940382904832904839024__ */

