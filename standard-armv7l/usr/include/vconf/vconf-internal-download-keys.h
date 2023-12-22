/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_DOWNLOAD_KEYS_H__
#define __VCONF_INTERNAL_DOWNLOAD_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-download-keys.h
 * @defgroup    vconf_internal_download_key Definitions of internal shared Keys for download modules
 * @ingroup     vconf_internal_key
 * @author      Jungki Kwak jungki.kwak@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for download modules \n
 */

/* ========================== browser Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_download_key
 * @{
 * @brief download Keys & Values\n
 *        Maintainer : Jungki Kwak jungki.kwak@samsung.com
 */


/**
 * @brief downloading state for download manager
 *
 */
#define VCONFKEY_DOWNLOAD_MANAGER_STATE    "memory/download_manager/state"
enum {
	/** Downloading is not started or finished */
	VCONFKEY_DOWNLOAD_MANAGER_NONE = 0,
	/** Downloading is on going */
	VCONFKEY_DOWNLOAD_MANAGER_DOWNLOADING
};

/**
 * @brief downloading state for download provider
 *
 */
#define VCONFKEY_DOWNLOAD_SERVICE_STATE    "memory/download_service/state"
enum {
	/** Downloading is not started or finished */
	VCONFKEY_DOWNLOAD_SERVICE_NONE = 0,
	/** Downloading is on going */
	VCONFKEY_DOWNLOAD_SERVICE_DOWNLOADING
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DOWNLOAD_KEYS_H__ */

