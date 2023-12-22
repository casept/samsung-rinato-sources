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

#ifndef __VCONF_INTERNAL_SYSTEM_KEYS_H__
#define __VCONF_INTERNAL_SYSTEM_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-system-keys.h
 * @defgroup    vconf_internal_system_key Definitions of internal shared Keys for System
 * @ingroup     vconf_internal_key
 * @author      Jaeho Lee <jaeho81.lee@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for System \n
 */

/* ========================== System Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_system_key
 * @{
 * @brief System Keys & Values\n
 *        Maintainer : Jaeho Lee <jaeho81.lee@samsung.com>
 */

/**
* @brief current time value when time is changed
*
* value : current time
*/
#define VCONFKEY_SYSTEM_TIME_CHANGED "memory/system/timechanged"

/**
 * @brief new time when time is changed
 *
 * value : new time
 */
#define VCONFKEY_SYSTEM_TIMECHANGE "db/system/timechange"

/**
 * @brief time diff when time is changed externally
 *
 * value : new time
 */
#define VCONFKEY_SYSTEM_TIMECHANGE_EXTERNAL "db/system/timechange_external"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SYSTEM_KEYS_H__ */

