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
 * Definition of WMF Header structures.                                       *
 *                                                                            *
 ******************************************************************************/

#ifndef __SWMF_H__4758926385471828471823754827__
#define __SWMF_H__4758926385471828471823754827__

#ifdef __cplusplus
extern "C" {
#endif

#include "scmn_base.h"

/*! SWMF Demuxer instance identifier */
typedef void *           SWMFD;

/*! Stream identifier for SWMF Demuxer */
typedef void *           SWMFDS;

/*! max stream count supported by asf file */
#define SWMFD_MAX_STRM           32 /* possible max count: 128 */
#define SWMFD_HINT_MAX_CNT       16
#if AVER_NUM >= 4100
#define SWMFD_PL_MAX_CNT         256 /* heuristic value */
#else
#define SWMFD_PL_MAX_CNT         128 /* heuristic value */
#endif


/*! time in 100-nanosec units */
typedef long long        SWMF_TIME;

/*! SWMF General purpose return (error) code ********************************/
/*! general operation success */
#define SWMF_OK                 (0)
/*! end of file met */
#define SWMF_EOF                (1)
/*! not expected function call */
#define SWMF_ERR_NOT_EXPECTED   (-1)
/*! not supported file (codec, file format, etc) */
#define SWMF_ERR_NOT_SUPPORTED  (-2)
/*! file i/o error */
#define SWMF_ERR_FILEIO         (-3)
/*! syntex error */
#define SWMF_ERR_SYNTAX         (-4)
/*! invalid argument was passed to a function */
#define SWMF_ERR_INVALID_ARG    (-5)
/*! frame buffer is too small for this frame */
#define SWMF_ERR_TOOSMALLBUF    (-6)
/*! Not sufficient memory */
#define SWMF_ERR_NOT_SUFF_MEM   (-7)

/*! SWMF return value checking macro ****************************************/
#define SWMF_IS_OK(ret)         ((ret) >= 0)
#define SWMF_IS_ERR(ret)        ((ret) < 0)

/*! stream types */
#define SWMF_ST_UNKNOWN         (0) /*! not supported stream */
#define SWMF_ST_AUDIO           (1) /*! audio stream */
#define SWMF_ST_VIDEO           (2) /*! video stream */
#define SWMF_ST_COMMAND         (3) /*! command stream */

/*! Seek mode */
#define SWMFD_SEEK_TIME			 0
#define SWMFD_SEEK_KEYFRM_NEXT   1
#define SWMFD_SEEK_KEYFRM_PREV   2
#define SWMFD_SEEK_KEYFRM_CLOSEST 3

/*! Structure describes audio stream information */
typedef struct
{
	/*! stream index */
	int                 index;
	/*! audio codec fourcc */
	unsigned long       fourcc;
	/*! maximum frame size in bytes */
	int                 max_frm_size;
	/*! sampling rate (Hz) */
	int                 hz;
	/*! bits per a sample (bit) */
	int                 bits;
	/*! number of channel */
	int                 chans;
	/*! average bytes per second */
	int                 avg_bytes_per_sec;
	/*! block alignment */
	int                 blk_align;
	/*! max of stream durations in 100-nanosecond time units */
	SWMF_TIME 		    duration;
	/*! flag showing if this stream supports seeking or not */
	int                 seekable;
	/*! language ISO-639-2/B 3CC*/
	char			lang[4];
	/*! stream name */
	SCMN_VDATA	strm_name;
} SWMFDS_INFO_AUD;

/*! Structure describes video stream information */
typedef struct
{
	/*! stream index */
	int                 index;
	/*! video codec fourcc */
	unsigned long       fourcc;
	/*! maximum frame size in bytes */
	int                 max_frm_size;
	/*! width of video frame */
	int                 w;
	/*! height of video frame */
	int                 h;
	/*! total frame count */
	unsigned long       frames;
	/*! pixel depth */
	int                 depth;
	/*! flag showing if this stream supports seeking or not */
	int                 seekable;
	/*! average bytes per second */
	int					avg_bytes_per_sec;
	/*! fps */
	int					fps;
} SWMFDS_INFO_VID;

/*! structure for WM-DRM */
typedef struct
{
	int                type; /* ! DRM version, (P:PlayReady, E:ver2, B:ver1)
	                                           (MSB) XX...XXPEB (LSB)      */
	/* Version 1 */
	unsigned int       secret_data_len;
	unsigned char    * secret_data; /*! Seceret Data */
	unsigned int       key_id_len;
	unsigned char    * key_id;      /*! KEY ID */
	unsigned int       url_len;
	unsigned char    * url;         /*! License URL */
	/* Version 2 */
	unsigned int       v2_size;
	unsigned char    * v2_data;
	/* PlayReady */
	unsigned int       playready_size;
	unsigned char    * playready_data;
} SWMFD_DRM;

/*! structure for payload information within a frame data.
	this structure is necessary for the WMDRM and PlayReady,
	especially, rep_data_size and rep_data for PlayReady */
typedef struct
{
	int                pl_cnt;
	int                pl_size[SWMFD_PL_MAX_CNT];
	int                rep_data_size;/*[SWMFD_PL_MAX_CNT];*/
	unsigned char      rep_data[18]; /* CHECK-ME: 2304 = 18 * SWMFD_PL_MAX_CNT */
} SWMFDS_INFO_PL;

/*! Describes count of streams in media file
	and type of each stream: audio, video, or unknown */
typedef struct
{
	/*! total stream count */
	int					strm_cnt;
	/*! video stream count */
	int					strm_cnt_vid;
	/*! audio stream count */
	int					strm_cnt_aud;
	/*! stream types */
	int					strm_type[SWMFD_MAX_STRM];
	/*! fourcces */
	unsigned long		strm_fourcc[SWMFD_MAX_STRM];
	/*! max of stream durations in 100-nanosecond time units */
	SWMF_TIME 		    duration;
	/*! Flag showing if this clip supports seeking or not */
	int					seekable;
	/*! Content Description Information */
	SCMN_MTAG         * mtag;
	/*! hint count */
	int					hint_cnt;
	/*! hints */
	SCMN_MFAL_BLK		hint[SWMFD_HINT_MAX_CNT];
	/*! drm */
	SWMFD_DRM         * drm;
} SWMFD_INFO;

typedef struct
{
	unsigned int	frm_num;
	SWMF_TIME		time;
}SWMFD_KEY_ELEMENT;

typedef struct
{
	int               __dummy;
} SWMFD_INIT_DSC;
/*!
 ****************************************************************************
 * Creates demuxer instance and parses ISO media file
 * fal: filename ISO media file to open
 * init_dsc: initial descriptor
 * info: stream information
 * err: return(error) code
 * return: parser instance id
 * remarks: function returns NULL if parsing error occurs
*/
SWMFD swmfd_create(SCMN_MFAL * fal, SWMFD_INIT_DSC * init_dsc,
	SWMFD_INFO * info, int * err);
/*!
 ****************************************************************************
 * Deinitializes demuxer and closes all the opened streams
 * id: demuxer instance id
*/
void swmfd_delete(SWMFD id);
/*!
 *****************************************************************************
 * opens specified stream and returns its id
 * id: demuxer instance id
 * index: stream number
 * err: return(error) code
 */
SWMFDS swmfds_open(SWMFD id, int index, int * err);
/*! closes specified stream */
void swmfds_close(SWMFDS sid);
/*!
 *****************************************************************************
 * returns decoder specific data,
 * sid: SWMFDS identifier
 * buf: buffer to store decoder specific information
 * size: actual size of decoder specific information
 * remarks: call this function with buf=NULL to retrive decoder specific
 * information size
 */
int swmfds_get_format(SWMFDS sid, void * buf, int * size);
/*!
 *****************************************************************************
 * returns decoder specific data from ISO media file header
 * id: parser instance id
 * strm_indx: stream index
 * buf: buffer to store decoder specific information
 * size: actual size of decoder specific information
 * remarks: call this function with buf=NULL to retrive decoder specific
 * information size
 */
int swmfd_get_format(SWMFD id, int strm_indx, void * buf, int * size);
/*!
 *****************************************************************************
 * Returns stream information for video track
 * sid: stream instance id
 * info: pointer to video stream information structure to be filled
 */
int swmfds_get_info_vid(SWMFDS sid, SWMFDS_INFO_VID * info);
/*!
 *****************************************************************************
 * Returns stream information for video track
 * id: parser id
 * strm_indx: stream index
 * info: pointer to video stream information structure to be filled
*/
int swmfd_get_info_vid(SWMFD id, int strm_indx, SWMFDS_INFO_VID * info);
/*!
 *****************************************************************************
 * Returns stream information for audio track
 * sid: stream instance id
 * info: pointer to audio stream information structure to be filled
 */
int swmfds_get_info_aud(SWMFDS sid, SWMFDS_INFO_AUD * info);
/*!
 *****************************************************************************
 * Returns stream information for video track
 * id: parser id
 * strm_indx: stream index
 * info: pointer to audio stream information structure to be filled
*/
int swmfd_get_info_aud(SWMFD id, int strm_indx, SWMFDS_INFO_AUD * info);
/*!
 *****************************************************************************
 * Retrieves sample for stream, advances cursor to next sample
 * sid: stream instance id
 * buf: output buffer where sample data from stream is stored
 * buf_size: maximum buffer size
 * read: actual retrieved sample size in bytes
 * start: start time stamp of the extracted frame
 * end: end time stamp of the extracted frame
 * pl_info: info for WMDRM, payload count and size
 */ 
int swmfds_get_frm(SWMFDS sid, void * buf, const unsigned int buf_size,
	unsigned int * read, SWMF_TIME * start, SWMF_TIME * end, SWMFDS_INFO_PL * pl_info);
/*!
 *****************************************************************************
 * Get an index table from the simple index object
 * sid: stream instance id
 * buf: output buffer where index table from simple index object is stored
 * buf_sz: maximum buffer size
 * size: actual retrieved index table size in bytes
 * keyfrms_cnt: actual retrieved index table size in the simple index object
 */
int swmfds_get_idx_table( SWMFDS sid, void* buf, const int buf_sz, int * size, int * keyfrms_cnt );
/*!
 *****************************************************************************
 * Get an index table from the simple index object
 * sid: parser id
 * strm_indx: stream index
 * buf: output buffer where index table from simple index object is stored
 * buf_sz: maximum buffer size
 * size: actual retrieved index table size in bytes
 * keyfrms_cnt: actual retrieved index table size in the simple index object
 */
int swmfd_get_idx_table( SWMFD id, int strm_indx, void* buf, const int buf_sz, int * size, int * keyfrms_cnt );
/*!
 *****************************************************************************
 * moves current stream position to a first i-frame before specified time,
 * sid: SWMFDS identifier
 * seektime: target time for seeking
 * keytime: correspondent keyframe time after seeking
 * mode: seek mode
 */
int swmfds_seek(SWMFDS sid, SWMF_TIME * seektime, SWMF_TIME * keytime, int mode);

#ifdef __cplusplus
};
#endif

#endif /* __SWMF_H__4758926385471828471823754827__ */
