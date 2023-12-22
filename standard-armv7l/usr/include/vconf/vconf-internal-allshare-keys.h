/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>, MinSeo Park <minseo.park@samsung.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef __VCONF_INTERNAL_ALLSHARE_KEYS_H__
#define __VCONF_INTERNAL_ALLSHARE_KEYS_H__

/**
 * This file defines keys and values of Allshare.
 *
 * @file        vconf-internal-allshare-keys.h
 * @defgroup    vconf_internal_allshare_key Definitions of internal shared Keys for allshare
 * @ingroup     vconf_internal_key
 * @author      minseo.park@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for allshare \n
 */

/* ========================== Allshare Setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_allshare_key
 * @{
 * @brief Allshare Setting Keys & Values\n
 *        Maintainer : minseo.park@samsung.com
 */

/**
 * @brief File sharing(local DMS) on/off(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_ALLSHARE_STATUS "db/allshare/status"
enum
{
	VCONFKEY_ALLSHARE_DISABLE = 0,
	VCONFKEY_ALLSHARE_ENABLE = 1
};

/**
 * @brief How often warning popup is shown(int)
 *
 * Show always = 0 \n
 * Don't ask again = 1
 */
#define VCONFKEY_ALLSHARE_SHOW_WARNING_STATE "db/allshare/show_warning"
enum
{
	VCONFKEY_ALLSHARE_SHOW_WARNING_ALWAYS = 0,
	VCONFKEY_ALLSHARE_SHOW_WARNING_NOMORE = 1
};

/**
 * @brief Accept uploading contents from other devices to my device or not(int)
 *
 * always accept = 0 \n
 * alwats ask = 1 \n
 * alwats reject = 2
 */
#define VCONFKEY_ALLSHARE_UPLOAD_STATUS "db/allshare/upload_status"
enum
{
	VCONFKEY_ALLSHARE_UPLOAD_ALWAYS_ACCEPT = 0,
	VCONFKEY_ALLSHARE_UPLOAD_ALWAYS_ASK = 1,
	VCONFKEY_ALLSHARE_UPLOAD_ALWAYS_REJECT = 2
};

/**
 * @brief Shared media type of my device(int)
 *
 * combination of below
 * Image : 1
 * Video : 2
 * Music : 4
 */
#define VCONFKEY_ALLSHARE_SHARE_MEDIA_TYPE "db/allshare/share_media_type"
enum
{
	VCONFKEY_ALLSHARE_SHARE_MEDIA_TYPE_IMAGE = 1,
	VCONFKEY_ALLSHARE_SHARE_MEDIA_TYPE_VIDEO = 2,
	VCONFKEY_ALLSHARE_SHARE_MEDIA_TYPE_MUSIC = 4
};

/**
 * @brief Saved file path for files uploaded from other device(string) \n
 *	If files are uploaded from other device, files are saved to this path. \n
 *	If SD card is inserted and download location is set to SD card, this path should be set to SD card, too.
 */
#define VCONFKEY_ALLSHARE_DOWNLOAD_PATH "db/allshare/download_path"

/**
 * @brief Access control status(int) \n
 * If the value is "Always all", my device can share media contents to any devices. \n
 * Or if the value is "Only allowed device", my device can share media contents to the allowed devices.
 *
 * Always all = 0 \n
 * Only allowed device = 1
 */
#define VCONFKEY_ALLSHARE_ACCESS_CONTROL_STATUS "db/allshare/access_control_status"
enum
{
	VCONFKEY_ALLSHARE_ACCESS_CONTROL_ALWAYS_ALL = 0,
	VCONFKEY_ALLSHARE_ACCESS_CONTROL_ONLY_ALLOWED_DEVICE = 1
};

/**
 * @brief Saved location of downloaded files.(int)
 *
 * Phone storage = 0 \n
 * External storage(SD card) = 1
 *
 */
#define VCONFKEY_ALLSHARE_DOWNLOAD_LOCATION "db/allshare/download_location"
enum
{
	VCONFKEY_ALLSHARE_DOWNLOAD_LOCATION_PHONE = 0,
	VCONFKEY_ALLSHARE_DOWNLOAD_LOCATION_MMC = 1
};

/**
 * @brief AllShare service(allshare-svc) state (int)
 *
 * Allshare service process is not started = 0 \n
 * Allshare service process is starting = 1 \n
 * Allshare service process is started = 2
 */
#define VCONFKEY_ALLSHARE_SERVICE_STATE "memory/allshare/service_state"
enum
{
	VCONFKEY_ALLSHARE_SERVICE_NOT_STARTED = 0,
	VCONFKEY_ALLSHARE_SERVICE_STARTING = 1,
	VCONFKEY_ALLSHARE_SERVICE_STARTED = 2
};

/**
* @brief Allshare mark for allowed/denied list selected .(int)
*    When user deleted allowed/denied list in allshare setting ug, \n
*    this vconf is set to tell allshare-dms process to call corresponded ASF APIs. \n
*    Bit is used to identify the contents selected, total is 32 bits in "int" type.\n
*
*    Bit:                   31  30  29   28  27              7    6    5    4    3    2    1    0   \n
*                             |    |    |    |   |    ... ...     |    |    |    |    |    |    |    |  \n
*
*    Bit 0:         Differentiate allowed or denied list to be processed, 0 is denied list, 1 is allowed list.\n
*    Bit 1--30:  Selected list index. if the first and third item is selected by user, then Bit 1 and Bit 3 are both 1.\n
*    Bit 31:       Sign bit backup, always be 0.\n
*    For example: if user selected  the first and third item in allowed list to delete, this vconf value is 0x0b.
*
*/

#define VCONFKEY_ALLSHARE_LIST_MARK "memory/allshare/list_mark"

/**
 * @brief AllShare uploading percent
 *   Tell the notification popup to show the uploading percentage, the value is from 0--100
 */
#define	VCONFKEY_ALLSHARE_UPLOADING_PERCENT "memory/allshare/uploading_percent"

/**
 * @brief AllShare popup event for user's choise
 * Tell allshare-dms process to which action user do after popup such as deny or allow access device
 * allow device access = 0 \n
 * deny device access = 1 \n
 * allow file upload = 2 \n
 * deny file upload = 3 \n
 * upload cancel = 4 or more
 */
#define	VCONFKEY_ALLSHARE_POPUP_EVENT "memory/allshare/popup_event"
enum {
	VCONFKEY_ALLSHARE_POPUP_ACCESS_ALLOW = 0,
	VCONFKEY_ALLSHARE_POPUP_ACCESS_DENY = 1,
	VCONFKEY_ALLSHARE_POPUP_UPLOAD_ACCEPT = 2,
	VCONFKEY_ALLSHARE_POPUP_UPLOAD_DENY = 3,
	VCONFKEY_ALLSHARE_POPUP_UPLOAD_CANCEL = 4
};

/**
 * @brief AllShare cp change notify
 * Weather control point access is changed in UG allow/deny list or by user selected in popup through allshare-dms process, it should be
 * control point access change in UG  = 0 \n
 * control point access change in allshare dms process  = 1
 */
#define	VCONFKEY_ALLSHARE_CP_CHANGE "memory/allshare/cp_change"
enum {
	VCONFKEY_ALLSHARE_CP_CHANGE_BY_UG = 0,
	VCONFKEY_ALLSHARE_CP_CHANGE_BY_PROCESS = 1
};

/**
 * @}
 */


#endif	/* __VCONF_INTERNAL_ALLSHARE_KEYS_H__ */
