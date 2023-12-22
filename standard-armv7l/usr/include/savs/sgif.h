/****************************************************************************
 *                       Samsung Electronics Co. Ltd.                       *
 *                                                                          *
 *                           COPYRIGHT (C) 2009                             *
 *                          All Rights Reserved                             *
 *                                                                          *
 *                         Video Lab. R&D Center                            *
 ****************************************************************************/

/*!
 *****************************************************************************
 * @file sgif.h
 *
 * @brief API definition of SGIF
 *
 * @date 2009-03-02 Jong Won Jin created the code.
 * @date 2009-12-17 Jungwon Lee modified the code.
 *
 * @author Jong Won Jin at Samsung Electronics
 * @author Jungwon Lee at Samsung Electronics
 *****************************************************************************
 */

#ifndef __SGIF_H__122980540950348529481903812903120339041234123123__
#define __SGIF_H__122980540950348529481903812903120339041234123123__

#ifdef __cplusplus
extern "C"
{
#endif

#include "scmn_base.h"

/*! SGIF instance identifier for decoder */
typedef void *          SGIFD;
/*! SGIF instance identifier for encoder */
typedef void *          SGIFE;

/* SGIF General purpose return (error) code ********************************/
/*! General operation success */
#define SGIF_OK                          (0)
/*! Not sufficient memory */
#define SGIF_ERR_NOT_SUFF_MEM            (-2)
/*! Not supported function */
#define SGIF_ERR_NOT_SUPPORT             (-3)
/*! Invalid argument error */
#define SGIF_ERR_INVALID_ARG             (-4)
/*! Invalid bitstream */
#define SGIF_ERR_INVALID_BS              (-5)
/*! Too small bitstream buffer (encoder only) */
#define SGIF_ERR_SMALL_BS_BUF            (-6)
/*! Too small image buffer (decoder only) */
#define SGIF_ERR_SMALL_IMG_BUF           (-7)
/*! Not expected execution point */
#define SGIF_ERR_NOT_EXPECTED            (-8)
/*! Generic hardware problem */
#define SGIF_ERR_HW                      (-9)
/*! Not available resource now */
#define SGIF_ERR_NOT_AVAILABLE           (-10)
/*! Unknown error */
#define SGIF_ERR_UNKNOWN                 (-0xFF)

/* return value checking macro ****************************************/
#define SGIF_IS_OK(ret)                  ((ret) >= 0)
#define SGIF_IS_ERR(ret)                 ((ret) < 0)
/* Max image count is limited 64 (by specification) */
#define SGIFD_MAX_IMG                    64

/*! initialization descriptor for decoder */
typedef struct
{
	SCMN_BITB  bitb;
	/* 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int        use_accel;
} SGIFD_INIT_DSC;

/* decoder output status */
typedef struct
{
	/*! A decoded picture is available? */
	int                 pa;
} SGIFD_STAT;

/*! primary information */
typedef struct
{
	/*! color space */
	int                 cs;
	/*! animation loop */
	/* 0: infinite loop, other numbers: number of loops */
	int                 loop;
	/*! original width of the image */
	int                 w;
	/*! original height of the image */
	int                 h;
	/*! total image (frame) count & animation indicator */
	/* 1: non-animated GIF, more than 1: animated GIF */
	int                 img_cnt;
	/*! background color Flag */
	int                 bkgdf;
	/*! background color */
	/* +===========+            */
	/* |xx xx xx xx| 32bit data */
	/* |xx: b: g: r| each 8bit  */
	/* +===========+            */
	int                 bkgd;
	/*! delay time before the next frame (msec) */
	/* e.g. delay_t[0]: delay time between frame0 and frame1 */
	int                 delay_t[SGIFD_MAX_IMG];
} SGIFD_INFO;

/* common functions for SGIF */
int sgif_init(void);
void sgif_deinit(void);

/* function declarations for SGIF decoder */
SGIFD sgifd_create(SGIFD_INIT_DSC * init_dsc, SGIFD_INFO * info, int * err);
int sgifd_decode(SGIFD id, int idx, SCMN_IMGB *img, SGIFD_STAT *stat);
void sgifd_delete(SGIFD id);

/* SGIF encoder has not been implemented yet */
/* Check sgif_test.c for example usage codes */

#ifdef __cplusplus
}
#endif

#endif /* __SGIF_H__122980540950348529481903812903120339041234123123__ */

