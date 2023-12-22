/****************************************************************************
*                       Samsung Electronics Co. Ltd.                       *
*                                                                          *
*                           COPYRIGHT (C) 2008                             *
*                          All Rights Reserved                             *
*                                                                          *
*                        A/V Codec Lab. R&D Center                         *
*                 Telecommunication & Network Business                     *
****************************************************************************/

/*!
*****************************************************************************
* @file sbmp.h
*
* @brief header of SBMP
*
* @date 2009-04-13 Kyung Il Lee creates the code.
*
* @author Kyung Il Lee at Samsung Electronics
*****************************************************************************
*/
#ifndef __SBMP_H__5687567845648756238463843274639846348364846834783248324623__
#define __SBMP_H__5687567845648756238463843274639846348364846834783248324623__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SBMP instance identifier for decoder */
typedef void *          SBMPD;
/*! SBMP instance identifier for encoder */
typedef void *          SBMPE;


/* SBMP General purpose return (error) code ********************************/
/*! General operation success */
#define SBMP_OK                          (0)
/*! Not sufficient memory */
#define SBMP_ERR_NOT_SUFF_MEM            (-2)
/*! Not supported function */
#define SBMP_ERR_NOT_SUPPORT             (-3)
/*! Invalid argument error */
#define SBMP_ERR_INVALID_ARG             (-4)
/*! Invalid bitstream */
#define SBMP_ERR_INVALID_BS              (-5)
/*! Too small bitstream buffer (encoder only) */
#define SBMP_ERR_SMALL_BS_BUF            (-6)
/*! Too small image buffer (decoder only) */
#define SBMP_ERR_SMALL_IMG_BUF           (-7)
/*! Not expected execution point */
#define SBMP_ERR_NOT_EXPECTED            (-8)
/*! Generic hardware problem */
#define SBMP_ERR_HW                      (-9)
/*! Not available resource now */
#define SBMP_ERR_NOT_AVAILABLE           (-10)
/*! Unknown error */
#define SBMP_ERR_UNKNOWN                 (-0xFF)

/* SBMP return value checking macro ****************************************/
#define SBMP_IS_OK(ret)                  ((ret) >= 0)
#define SBMP_IS_ERR(ret)                 ((ret) < 0)

/* BMP Compression mode */
#define SBMP_CM_BI_RGB                 0   /* none */
#define SBMP_CM_BI_RLE8                1
#define SBMP_CM_BI_RLE4                2
#define SBMP_CM_BI_BITFIELDS           3   /* none */
#define SBMP_CM_BI_JPEG                4   /* not supported */
#define SBMP_CM_BI_PNG                 5   /* not supported */

/*! initialization descriptor for decoder */
typedef struct
{
	SCMN_BITB bitb;
	int    use_accel;
} SBMPD_INIT_DSC;

/*! primary information */
typedef struct
{
	/*! actual image width */
	int     w;
	/*! actual image height */
	int     h;
	/* actual color space */
	int     cs;
	/* compression mode */
	int     cm;
	/* bits per pixel */
	int     bpp;
} SBMPD_INFO;

/*! decoder ouput status */
typedef struct
{
	/*! A decoded picture is available? */
	int      pa;
	/*! Width of decoded picture */
	int      w;
	/*! Height of decoded picture */
	int      h;
	/*! Byte size of decoded bitstream (read size of bitstream) */
	int      read;
} SBMPD_STAT;


typedef struct
{
 	int    cs;      /* output color space */
	int    use_accel;
} SBMPE_INIT_DSC;

/*! decoder ouput status */
typedef struct
{
	/*! A encoded picture is available? */
	int      pa;
	/*! Byte size of encoded bitstream (read size of bitstream) */
	int      write;
	/*! Bitmap bits */
	int      bits;
} SBMPE_STAT;

/* common functions for SJPG */
int sbmp_init(void);
void sbmp_deinit(void);

/* function declarations for SBMP decoder */
SBMPD sbmpd_create(SBMPD_INIT_DSC * init_dsc, SBMPD_INFO * info, int * err);
int sbmpd_decode(SBMPD id, SCMN_IMGB * img, SBMPD_STAT * stat);
void sbmpd_delete(SBMPD id);

/* function declarations for SBMP encoder */
SBMPE sbmpe_create(SBMPE_INIT_DSC * init_dsc, int * err);
int sbmpe_encode(SBMPE id, SCMN_IMGB * img, SCMN_BITB * bitb, SBMPE_STAT * stat);
void sbmpe_delete(SBMPE id);


#ifdef __cplusplus
}
#endif

#endif /*__SBMP_H__5687567845648756238463843274639846348364846834783248324623__*/


