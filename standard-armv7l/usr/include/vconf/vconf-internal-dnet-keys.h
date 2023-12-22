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

#ifndef __VCONF_INTERNAL_DNET_KEYS_H__
#define __VCONF_INTERNAL_DNET_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-dnet-keys.h
 * @defgroup    vconf_internal_dnet_key Definitions of internal shared Keys for data-network
 * @ingroup     vconf_internal_key
 * @author      s.seo@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for data-network \n
 */

/* ========================== Data network Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_dnet_key
 * @{
 * @brief Data network Keys & Values\n
 *        Maintainer : s.seo@samsung.com
 */


/**
 * @brief network state of both Cellular and Wi-Fi
 *
 * 0: Idle
 * 1: Cellular connected
 * 2: Wi-Fi connected
 * 3: Ethernet connected
 * 4: Bluetooth connected
 */
#define VCONFKEY_NETWORK_STATUS                     "memory/dnet/status"
enum {
	/** Idle */
	VCONFKEY_NETWORK_OFF = 0,
	/** Cellular connected */
	VCONFKEY_NETWORK_CELLULAR,
	/** Wi-Fi connected */
	VCONFKEY_NETWORK_WIFI,
	/** Ethernet connected */
	VCONFKEY_NETWORK_ETHERNET,
	/** Bluetooth connected */
	VCONFKEY_NETWORK_BLUETOOTH
};

/**
 * @brief network configuration changed such as Cellular and Wi-Fi
 *
 * 0: Not connected
 * 1: Connected and IP or Proxy information has been changed
 */
#define VCONFKEY_NETWORK_CONFIGURATION_CHANGE_IND   "memory/dnet/network_config"

/**
 * @brief Active IP address
 *
 */
#define VCONFKEY_NETWORK_IP                         "memory/dnet/ip"

/**
 * @brief Active Proxy address
 *
 */
#define VCONFKEY_NETWORK_PROXY                      "memory/dnet/proxy"

/**
 * @brief Detail Wi-Fi state
 *
 * 0: power off
 * 1: power on
 * 2: connected
 * 3: patcket transmitted
 */
#define VCONFKEY_NETWORK_WIFI_STATE                 "memory/dnet/wifi"
enum {
	/** power off */
	VCONFKEY_NETWORK_WIFI_OFF,
	/** power on */
	VCONFKEY_NETWORK_WIFI_NOT_CONNECTED,
	/** connected */
	VCONFKEY_NETWORK_WIFI_CONNECTED
};

/**
 * @brief Cellular state
 *
 * 0: On
 * 1: 3G option off
 * 2: Roaming off
 * 3: Flight mode enabled
 * 4: No service
 * 5: restricted service
 */
#define VCONFKEY_NETWORK_CELLULAR_STATE             "memory/dnet/cellular"
enum {
	/** On */
	VCONFKEY_NETWORK_CELLULAR_ON,
	/** 3G option off */
	VCONFKEY_NETWORK_CELLULAR_3G_OPTION_OFF,
	/** Roaming off */
	VCONFKEY_NETWORK_CELLULAR_ROAMING_OFF,
	/** Flight mode enabled */
	VCONFKEY_NETWORK_CELLULAR_FLIGHT_MODE,
	/** No service */
	VCONFKEY_NETWORK_CELLULAR_NO_SERVICE,
	/** Restricted service */
	VCONFKEY_NETWORK_CELLULAR_RESTRICTED_SERVICE
};

/**
 * @brief Data indication of Cellular network
 *
 * 0: not connected
 * 1: connected
 * 2: secure connected
 * 3: patcket transmitted
 */
#define VCONFKEY_DNET_STATE                         "memory/dnet/state"
enum {
	/** not connected */
	VCONFKEY_DNET_OFF = 0x00,
	/** connected */
	VCONFKEY_DNET_NORMAL_CONNECTED,
	/** secure connected */
	VCONFKEY_DNET_SECURE_CONNECTED,
	/** patcket transmitted */
	VCONFKEY_DNET_TRANSFER,
	VCONFKEY_DNET_STATE_MAX
};

/**
 * @brief Data indication of Cellular network of SIM2
 *
 * Enum values of this key are equal to VCONFKEY_DNET_STATE
 */
#define VCONFKEY_DNET_STATE2 "memory/dnet/state2"

/**
 * @brief Data indication of Cellular network of SIM3
 *
 * Enum values of this key are equal to VCONFKEY_DNET_STATE
 */
#define VCONFKEY_DNET_STATE3 "memory/dnet/state3"

/**
 * @brief packet indication of Cellular network
 *
 * 0: NO Packet
 * 1: RX Packet only
 * 2: TX Packet only
 * 3: RXTX Packet only
 */
#define VCONFKEY_PACKET_STATE                         "memory/dnet/packet_state"
enum {
	/** NO Packet */
	VCONFKEY_PACKET_NORMAL = 0x00,
	/** RX Packet only */
	VCONFKEY_PACKET_RX,
	/** TX Packet only */
	VCONFKEY_PACKET_TX,
	/** RXTX Packet only */
	VCONFKEY_PACKET_RXTX,
	VCONFKEY_PACKET_MAX
};

/**
 * @brief Packet service modem dormant state
 *
 * 0: In dormant state (data inactive)
 * 1: Not in dormant state (active)
 */
#define VCONFKEY_DNET_PS_DORMANT_STATE				"memory/dnet/dormant_state"
enum {
	VCONFKEY_DNET_PS_DORMANT_STATE_ACTIVE = 0x00, /* Idle     */
	VCONFKEY_DNET_PS_DORMANT_STATE_INACTIVE       /* Not idle */

};
/**
 * @brief Total bytes received by Cellular device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_TOTAL_RCV     "db/dnet/statistics/cellular/totalrcv"

/**
 * @brief Total bytes received by Cellular device of SIM2
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_TOTAL_RCV2 "db/dnet/statistics/cellular/totalrcv2"

/**
 * @brief Total bytes received by Cellular device of SIM3
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_TOTAL_RCV3 "db/dnet/statistics/cellular/totalrcv3"

/**
 * @brief Total bytes sent by Cellular device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_TOTAL_SNT     "db/dnet/statistics/cellular/totalsnt"

/**
 * @brief Total bytes sent by Cellular device of SIM2
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_TOTAL_SNT2 "db/dnet/statistics/cellular/totalsnt2"

/**
 * @brief Total bytes sent by Cellular device of SIM3
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_TOTAL_SNT3 "db/dnet/statistics/cellular/totalsnt3"

/**
 * @brief Total bytes last received by Cellular device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_LAST_RCV      "db/dnet/statistics/cellular/lastrcv"

/**
 * @brief Total bytes last received by Cellular device of SIM2
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_LAST_RCV2 "db/dnet/statistics/cellular/lastrcv2"

/**
 * @brief Total bytes last received by Cellular device of SIM3
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_LAST_RCV3 "db/dnet/statistics/cellular/lastrcv3"

/**
 * @brief Total bytes last sent by Cellular device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_LAST_SNT      "db/dnet/statistics/cellular/lastsnt"

/**
 * @brief Total bytes last sent by Cellular device of SIM2
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_LAST_SNT2 "db/dnet/statistics/cellular/lastsnt2"

/**
 * @brief Total bytes last sent by Cellular device of SIM3
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_CELLULAR_PKT_LAST_SNT3 "db/dnet/statistics/cellular/lastsnt3"

/**
 * @brief Total bytes received by Wi-Fi device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_WIFI_PKT_TOTAL_RCV         "db/dnet/statistics/wifi/totalrcv"

/**
 * @brief Total bytes sent by Wi-Fi device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_WIFI_PKT_TOTAL_SNT         "db/dnet/statistics/wifi/totalsnt"

/**
 * @brief Total bytes last received by Wi-Fi device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_WIFI_PKT_LAST_RCV          "db/dnet/statistics/wifi/lastrcv"

/**
 * @brief Total bytes last sent by Wi-Fi device
 *
 * Value : Integer of bytes
 */
#define VCONFKEY_NETWORK_WIFI_PKT_LAST_SNT          "db/dnet/statistics/wifi/lastsnt"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DNET_KEYS_H__ */

