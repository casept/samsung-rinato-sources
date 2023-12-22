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

#ifndef __VCONF_INTERNAL_MSG_KEYS_H__
#define __VCONF_INTERNAL_MSG_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-msg-keys.h
 * @defgroup    vconf_internal_msg_key Definitions of internal shared Keys for message
 * @ingroup     vconf_internal_key
 * @author      jyjeong@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for message \n
 */

/* ========================== Message Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_msg_key
 * @{
 * @brief Message Keys & Values\n
 *        Maintainer : jyjeong@samsung.com
 */

#define VCONFKEY_MSG_MEMORY_PREFIX          "memory/msg"
#define VCONFKEY_MSG_DB_PREFIX              "db/msg"


/**
 * @brief ready status of msg service daemon
 *
 * True : ready \n
 * False : not ready \n
 */
#define VCONFKEY_MSG_SERVER_READY		VCONFKEY_MSG_MEMORY_PREFIX"/ready"

/**
 * @brief unread SMS count for lock-screen & message icon badge
 *
 * n : unread SMS count (>=0)
 */
#define VCONFKEY_MESSAGE_RECV_SMS_STATE		VCONFKEY_MSG_DB_PREFIX"/recv_sms"

/**
 * @brief unread MMS count for lock-screen & message icon badge
 *
 * n : unread MMS count (>=0)
 */
#define VCONFKEY_MESSAGE_RECV_MMS_STATE		VCONFKEY_MSG_DB_PREFIX"/recv_mms"

/**
 * @brief Indicates the network mode (CS/PS) to send SMS
 *
 * 1 : PS only \n
 * 2 : CS only \n
 * 3 : PS preferred \n
 * 4 : CS preferred \n
 */
#define VCONFKEY_MESSAGE_NETWORK_MODE		VCONFKEY_MSG_DB_PREFIX"/network_mode"
enum {
	VCONFKEY_MESSAGE_NETWORK_PS_ONLY = 0x01,
	VCONFKEY_MESSAGE_NETWORK_CS_ONLY = 0x02,
	VCONFKEY_MESSAGE_NETWORK_PS_PREFER = 0x03,
	VCONFKEY_MESSAGE_NETWORK_CS_PREFER = 0x04
};

/**
 * @brief SOS sending option of message setting
 *
 * True : SOS sending option is on \n
 * False : SOS sending option is off \n
 */
#define VCONFKEY_MESSAGE_SOS_SEND_OPTION		VCONFKEY_MSG_DB_PREFIX"/sos_send_option"

/**
 * @brief Indicates the SOS standby state
 *
 * 0 : SOS idle state \n
 * 1 : SOS mode is invoked \n
 * 2 : SOS standby state (succeed in SOS message sending) \n
 */
#define VCONFKEY_MESSAGE_SOS_STATE		VCONFKEY_MSG_MEMORY_PREFIX"/sos_state"
enum {
        VCONFKEY_MESSAGE_SOS_IDLE = 0x00,
        VCONFKEY_MESSAGE_SOS_INVOKED = 0x01,
        VCONFKEY_MESSAGE_SOS_STANDBY = 0x02
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MSG_KEYS_H__ */

