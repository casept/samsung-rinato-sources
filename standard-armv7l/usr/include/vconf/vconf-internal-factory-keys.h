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

#ifndef __VCONF_INTERNAL_FACTORY_KEYS_H__
#define __VCONF_INTERNAL_FACTORY_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-factory-keys.h
 * @defgroup    vconf_internal_factory_key Definitions of internal shared Keys for FACTORY
 * @ingroup     vconf_internal_key
 * @author      Jisung Ahn <jcastle.ahn@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for FACTORY \n
 */

/* ========================== FACTORY Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_factory_key
 * @{
 * @brief FACTORY Keys & Values\n
 *        Maintainer : Jisung Ahn <jcastle.ahn@samsung.com>
 */

#define VCONFKEY_FACTORY_PREFIX "memory/factory"

/**
 * @brief call connected at 15 test (write:call read:fta)
 *
 * 0 : Disconnected \n
 * 1 : Connected \n
 */
#define VCONFKEY_FACTORY_CALL_CONNECT_STATE VCONFKEY_FACTORY_PREFIX"/call_connected"
enum
{
	VCONFKEY_FACTORY_CALL_DISCONNECTED = 0x00,
	VCONFKEY_FACTORY_CALL_CONNECTED
};

/**
 * @brief factory idle info state (write:factory-agent read:cluster-home)
 *
 * 0 : not_ready \n
 * 1 : ready \n
 */
#define VCONFKEY_FACTORY_IDLE_INFO_STATE VCONFKEY_FACTORY_PREFIX"/idle_info"
enum
{
	VCONFKEY_FACTORY_IDLE_INFO_NOT_READY = 0x00,
	VCONFKEY_FACTORY_IDLE_INFO_READY
};

/**
 * @brief factory idle info state (write:factory-agent read:cluster-home)
 *
 * 0 : MULFUNCF_LOOPBACK_START \n
 * 1 : MULFUNCF_LOOPBACK_STOP \n
 * 2 : MULFUNCF_RCV200_START \n
 * 3 : MULFUNCF_RCV200_STOP \n
 * 4 : MULFUNCF_IRLED_START \n
 * 5 : MULFUNCF_IRLED_STOP \n
 * 6 : MULFUNCF_NFC_SEARCHING_START \n
 * 7 : MULFUNCF_NFC_SEARCHING_STOP \n
 * 8 : MULFUNCF_NFC_BATTERY_SEARCHING_START \n
 * 9 : MULFUNCF_NFC_BATTERY_SEARCHING_STOP \n
 * A : MULFUNCF_HDMI_START \n
 * B : MULFUNCF_HDMI_STOP \n
 * C : MULFUNCF_OTG_TEST_START \n
 * D : MULFUNCF_OTG_TEST_STOP \n
 */
#define VCONFKEY_FACTORY_MULFUNCF_STATE VCONFKEY_FACTORY_PREFIX"/mulfuncf"
enum
{
	VCONFKEY_FACTORY_MULFUNCF_LOOPBACK_START = 0x00,
	VCONFKEY_FACTORY_MULFUNCF_LOOPBACK_STOP = 0x01,
	VCONFKEY_FACTORY_MULFUNCF_RCV200_START = 0x02,
	VCONFKEY_FACTORY_MULFUNCF_RCV200_STOP = 0x03,
	VCONFKEY_FACTORY_MULFUNCF_IRLED_START = 0x04,
	VCONFKEY_FACTORY_MULFUNCF_IRLED_STOP = 0x05,
	VCONFKEY_FACTORY_MULFUNCF_NFC_SEARCHING_START = 0x06,
	VCONFKEY_FACTORY_MULFUNCF_NFC_SEARCHING_STOP = 0x07,
	VCONFKEY_FACTORY_MULFUNCF_NFC_BATTERY_SEARCHING_START = 0x08,
	VCONFKEY_FACTORY_MULFUNCF_NFC_BATTERY_SEARCHING_STOP = 0x09,
	VCONFKEY_FACTORY_MULFUNCF_HDMI_START = 0x0A,
	VCONFKEY_FACTORY_MULFUNCF_HDMI_STOP = 0x0B,
	VCONFKEY_FACTORY_MULFUNCF_OTG_TEST_START = 0x0C,
	VCONFKEY_FACTORY_MULFUNCF_OTG_TEST_STOP = 0x0D,
	VCONFKEY_FACTORY_MULFUNCF_LOOPBACK = 0x10,
	VCONFKEY_FACTORY_MULFUNCF_RCV200 = 0x11,
	VCONFKEY_FACTORY_MULFUNCF_TSP_TEST = 0x12,
	VCONFKEY_FACTORY_MULFUNCF_KEY_TEST = 0x13,
	VCONFKEY_FACTORY_MULFUNCF_CHARGE_TEST = 0x14,
	VCONFKEY_FACTORY_MULFUNCF_HALL_IC = 0x15,
	VCONFKEY_FACTORY_MULFUNCF_GM_GYRO = 0x16,
	VCONFKEY_FACTORY_MULFUNCF_TSP_HOVERING_TEST = 0x17,
	VCONFKEY_FACTORY_MULFUNCF_ISDBT_TEST = 0x18,
	VCONFKEY_FACTORY_MULFUNCF_RESTART = 0x50,
	VCONFKEY_FACTORY_MULFUNCF_NV_CHANGED = 0x51
};

/**
 * @brief factory app state (15, *#0*#)
 *
 * 0 : not running \n
 * 1 : running \n
 */
#define VCONFKEY_FACTORY_APP_STATE VCONFKEY_FACTORY_PREFIX"/app_state"
enum
{
	VCONFKEY_FACTORY_APP_NOT_RUNNING = 0x00,
	VCONFKEY_FACTORY_APP_RUNNING = 0x01
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_FACTORY_KEYS_H__ */

