/****************************************************************************
 *                       Samsung Electronics Co. Ltd.                       *
 *                                                                          *
 *                           COPYRIGHT (C) 2008                             *
 *                          All Rights Reserved                             *
 *                                                                          *
 *                       Mobile Media Lab. R&D Center                       *
 *                 Digital Media & Communications Business                  *
 ****************************************************************************/

/*!
 *****************************************************************************
 * @file sjpg.h
 *
 * @brief API definition of SJPG
 *
 * @date 2008-12-16 Kwang Pyo Choi creates the code.
 *
 * @author Kwang Pyo Choi at Samsung Electronics
 *****************************************************************************
 */

#ifndef __SJPG_H__903849032743082490328439024838274302483902843920__
#define __SJPG_H__903849032743082490328439024838274302483902843920__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SJPG instance identifier for decoder */
typedef void *          SJPGD;
/*! SJPG instance identifier for encoder */
typedef void *          SJPGE;

/* SJPG General purpose return (error) code ********************************/
/*! General operation success */
#define SJPG_OK                          (0)
/*! Not sufficient memory */
#define SJPG_ERR_NOT_SUFF_MEM            (-2)
/*! Not supported function */
#define SJPG_ERR_NOT_SUPPORT             (-3)
/*! Invalid argument error */
#define SJPG_ERR_INVALID_ARG             (-4)
/*! Invalid bitstream */
#define SJPG_ERR_INVALID_BS              (-5)
/*! Too small bitstream buffer (encoder only) */
#define SJPG_ERR_SMALL_BS_BUF            (-6)
/*! Too small image buffer (decoder only) */
#define SJPG_ERR_SMALL_IMG_BUF           (-7)
/*! Not expected execution point */
#define SJPG_ERR_NOT_EXPECTED            (-8)
/*! Generic hardware problem */
#define SJPG_ERR_HW                      (-9)
/*! Not available resource now */
#define SJPG_ERR_NOT_AVAILABLE           (-10)
/*! Unknown error */
#define SJPG_ERR_UNKNOWN                 (-0xFF)

/* SJPG return value checking macro ****************************************/
#define SJPG_IS_OK(ret)                  ((ret) >= 0)
#define SJPG_IS_ERR(ret)                 ((ret) < 0)

/* application data types **************************************************/
#define SJPG_AT_EXIF                     (1)
#define SJPG_AT_JFIF                     (2)
#define SJPG_AT_UNKNOWN                  (-1)

typedef struct _SJPGD_APP                SJPGD_APP;

/*! application data */
struct _SJPGD_APP
{
	/* application data type */
	int               type;
	/* application data size */
	int	              size;
	/* application data */
	void            * data;
	/* next application structure */
	SJPGD_APP       * next;
};

/*! initialization descriptor for decoder */
typedef struct
{
	/* input bitstream */
	SCMN_BITB  bitb;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int        use_accel;
} SJPGD_INIT_DSC;

/*! primary information */
typedef struct
{
	/* actual picture width */
	int                 w;
	/* actual picture height */
	int                 h;
	/* color space */
	int                 cs;
	/* progressive scan? */
	int					prog;
	/* application data */
	SJPGD_APP         * app;
} SJPGD_INFO;

/*! decoder ouput status */
typedef struct
{
	/* A decoded picture is available? */
	int                 pa;
	/* Width of decoded picture */
	int                 w;
	/* Height of decoded picture */
	int                 h;
	/* Byte size of decoded bitstream (read size of bitstream) */
	int                 read;
} SJPGD_STAT;

/*! initialization descriptor for decoder */
typedef struct
{
	SCMN_BITB * bitb;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int         use_accel;
} SJPGE_INIT_DSC;

/*! primary information */
typedef struct
{
	/*! actual picture width */
	int                 w;
	/*! actual picture height */
	int                 h;
	/*! color space */
	int                 cs;
	/*! image quality */
	int                 q;
	/*! optimal huffman code table generate */
	/*! Not supported yet */
	int                 op;		/* 1: on    0: off */
	int                 dri_mcu;
} SJPGE_INFO;

/*! decoder ouput status */
typedef struct
{
	/*! A encoded picture is available? */
	int                 pa;
	/*! Width of encoded picture */
	int                 w;
	/*! Height of encoded picture */
	int                 h;
	/*! Byte size of encoded bitstream (write size of bitstream) */
	int                 write;
} SJPGE_STAT;

/* common functions for SJPG */
int sjpg_init(void);
void sjpg_deinit(void);

/* function declarations for SJPG decoder */
SJPGD sjpgd_create(SJPGD_INIT_DSC * init_dsc, SJPGD_INFO * info, int * err);
int sjpgd_decode(SJPGD id, SCMN_IMGB * img, SJPGD_STAT * stat);
void sjpgd_delete(SJPGD id);

/* function declarations for SJPG encoder */
SJPGE sjpge_create(SJPGE_INIT_DSC * init_dsc, SJPGE_INFO * info, int * err);
int sjpge_encode(SJPGE id, SCMN_IMGB * img, SJPGE_STAT * stat);
void sjpge_delete(SJPGE id);

#ifdef __cplusplus
}
#endif

#endif /* __SJPG_H__903849032743082490328439024838274302483902843920__ */

