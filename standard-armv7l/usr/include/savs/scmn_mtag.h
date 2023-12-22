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
 * Declarations of media TAG information                                      *
 *                                                                            *
 ******************************************************************************/

#ifndef __SCMN_MTAG_H__9302473892473928493920473280483920483920__
#define __SCMN_MTAG_H__9302473892473928493920473280483920483920__

#ifdef __cplusplus
extern "C"
{
#endif

/*! maximum number of attached pictures */
#define SCMN_MTAG_MAX_PIC_CNT             (16)

/*! structure for media informations described in a tag */
typedef struct
{
	SCMN_VDATA         title;        /* title */
	SCMN_VDATA         artist;       /* artist */
	SCMN_VDATA         album;        /* album */
	SCMN_VDATA         genre;        /* genre */
	SCMN_VDATA         album_artist; /* album artist */
	SCMN_VDATA         author;	     /* author */
	SCMN_VDATA         composer;     /* composer */
	SCMN_VDATA         writer;	     /* writer */
	SCMN_VDATA         date;	     /* date */
	int                year;         /* year */
	int                track_num;    /* track number */
	int                track_total;  /* total track number */
	int                disc_num;     /* disc number */
	int                compilation;  /* compilation, 0=No, 1=Yes */
	int                pic_cnt;      /* the number of pictures embeded */
	int                is360video;
	SCMN_BITB          pic[SCMN_MTAG_MAX_PIC_CNT]; /* picture information */
	SCMN_VDATA         location;	 /* location */
} SCMN_MTAG;

#ifdef __cplusplus
}
#endif

#endif /* __SCMN_MTAG_H__9302473892473928493920473280483920483920__ */

