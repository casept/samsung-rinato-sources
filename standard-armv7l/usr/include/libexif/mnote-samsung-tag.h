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


#ifndef __MNOTE_SAMSUNG_TAG_H__
#define __MNOTE_SAMSUNG_TAG_H__

#include <libexif/exif-data.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

enum _MnoteSamsungTag {
	MNOTE_SAMSUNG_TAG_MNOTE_VERSION	= 0x01,
	MNOTE_SAMSUNG_TAG_DEVICE_ID	= 0x02,
	MNOTE_SAMSUNG_TAG_MODEL_ID	= 0x03,
	MNOTE_SAMSUNG_TAG_COLOR_INFO	= 0x20,
	MNOTE_SAMSUNG_TAG_SERIAL_NUM	= 0x23,
	MNOTE_SAMSUNG_TAG_IMAGE_COUNT	= 0x25,
	MNOTE_SAMSUNG_TAG_GPS_INFO01	= 0x30,
	MNOTE_SAMSUNG_TAG_GPS_INFO02	= 0x31,
	MNOTE_SAMSUNG_TAG_PREVIEW_IMAGE	= 0x35,
	MNOTE_SAMSUNG_TAG_FAVOR_TAGGING	= 0x40,
	MNOTE_SAMSUNG_TAG_SRW_COMPRESS	= 0x45,
	MNOTE_SAMSUNG_TAG_COLOR_SPACE	= 0x50,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO  = 0x54,		/* WEATHER INFORMATION */
	MNOTE_SAMSUNG_TAG_AE		= 0x60,
	MNOTE_SAMSUNG_TAG_AF		= 0x80,
	MNOTE_SAMSUNG_TAG_AWB01		= 0xa0,
	MNOTE_SAMSUNG_TAG_AWB02		= 0xa1,
	MNOTE_SAMSUNG_TAG_IPC		= 0xc0,
	MNOTE_SAMSUNG_TAG_SCENE_RESULT	= 0xe0,
	MNOTE_SAMSUNG_TAG_SADEBUG_INFO01= 0xe1,
	MNOTE_SAMSUNG_TAG_SADEBUG_INFO02= 0xe2,
	MNOTE_SAMSUNG_TAG_FACE_DETECTION= 0x100,
	MNOTE_SAMSUNG_TAG_FACE_FEAT01	= 0x101,
	MNOTE_SAMSUNG_TAG_FACE_FEAT02	= 0x102,
	MNOTE_SAMSUNG_TAG_FACE_RECOG	= 0x120,
	MNOTE_SAMSUNG_TAG_LENS_INFO	= 0x140,
	MNOTE_SAMSUNG_TAG_THIRDPARTY	= 0xa000
};
typedef enum _MnoteSamsungTag MnoteSamsungTag;

enum _MnoteSamsungSubTag {
	MNOTE_SAMSUNG_SUBTAG_MODEL_ID_CLASS	= 0x201,
	MNOTE_SAMSUNG_SUBTAG_MODEL_ID_DEVEL	= 0x202,
	MNOTE_SAMSUNG_SUBTAG_COLOR_ID		= 0x211,
	MNOTE_SAMSUNG_SUBTAG_WEATHER_INFO_CONDITION = 0x541,
};
typedef enum _MnoteSamsungSubTag MnoteSamsungSubTag;

enum _MnoteSamsungTagWeatherInfo{
	MNOTE_SAMSUNG_TAG_WEATHER_NO_INFO = 0,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO_SUNNY,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO_CLOUDY,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO_RAINY,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO_SNOWY,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO_CLEAR,
	MNOTE_SAMSUNG_TAG_WEATHER_INFO_MAX,		// others (reserved)
};
typedef enum _MnoteSamsungTagWeatherInfo MnoteSamsungTagWeatherInfo;

#define MNOTE_SAMSUNG_TAG_WEATHER_LOWEST_TEMPERATURE		-128
#define MNOTE_SAMSUNG_TAG_WEATHER_HIGHEST_TEMPERATURE		127



const char *mnote_samsung_tag_get_name        (MnoteSamsungTag);

const char *mnote_samsung_tag_get_title       (MnoteSamsungTag);

const char *mnote_samsung_tag_get_description (MnoteSamsungTag);



#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __MNOTE_SAMSUNG_TAG_H__ */
