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

#ifndef __VCONF_INTERNAL_IDLE_SCREEN_KEYS_H__
#define __VCONF_INTERNAL_IDLE_SCREEN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-idle-screen-keys.h
 * @defgroup    vconf_internal_idle_screen_key Definitions of internal shared Keys for idle screen
 * @ingroup     vconf_internal_key
 * @author      jinny.yoon@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for idle screen \n
 */

/* ========================== Idle screen Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_idle_screen_key
 * @{
 * @brief Idle screen Keys & Values\n
 *        Maintainer : jinny.yoon@samsung.com
 */

/**
 * @brief is Idle-screen the top window
 *
 * type : int
 * 0 : idle-screen is not the top window.
 * 1 : idle-screen is the top window.
 */
#define VCONFKEY_IDLE_SCREEN_TOP "memory/idle-screen/top"
enum {
	/** idle-screen is not the top window */
	VCONFKEY_IDLE_SCREEN_TOP_FALSE = 0x00,
	/** idle-screen is the top window */
	VCONFKEY_IDLE_SCREEN_TOP_TRUE
};

/**
 * @brief is Idle-screen launched now?
 *
 * type : int
 * 0 : idle-screen is not launched.
 * 1 : idle-screen has launched.
 */

#define VCONFKEY_IDLE_SCREEN_LAUNCHED "memory/idle-screen/is_idle_screen_launched"
enum {
	/** idle-screen is not launched. */
	VCONFKEY_IDLE_SCREEN_LAUNCHED_FALSE = 0x00,
	/** idle-screen has launched. */
	VCONFKEY_IDLE_SCREEN_LAUNCHED_TRUE
};

/**
 * @brief Several apps check this key in the booting time to be sure which safemode is on or not.
 *
 * type : bool
 * VCONFKEY_IDLE_SCREEN_SAFEMODE_FALSE : it's on normal mode.
 * VCONFKEY_IDLE_SCREEN_SAFEMODE_TRUE : it's on safe mode.
 */

#define VCONFKEY_IDLE_SCREEN_SAFEMODE "memory/idle-screen/safemode"
enum {
	/** safemode is off */
	VCONFKEY_IDLE_SCREEN_SAFEMODE_FALSE = 0x00,
	/** safemode is on */
	VCONFKEY_IDLE_SCREEN_SAFEMODE_TRUE
};

/**
 * @brief this key has a focused appid (except App-tray)
 *
 * type : string
 */

#define VCONFKEY_IDLE_SCREEN_FOCUSED_PACKAGE "memory/idle-screen/focused_package"

/**
 * @brief is Idle-screen top now?
 *
 * type : bool
 * true : idle-screen is top.
 * false : idle-screen is not top.
 */

#define VCONFKEY_IDLE_SCREEN_IS_TOP "VCONF_KEY_IDLE_SCREEN_IS_TOP,"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_IDLE_SCREEN_KEYS_H__ */

