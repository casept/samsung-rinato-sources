/*
 * Copyright (c) 2000-2014 Samsung Electronics Co., Ltd All Rights Reserved 

 *

 * Contact: Sangchul Lee <sc11.lee@samsung.com>
 *
 * PROPRIETARY/CONFIDENTIAL
 * 
 * This software is the confidential and proprietary information of
 * SAMSUNG ELECTRONICS ("Confidential Information").
 * You shall not disclose such Confidential Information and shall
 * use it only in accordance with the terms of the license agreement
 * you entered into with SAMSUNG ELECTRONICS.
 * SAMSUNG make no representations or warranties about the suitability
 * of the software, either express or implied, including but not
 * limited to the implied warranties of merchantability, fitness for
 * a particular purpose, or non-infringement.
 * SAMSUNG shall not be liable for any damages suffered by licensee as
 * a result of using, modifying or distributing this software or its derivatives.

 */


#ifndef __EXIF_MNOTE_DATA_SAMSUNG_H__
#define __EXIF_MNOTE_DATA_SAMSUNG_H__

#include <libexif/exif-byte-order.h>
#include <libexif/exif-mnote-data.h>
#include <libexif/exif-mnote-data-priv.h>
#include <libexif/samsung/mnote-samsung-entry.h>
#include <libexif/exif-mem.h>
#include <libexif/exif-data.h>

int exif_mnote_data_samsung_identify (const ExifData *ed, const ExifEntry *e);

ExifMnoteData *exif_mnote_data_samsung_new (ExifMem *mem);

#endif /* __EXIF_MNOTE_DATA_SAMSUNG_H__ */
