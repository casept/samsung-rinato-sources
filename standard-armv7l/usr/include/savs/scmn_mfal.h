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
 * Declarations of media file I/O abstraction layer                           *
 *                                                                            *
 ******************************************************************************/

#ifndef __SCMN_MFAL_H__9382493743892439028493028493024__
#define __SCMN_MFAL_H__9382493743892439028493028493024__

#ifdef __cplusplus
extern "C"
{
#endif

/* file descriptor */
typedef void *                 SCMN_MFAL_FD;

/* file position */
typedef long long              SCMN_MFAL_FPOS;
typedef long long              SCMN_MFAL_FSIZE;

#define SCMN_MFAL_OMODE_WRITABLE            (1<<0)
#define SCMN_MFAL_OMODE_CACHABLE            (1<<1)
#define SCMN_MFAL_OMODE_CACHABLE_VIDEO           (1<<2)
#define SCMN_MFAL_OMODE_CACHABLE_INDEX           (1<<3)
#define SCMN_MFAL_OMODE_CACHABLE_UHQA            (1<<4)

typedef struct _SCMN_MFAL SCMN_MFAL;

/* function prototypes */
typedef SCMN_MFAL_FD (*SCMN_MFAL_OPEN)(SCMN_MFAL * mfal, unsigned long omode);
typedef void (*SCMN_MFAL_CLOSE)(SCMN_MFAL_FD fd);
typedef int (*SCMN_MFAL_READ)(SCMN_MFAL_FD fd, void * buf, int size);
typedef int (*SCMN_MFAL_WRITE)(SCMN_MFAL_FD fd, void * buf, int size);
typedef int (*SCMN_MFAL_GETPOS)(SCMN_MFAL_FD fd, SCMN_MFAL_FPOS * fpos);
typedef int (*SCMN_MFAL_SETPOS)(SCMN_MFAL_FD fd, SCMN_MFAL_FPOS * fpos);
typedef int (*SCMN_MFAL_SKIP)(SCMN_MFAL_FD fd, SCMN_MFAL_FSIZE * fsize);
typedef int (*SCMN_MFAL_GETSIZE)(SCMN_MFAL_FD fd, SCMN_MFAL_FSIZE * fsize);
typedef int (*SCMN_MFAL_IOCTL)(SCMN_MFAL_FD fd, int cmd, void * arg);

/* file I/O interface structure */
struct _SCMN_MFAL
{
	/* function address table */
	SCMN_MFAL_OPEN          open;
	SCMN_MFAL_CLOSE         close;
	SCMN_MFAL_READ          read;
	SCMN_MFAL_WRITE         write;
	SCMN_MFAL_GETPOS        getpos;
	SCMN_MFAL_SETPOS        setpos;
	SCMN_MFAL_SKIP          skip;
	SCMN_MFAL_GETSIZE       getsize;
	SCMN_MFAL_IOCTL         ioctl;
	/* arbitrary data, if needs */
	int                     ndata[4];
	/* arbitrary address, if needs */
	void                  * pdata[4];
};

#define SCMN_MFAL_BT_MDATA       0
#define SCMN_MFAL_BT_HEADER      1
#define SCMN_MFAL_BT_INDEX       2
#define SCMN_MFAL_BT_OTHER       3

typedef struct
{
	int                     type;
	SCMN_MFAL_FPOS          pos;
	SCMN_MFAL_FPOS          size;
} SCMN_MFAL_BLK;

#ifdef __cplusplus
}
#endif

#endif /* __SCMN_MFAL_H__9382493743892439028493028493024__ */

