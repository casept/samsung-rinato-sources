/*
 * vconf-internal-boot-animation-keys
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

#ifndef __VCONF_INTERNAL_BOOT_ANIMATION_KEYS_H__
#define __VCONF_INTERNAL_BOOT_ANIMATION_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-boot-animation-keys.h
 * @defgroup    vconf_internal_boot-animation-key Definitions of internal shared Keys for boot_animation
 * @ingroup     vconf_internal_key
 * @author      Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, youngsub Ko <ys4610.ko@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for boot_animation \n
 */

/* ========================== boot_animation Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_boot_animation_key
 * @{
 * @brief boot_animation Keys & Values\n
 *        Maintainer : Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
 */

/**
 * @brief whether boot animation is finished
 *
 * type : int
*/
#define VCONFKEY_BOOT_ANIMATION_FINISHED	"memory/boot_animation/finished"

/**
 * @brief trigger to restart boot animation
 *
 * type : string
*/
#define VCONFKEY_BOOT_ANIMATION_RESTART		"memory/boot_animation/restart"

#endif	/* __VCONF_INTERNAL_BOOT_ANIMATION_KEYS_H__ */
