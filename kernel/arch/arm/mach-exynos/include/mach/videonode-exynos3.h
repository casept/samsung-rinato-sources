/* linux/arch/arm/mach-exynos/include/mach/videonode-exynos3.h
 *
 * Copyright (c) 2013 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * EXYNOS3 - Video node definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __MACH_VIDEONODE_EXYNOS3_H
#define __MACH_VIDEONODE_EXYNOS3_H __FILE__

#define S5P_VIDEONODE_MFC_DEC			6
#define S5P_VIDEONODE_MFC_ENC			7

#define EXYNOS_VIDEONODE_SCALER(x)		(50 + x)

#define EXYNOS_VIDEONODE_JPEG_HX_DEC(x)		(13 - (x) * 2)
#define EXYNOS_VIDEONODE_JPEG_HX_ENC(x)		(14 - (x) * 2)

#define EXYNOS_VIDEONODE_GSC_M2M(x)		(23 + (x) * 3)
#define EXYNOS_VIDEONODE_GSC_OUT(x)		(24 + (x) * 3)
#define EXYNOS_VIDEONODE_GSC_CAP(x)		(25 + (x) * 3)

#define EXYNOS_VIDEONODE_FLITE(x)		(36 + x)
#define EXYNOS_VIDEONODE_FIMC_IS			(100)
#endif /* __MACH_VIDEONODE_EXYNOS3_H */
