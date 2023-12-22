/*
 * vconf-internal-starter-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_STARTER_KEYS_H__
#define __VCONF_INTERNAL_STARTER_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-starter-keys.h
 * @defgroup    vconf_internal_starter-key Definitions of internal shared Keys for starter
 * @ingroup     vconf_internal_key
 * @author      Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, youngsub Ko <ys4610.ko@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for starter \n
 */

/* ========================== starter Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_starter_key
 * @{
 * @brief starter Keys & Values\n
 *        Maintainer : Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
 */

/**
 * @brief sequence of displaying home screen
 *
 * type : int
*/
#define VCONFKEY_STARTER_SEQUENCE	"memory/starter/sequence"

/**
 * @brief usage of volume key.
 *
 * type : int
*/
#define VCONFKEY_STARTER_USE_VOLUME_KEY	"memory/starter/use_volume_key"

/**
 * @brief count of missed calls.
 *
 * type : int
*/
#define VCONFKEY_STARTER_MISSED_CALL	"db/starter/missed_call"

/**
 * @brief count of unread messages.
 *
 * type : int
*/
#define VCONFKEY_STARTER_UNREAD_MESSAGE	"db/starter/unread_message"

#endif	/* __VCONF_INTERNAL_STARTER_KEYS_H__ */
