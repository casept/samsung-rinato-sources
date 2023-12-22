
/*
 * vconf-internal-keys
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Janghyuk Cha <janghyuk.cha@samsung.com>
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

#ifndef __VCONF_INTERNAL_ISE_KEYS_H__
#define __VCONF_INTERNAL_ISE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-ise-keys.h
 * @defgroup    vconf_internal_ise_key Definitions of internal shared Keys for ISE
 * @ingroup     vconf_internal_key
 * @author      Janghyuk Cha <janghyuk.cha@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for ISE \n
 */

/* ========================== ISE Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_ISE_key
 * @{
 * @brief ISE Keys & Values\n
 *        Maintainer : Janghyuk Cha <janghyuk.cha@samsung.com>
 */

#define VCONFKEY_SWIFTKEY_PREFIX "db/ise/swiftkey"
#define VCONFKEY_IWNN_PREFIX "db/ise/iwnn"


/**
 * @brief japanese hardware keyboard flag - boolean type
 */
#define VCONFKEY_JPN_ISE_HWKEYBOARD_FLAG 		VCONFKEY_IWNN_PREFIX"/hwkeyboard_flag"






/**
 * @brief if help application gets a pause event then increase a value - integer type
 */
#define VCONFKEY_HELP_ONPAUSE_NOTI 			VCONFKEY_SWIFTKEY_PREFIX"/help/onpause_noti"

/**
 * @brief pre-installed languages list - string type
 */
#define VCONFKEY_ISE_KEYBOARD_RESET 		VCONFKEY_SWIFTKEY_PREFIX"/keyboard_reset"

/**
 * @brief special feature list  - string type
 */
#define VCONFKEY_ISE_FEATURE_LIST 		VCONFKEY_SWIFTKEY_PREFIX"/feature_list"


/*----------------------------
 *		LPM PART
 *----------------------------*/

/**
 * @brief pre-installed languages list - string type
 */
#define VCONFKEY_ISE_LPM_PREINSTALLED_LANG 		VCONFKEY_SWIFTKEY_PREFIX"/lpm/preinstalled_lang"

/**
 * @brief downloaded languages list - string type
 */
#define VCONFKEY_ISE_LPM_DOWNLOADED_LANG		VCONFKEY_SWIFTKEY_PREFIX"/lpm/downloaded_lang"

/**
 * @brief selected languages list. - string type
 */
#define VCONFKEY_ISE_LPM_SELECTED_LANGUAGE 	VCONFKEY_SWIFTKEY_PREFIX"/lpm/selected_lang"

/**
 * @brief if lpm menu gets a pause event then increase a value - integer type
 */
#define VCONFKEY_ISE_LPM_ONPAUSE_NOTI 			VCONFKEY_SWIFTKEY_PREFIX"/lpm/onpause_noti"

/**
 * @brief lpm disable app launch popup - boolean type
 */
#define VCONFKEY_ISE_LPM_LAUNCH_POPUP_DISABLE              VCONFKEY_SWIFTKEY_PREFIX"/lpm/disable_launch_popup"
/**
 * @brief lpm disable network message popup - boolean type
 */
#define VCONFKEY_ISE_LPM_NETWORK_POPUP_DISABLE              VCONFKEY_SWIFTKEY_PREFIX"/lpm/disable_network_popup"


/*----------------------------
 *		DLM PART
 *----------------------------*/

/**
 * @brief personalized data menu checkbox - boolean type
 */
#define VCONFKEY_ISE_DLM_USE_ON		 			VCONFKEY_SWIFTKEY_PREFIX"/dlm/use_on"

/**
 * @brief auto replacement to first candidate when the spacebar is clicked - boolean type
 */
#define VCONFKEY_ISE_DLM_AUTO_REPLACEMENT		VCONFKEY_SWIFTKEY_PREFIX"/dlm/auto_replacement"

/**
 * @brief if dlm menu gets a pause event then increase a value - integer type
 */
#define VCONFKEY_ISE_DLM_ONPAUSE_NOTI 			VCONFKEY_SWIFTKEY_PREFIX"/dlm/onpause_noti"

/**
 * @brief install id - string type
 */
#define VCONFKEY_ISE_DLM_INSTALL_ID 			VCONFKEY_SWIFTKEY_PREFIX"/dlm/install_id"

/**
 * @brief for auth - string type
 */
#define VCONFKEY_ISE_DLM_AUTH 			VCONFKEY_SWIFTKEY_PREFIX"/dlm/auth"

/**
 * @brief Store information for dlm clear remote data menu - string type
 */
#define VCONFKEY_ISE_DLM_CLEAR_REMOTE_DATA 			VCONFKEY_SWIFTKEY_PREFIX"/dlm/clear_remote_data"

/**
 * @brief DLM live language on/off - boolean type
 */
#define VCONFKEY_ISE_DLM_LIVE_LANG_ON 				VCONFKEY_SWIFTKEY_PREFIX"/dlm/live_lang_on"

/**
 * @brief time stamp for learn from facebook - string type
 */
#define VCONFKEY_ISE_DLM_TIMESTAMP_FACEBOOK			VCONFKEY_SWIFTKEY_PREFIX"/dlm/time_stamp_facebook"

/**
 * @brief time stamp for learn from gmail - string type
 */
#define VCONFKEY_ISE_DLM_TIMESTAMP_GMAIL			VCONFKEY_SWIFTKEY_PREFIX"/dlm/time_stamp_gmail"

/**
 * @brief time stamp for learn from twitter - string type
 */
#define VCONFKEY_ISE_DLM_TIMESTAMP_TWITTER			VCONFKEY_SWIFTKEY_PREFIX"/dlm/time_stamp_twitter"

/**
 * @brief time stamp for learn from message - string type
 */
#define VCONFKEY_ISE_DLM_TIMESTAMP_MESSAGE			VCONFKEY_SWIFTKEY_PREFIX"/dlm/time_stamp_message"

/**
 * @brief time stamp for learn from contact - string type
 */
#define VCONFKEY_ISE_DLM_TIMESTAMP_CONTACT			VCONFKEY_SWIFTKEY_PREFIX"/dlm/time_stamp_contact"

#endif	/* __VCONF_INTERNAL_ISE_KEYS_H__ */
