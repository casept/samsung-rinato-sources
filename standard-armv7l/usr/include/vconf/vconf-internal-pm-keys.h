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

#ifndef __VCONF_INTERNAL_PM_KEYS_H__
#define __VCONF_INTERNAL_PM_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-pm-keys.h
 * @defgroup    vconf_internal_pm_key Definitions of internal shared Keys for power manager
 * @ingroup     vconf_internal_key
 * @author      jinkun.jang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for power manager \n
 */

/* ========================== Pm Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_pm_key
 * @{
 * @brief Power manager Keys & Values\n
 *        Maintainer : jinkun.jang@samsung.com
 */

/**
 * @brief lcd status
 *
 * 1 : lcd normal \n
 * 2 : lcd dim \n
 * 3 : lcd off \n
 * 4 : suspend \n
 */
#define VCONFKEY_PM_STATE                           "memory/pm/state"
enum {
	VCONFKEY_PM_STATE_NORMAL = 1,
	VCONFKEY_PM_STATE_LCDDIM,
	VCONFKEY_PM_STATE_LCDOFF,
	VCONFKEY_PM_STATE_SLEEP
};

/**
 * @brief custom brightness
 *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_PM_CUSTOM_BRIGHTNESS_STATUS               "memory/pm/custom_brightness_status"
enum {
	VCONFKEY_PM_CUSTOM_BRIGHTNESS_OFF = 0,
	VCONFKEY_PM_CUSTOM_BRIGHTNESS_ON
};

/**
 * @brief smart stay status
 *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_PM_SMARTSTAY_STATUS               "db/pm/smartstay_status"
enum {
	VCONFKEY_PM_SMARTSTAY_STATUS_OFF = 0,
	VCONFKEY_PM_SMARTSTAY_STATUS_ON
};

/**
 * @brief smart stay camera on status
 *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_PM_CAMERA_STATUS                     "memory/pm/camera_status"
enum {
	VCONFKEY_PM_CAMERA_OFF = 0,
	VCONFKEY_PM_CAMERA_ON
};

/**
 * @brief battery time to empty
 *
 * seconds
 */
#define VCONFKEY_PM_BATTERY_TIMETOEMPTY               "memory/pm/battery_timetoempty"

/**
 * @brief battery time to full
 *
 * seconds
 */
#define VCONFKEY_PM_BATTERY_TIMETOFULL                "memory/pm/battery_timetofull"

/**
* @brief brightness changed in low battery
*
* 0 : false
* 1 : true
*/
#define VCONFKEY_PM_BRIGHTNESS_CHANGED_IN_LPM         "memory/pm/brt_changed_lpm"

/**
 * @brief lcd off source
 *
 * 1 : by power key \n
 * 2 : by timeout \n
 */
#define VCONFKEY_PM_LCDOFF_SOURCE                     "memory/pm/lcdoff_source"
enum {
	VCONFKEY_PM_LCDOFF_BY_POWERKEY = 1,
	VCONFKEY_PM_LCDOFF_BY_TIMEOUT
};

/**
 * @brief key ignore setting
 *
 * 1 : key ignore true \n
 * 0 : key ignore false\n
 *
 * bit position
 * 1 : lock \n
 * 2 : starter \n
 * 4 : extra1 \n
 * 8 : extra2 \n
 */
#define VCONFKEY_PM_KEY_IGNORE                        "memory/pm/key_ignore"
enum {
	VCONFKEY_PM_KEY_LOCK = 0x01,
	VCONFKEY_PM_KEY_STARTER = 0x02,
	VCONFKEY_PM_KEY_EXTRA1 = 0x04,
	VCONFKEY_PM_KEY_EXTRA2 = 0x08
};

/**
* @brief brightness value
*
* brightness level : 1~100
*
*/
#define VCONFKEY_PM_CURRENT_BRIGHTNESS                "memory/pm/current_brt"

/**
 * @brief SIP(virtual keypad) status
 *
 * 0 : sip off
 * 1 : sip on
 */
#define VCONFKEY_PM_SIP_STATUS                        "memory/pm/sip_status"
enum {
	VCONFKEY_PM_SIP_OFF = 0,
	VCONFKEY_PM_SIP_ON
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_PM_KEYS_H__ */

