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

#ifndef __VCONF_INTERNAL_BROWSER_KEYS_H__
#define __VCONF_INTERNAL_BROWSER_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-browser-keys.h
 * @defgroup    vconf_internal_browser_key Definitions of internal shared Keys for browser
 * @ingroup     vconf_internal_key
 * @author      Sangpyo Kim sangpyo7.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for browser \n
 */

/* ========================== browser Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_browser_key
 * @{
 * @brief browser Keys & Values\n
 *        Maintainer : Sangpyo Kim sangpyo7.kim@samsung.com
 */

#define VCONFKEY_BROWSER_PREFIX                       "db/browser"

/**
 * @brief UserAgent profile for browser
 *
 */
#define VCONFKEY_BROWSER_BROWSER_USER_AGENT    VCONFKEY_BROWSER_PREFIX"/browser_user_agent"

/**
 * @brief UserAgent profile for user customizing
 *
 */
#define VCONFKEY_BROWSER_CUSTOM_USER_AGENT    VCONFKEY_BROWSER_PREFIX"/custom_user_agent"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_BROWSER_KEYS_H__ */

