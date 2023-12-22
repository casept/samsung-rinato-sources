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

#ifndef __VCONF_INTERNAL_KIES_VIA_WIFI_KEYS_H__
#define __VCONF_INTERNAL_KIES_VIA_WIFI_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-kies-via-wifi-keys.h
 * @defgroup    vconf_internal_kies_via_wifi_key Definitions of internal shared Keys for Kies via WiFi
 * @ingroup     vconf_internal_key
 * @author      injun.yang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Kies via WiFi \n
 */

/* ========================== Kies via WiFi Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_kies_via_wifi_key
 * @{
 * @brief Kies via WiFi Keys & Values\n
 *        Maintainer : injun.yang@samsung.com
 */


/**
 * @brief Kies via WiFi auto connection status
 *
 * VCONFKEY_KIES_VIA_WIFI_AUTO_CONNECTION_OFF : Disabled \n
 * VCONFKEY_KIES_VIA_WIFI_AUTO_CONNECTION_ON : Enabled \n
 */
#define VCONFKEY_KIES_VIA_WIFI_AUTO_CONNECTION_STATUS "db/kies-via-wifi/auto-connection/status"
enum {
 VCONFKEY_KIES_VIA_WIFI_AUTO_CONNECTION_OFF = 0,
 VCONFKEY_KIES_VIA_WIFI_AUTO_CONNECTION_ON
};


/**
 * @brief The name of connected device
 *
 * Value : the name of connected device to Kies
 */
#define VCONFKEY_KIES_VIA_WIFI_CONNECTED_DEVICE_NAME "memory/private/ug-kies-via-wifi/connected_name"


/**
 * @brief The uuid of connected device
 *
 * Value : the uuid of connected device to Kies
 */
#define VCONFKEY_KIES_VIA_WIFI_CONNECTED_DEVICE_UUID "memory/private/ug-kies-via-wifi/connected_udn"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_KIES_VIA_WIFI_KEYS_H__ */

