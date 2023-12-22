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
 * Definition for Speech/Audio Buffer                                         *
 *                                                                            *
 ******************************************************************************/

#ifndef __SCMN_AUDB_H__3902743892743828493028493028439028432__
#define __SCMN_AUDB_H__3902743892743828493028493028439028432__

#ifdef __cplusplus
extern "C"
{
#endif

/* max number of channel *****************************************************/
#define SCMN_AUDB_MAX_NCH                (7+1)

/* channel muxing type *******************************************************/
/* unpack type (each channel uses seperated buffer */
#define SCMN_AUDB_CMT_UNPACK             (0)
/* pack type (each channel's sample interleaved in a buffer) */
#define SCMN_AUDB_CMT_PACK               (1)

/* channel id ****************************************************************/
/* center */
#define SCMN_AUDB_CHAN_C                 (0)
/* left */
#define SCMN_AUDB_CHAN_L                 (1)
/* right */
#define SCMN_AUDB_CHAN_R                 (2)
/* surround */
#define SCMN_AUDB_CHAN_S                 (3)
/* left surround */
#define SCMN_AUDB_CHAN_LS                (4)
/* right surround */
#define SCMN_AUDB_CHAN_RS                (5)
/* LFE */
#define SCMN_AUDB_CHAN_LFE               (6)
/* reserved */
#define SCMN_AUDB_CHAN_RESEVED           (7)


/* audio buffer definition ***************************************************/
typedef struct
{
	int      s[SCMN_AUDB_MAX_NCH]; /* sample count of each audo track */
	int      b[SCMN_AUDB_MAX_NCH]; /* byte count of each audio track */
	void   * a[SCMN_AUDB_MAX_NCH]; /* user space address of each audio track */
	void   * p[SCMN_AUDB_MAX_NCH]; /* physical address of each audio track */
	int      nch;               /* number of channel */
	int      bits;              /* bits per a sample */
	int      hz;                /* sampling rate (Hz) */
	int      cmt;               /* channel muxing type */
	int      data[16];          /* arbitrary data */
} SCMN_AUDB;

#ifdef __cplusplus
}
#endif

#endif /* __SCMN_AUDB_H__3902743892743828493028493028439028432__ */

