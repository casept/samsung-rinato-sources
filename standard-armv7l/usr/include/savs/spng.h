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
 * @file spng.h
 *
 * @brief API definition of SPNG
 *
 * @data 2009-03-02 Jong Won Jin creates the code.
 *
 * @author Jong Won Jin at Samsung Electronics
 *****************************************************************************
 */

#ifndef __SPNG_H__122980540950348529481903812903120339041234123123__
#define __SPNG_H__122980540950348529481903812903120339041234123123__

#ifdef __cplusplus
extern "C"
{
#endif

#include <scmn_base.h>

/*! SPNG instance identifier for decoder */
typedef void *          SPNGD;
/*! SPNG instance identifier for encoder */
typedef void *          SPNGE;

/* SPNG General purpose return (error) code ********************************/
/*! General operation success */
#define SPNG_OK                          (0)
/*! Not sufficient memory */
#define SPNG_ERR_NOT_SUFF_MEM            (-1)
/*! Not supported function */
#define SPNG_ERR_NOT_SUPPORT             (-2)
/*! Invalid argument error */
#define SPNG_ERR_INVALID_ARG             (-3)
/*! Invalid bitstream */
#define SPNG_ERR_INVALID_BS              (-4)
/*! Too small bitstream buffer (encoder only) */
#define SPNG_ERR_SMALL_BS_BUF            (-5)
/*! Too small image buffer (decoder only) */
#define SPNG_ERR_SMALL_IMG_BUF           (-6)
/*! Not expected execution point */
#define SPNG_ERR_NOT_EXPECTED            (-7)
/*! Generic hardware problem */
#define SPNG_ERR_HW                      (-8)
/*! Not available resource now */
#define SPNG_ERR_NOT_AVAILABLE           (-9)
/*! Invalid parameter error */
#define SPNG_ERR_INVALID_PARAM           (-10)
/*! Unknown error */
#define SPNG_ERR_UNKNOWN                 (-0xFF)

/* return value checking macro ****************************************/
#define SPNG_IS_OK(ret)                  ((ret) >= 0)
#define SPNG_IS_ERR(ret)                 ((ret) < 0)

/* Max image count for APNG bitstream */
#define SPNG_MAX_IMG                     32

/*! initialization descriptor for decoder */
typedef struct
{
	SCMN_BITB  bitb;
	/*! 0: No acceleration (S/W), 1: Uses Acceleration (H/W) */
	int        use_accel;
} SPNGD_INIT_DSC;

/*! decoder ouput status */
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
} SPNGD_STAT;

/* image descriptions */
typedef struct
{
	/*! left position of decoded picture in screen coordinate */
	int                 x;
	/*! top position of decoded picture in screen coordinate */
	int                 y;
	/*! Width of decoded picture */
	int                 w;
	/*! Height of decoded picture */
	int                 h;
	/*! time delay(given as fraction number, in second) */
	/*! delay numerator(if '0', treat as '100') */
	int                 delay_num;
	/*! delay denominator */
	int                 delay_den;

	/* ! way of output buffer change at the end of the delay */
	/* 'o': none, '1': background, '2': previous */
	int                 disposal;
	/*! how to alpha blending with the current output buffer content  */
	/* 'o': replace, '1': alpha blend */
	int                 blending;
} SPNGD_IMG_DSC;

/*! primary information */
typedef struct
{
	/*! color space */
	int                 cs;
	/*! bit depth */
	int                 depth;
	/*! 4 bytes map informing configurations */
	/* +============+                            */
	/* |31 ........0| 32bit                      */
	/* +============+                            */
	/* 0: if set, background color is given in   */
	/*    bkcolor[3]                             */
	/* 1: if set, transparency info is given in  */
	/*    tpcolor[255]                           */
	/* 31: if set, 1st image is included in      */
	/*     animation                             */
	int                 map_info;
	/*! background color */
	/*  01 23 45     array idx                   */
	/* +========+ for true color                 */
	/* |xx xx xx| 32bit x 3 data                 */
	/* | r: g: b| each 32bit red, green, blue    */
	/* +========+                                */
	/*  01 23 45     array idx                   */
	/* +========+ for grey scale/idexed color    */
	/* |xx xx xx| 32bit x 1 data                 */
	/* | v:     | one 32bit (grey level          */
	/* +========+            /palette idx)       */
	int                 bkcolor[3];
	/*! transparent color */
	/*  0 1 2 3 4 5 ... array idx                */
	/* +===========+    for indexed color        */
	/* |x x x x x x|... array of 8bit data       */
	/* |i:i:i:i:i:i|... each 8bit palette idx    */
	/* +===========+                             */
	/*  01 23 45 ... array idx                   */
	/* +========+    for truecolour              */
	/* |xx xx xx|    8bit x 6 data               */
	/* | r: g: b|    each 16bit red, green, blue */
	/* +===========+                             */
	/*  01 ...       array idx                   */
	/* +==+          for greyscale               */
	/* |xx|          8bit x 2 data               */
	/* | v|          one 16bit value             */
	/* +==+                                      */
	unsigned char       tpcolor[255];
	/*! total image count */
	int                 img_cnt;
	/*! image descriptions */
	SPNGD_IMG_DSC       img_dsc[SPNG_MAX_IMG];
} SPNGD_INFO;

/* common functions for SPNG */
int spng_init(void);
void spng_deinit(void);

/* function declarations for SPNG decoder */
SPNGD spngd_create(SPNGD_INIT_DSC * init_dsc, SPNGD_INFO * info, int * err);
int spngd_decode(SPNGD id, int idx, SCMN_IMGB * img, SPNGD_STAT * stat);
void spngd_delete(SPNGD id);

#ifdef __cplusplus
}
#endif

#endif /* __SPNG_H__122980540950348529481903812903120339041234123123__ */
