/*
 * vconf-internal-appservice-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hyunbin Lee <hyunbin.lee@samsung.com>
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
 */

#ifndef __VCONF_INTERNAL_APPSERVICE_KEYS_H__
#define __VCONF_INTERNAL_APPSERVICE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file		vconf-internal-appservice-keys.h
 * @defgroup	vconf_internal_appservice_key Definitions of internal shared Keys for appservice
 * @ingroup		vconf_internal_key
 * @author		hyunbin.lee@samsung.com
 * @version		0.1
 * @brief		This file has the definitions of shared keys for appservice \n
 */

/* ========================== AppService Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_appservice_key
 * @{
 * @brief AppService Keys & Values\n
 *		Maintainer : hyunbin.lee@samsung.com
 */

/**
 * @brief mmc status(int)
 *
 * 0 : Remove \n
 * 1 : mount \n
 * 2 : insert(not mount) \n
 */
#define VCONFKEY_APPSERVICE_MMC_STATUS  "memory/appservice/mmc"

/*
* @brief osp appservice status(int)
*
* 0 : not running (N/A also)
* 1 : running, but not ready
* 2 : running and ready
*/
#define VCONFKEY_APPSERVICE_STATUS "memory/appservice/status"

/**
 * @brief platform service initialization complete
 *
 * -1 / 0 : not ready
 *  1 : ready
 */
#define VCONFKEY_PLATFORM_READY	"memory/appservice/serviceready"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_APPSERVICE_KEYS_H__ */

