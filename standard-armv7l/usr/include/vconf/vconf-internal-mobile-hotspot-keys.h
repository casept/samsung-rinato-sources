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

#ifndef __VCONF_INTERNAL_MOBILE_HOTSPOT_KEYS_H__
#define __VCONF_INTERNAL_MOBILE_HOTSPOT_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-mobile-hotspot-keys.h
 * @defgroup    vconf_internal_mobile_hotspot_key Definitions of internal shared Keys for mobile-hotspot
 * @ingroup     vconf_internal_key
 * @author      injun.yang@samsung.com, sy39.ju@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for mobile-hotspot \n
 */

/* ========================== Mobile-hotspot Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_mobile_hotspot_key
 * @{
 * @brief Mobile-hotspot Keys & Values\n
 *        Maintainer : injun.yang@samsung.com, sy39.ju@samsung.com
 *        Used module : wifi-efl-ug, wifi-quick-app, setting, ug-kies-via-wifi, usb-setting-app, data-router
 */

/**
 * @brief Tethering mode
 *
 * 0x00 : None \n
 * 0x01 : WiFi \n
 * 0x02 : USB \n
 * 0x04 : Bluetooth \n
 * 0x08 : WiFi AP \n
 */
#define VCONFKEY_MOBILE_HOTSPOT_MODE "memory/mobile_hotspot/mode"
enum {
	/** None */
	VCONFKEY_MOBILE_HOTSPOT_MODE_NONE = 0x00,
	/** WiFi */
	VCONFKEY_MOBILE_HOTSPOT_MODE_WIFI = 0x01,
	/** USB */
	VCONFKEY_MOBILE_HOTSPOT_MODE_USB = 0x02,
	/** Bluetooth */
	VCONFKEY_MOBILE_HOTSPOT_MODE_BT = 0x04,
	/** WiFi AP */
	VCONFKEY_MOBILE_HOTSPOT_MODE_WIFI_AP = 0x08
};

/**
 * @brief The number of connected device
 *
 * Value : the number of connected device to hotspot
 */
#define VCONFKEY_MOBILE_HOTSPOT_CONNECTED_DEVICE "memory/mobile_hotspot/connected_device"

/**
 * @brief The status of Security mode for Wi-Fi tethering / AP
 *
 * 0 : Disabled \n
 * 1 : Enabled \n
 */
#define VCONFKEY_MOBILE_HOTSPOT_SECURITY "db/mobile_hotspot/security"
enum {
 /** Disabled */
 VCONFKEY_MOBILE_AP_SECURITY_OFF = 0x00,
 /** Enabled */
 VCONFKEY_MOBILE_AP_SECURITY_ON
};

/**
 * @brief The status of hide mode for Wi-Fi tethering / AP
 *
 * 0 : Disabled \n
 * 1 : Enabled \n
 */
#define VCONFKEY_MOBILE_HOTSPOT_HIDE "db/mobile_hotspot/hide"
enum {
 /** Disabled */
 VCONFKEY_MOBILE_AP_HIDE_OFF = 0x00,
 /** Enabled */
 VCONFKEY_MOBILE_AP_HIDE_ON
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MOBILE_HOTSPOT_KEYS_H__ */

