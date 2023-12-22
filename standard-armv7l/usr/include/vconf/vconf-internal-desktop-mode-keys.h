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

#ifndef __VCONF_INTERNAL_DESKTOP_MODE_KEYS_H__
#define __VCONF_INTERNAL_DESKTOP_MODE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-desktop-mode-keys.h
 * @defgroup    vconf_internal_desktop_mode_key Definitions of internal shared Keys for Desktop mode
 * @ingroup     vconf_internal_key
 * @author      prabakaran.s@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Desktop mode \n
 */

/* ========================== Desktop mode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_desktop_mode_key
 * @{
 * @brief Desktop mode Keys & Values\n
 *        Maintainer : prabakaran.s@samsung.com
 */

/**
 * @brief it stands for desktop mode enabled in status by int value.
 *
 * 0 : No \n
 * 1 : Yes \n
 */
#define VCONFKEY_DESKTOP_MODE_ENABLED_STATUS	"db/desktop_mode/desktop_mode_status"
/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DESKTOP_MODE_KEYS_H__ */

