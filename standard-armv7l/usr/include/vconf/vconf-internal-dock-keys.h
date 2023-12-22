/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>, Genie Kim <daejins.kim@samsung.com>
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

#ifndef __VCONF_INTERNAL_DOCK_KEYS_H__
#define __VCONF_INTERNAL_DOCK_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-dock-keys.h
 * @defgroup    vconf_internal_dock_key Definitions of internal shared Keys for desk-dock
 * @ingroup     vconf_internal_key
 * @author      yun.xu@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for desk-dock \n
 */

/* ========================== Desk-dock Setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_dock_key
 * @{
 * @brief Dock Setting Keys & Values\n
 *        Maintainer : jiansong.jin@samsung.com
                       lei527.zhang@samsung.com
 */

/**
 * @brief enable ext_speaker on/off (bool)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_DOCK_EXT_SPEAKER "db/dock/ext_speaker"

/**
 * @brief the package name of desk-dock (string)
 *
 * "com.samsung.desk-dock"
 */
#define VCONFKEY_DOCK_PACKAGE_NAME "db/dock/package_name"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DOCK_KEYS_H__ */

