/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Gopal Kumar <gopal.kumar@samsung.com>
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

#ifndef __VCONF_INTERNAL_RCS_KEYS_H__
#define __VCONF_INTERNAL_RCS_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-rcs-keys.h
 * @defgroup    vconf_internal_rcs_key Definitions of internal shared Keys for RCS
 * @ingroup     vconf_internal_key
 * @author      gopal.kumar@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for rcs \n
 */

/* ========================== RCS Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_msg_key
 * @{
 * @brief RCS Keys & Values\n
 *        Maintainer : gopal.kumar@samsung.com
 */

#define VCONFKEY_RCS_MEMORY_PREFIX      "memory/rcs"
#define VCONFKEY_RCS_DB_PREFIX          "db/rcs"
#define VCONFKEY_RCS_IM_DB_PREFIX       "db/rcs/im"
#define VCONFKEY_RCS_BADGE_PREFIX       "db/badge"
#define VCONFKEY_RCS_SETTING_DB_PREFIX  "db/rcs/setting"
/**
 * @brief warning size for File Transfer. It is integer value in Mega Byte.
 *
 */
#define VCONFKEY_RCS_FT_WARNING_SIZE    VCONFKEY_RCS_IM_DB_PREFIX"/ft_warning_size"

/**
 * @brief My status to be communicated to other end as though presence information.
 *
 */
#define VCONFKEY_RCS_MY_STATUS  VCONFKEY_RCS_IM_DB_PREFIX"/profile_status"

/**
 * @brief My Display name to be communicated to other end as though presence information.
 *
 */
#define VCONFKEY_RCS_MY_DISPLAY_NAME    VCONFKEY_RCS_IM_DB_PREFIX"/profile_name"

/**
 * @brief last name of User to be communicated to other end as though presence information.
 *
 */
#define VCONFKEY_RCS_MY_DISPLAY_LAST_NAME   VCONFKEY_RCS_IM_DB_PREFIX"/last_name"

/**
 * @brief My image to be communicated to other end as though presence information.
 *
 */
#define VCONFKEY_RCS_MY_IMAGE   VCONFKEY_RCS_IM_DB_PREFIX"/mycontactimage"

/**
 * @brief Auto save feature to be enabled or not
 *
 * 1 : auto save feature on \n
 * 0 : auto save feature off \n
 */
#define VCONFKEY_RCS_MESSAGE_AUTO_SAVE  VCONFKEY_RCS_IM_DB_PREFIX"/message_autosave_status"

/**
 * @brief indicate the selected bubble type.
 *
 * bubble_01 : Bubble Type 1 \n
 * bubble_02 : Bubble Type 2 \n
 * bubble_03 : Bubble Type 3 \n
 * bubble_04 : Bubble Type 4 \n
 * bubble_05 : Bubble Type 5 \n
 * bubble_06 : Bubble Type 6 \n
 */
#define VCONFKEY_RCS_SELECTED_BUBBLE_TYPE_READ  VCONFKEY_RCS_IM_DB_PREFIX"/readmsgbubble"
#define VCONFKEY_RCS_SELECTED_BUBBLE_TYPE_SENT  VCONFKEY_RCS_IM_DB_PREFIX"/sentmsgbubble"

/**
 * @brief string containing the Font size of each bubble
 *
 * extralarge : Extra large font size \n
 * large      : large font size
 * medium     : medium font size
 * small      : small font size
 * extrasmall : Extra small font size
 *
 */
#define VCONFKEY_RCS_BUBBLE_FONT_SIZE   VCONFKEY_RCS_IM_DB_PREFIX"/text_font_size"

/**
 * @brief integer value for background image to be used
 *
 * 0 - Dynamic image value
 * 1-9 predefined image
 */
#define VCONFKEY_RCS_BACKGROUND_IMAGE_INDEX VCONFKEY_RCS_IM_DB_PREFIX"/background_image_index"


/**
 * @brief enableing push Pop-up feature
 *
 * 1 : enable \n
 * 0 : disable \n
 */
#define VCONFKEY_RCS_POP_UP_NOFICATION_STATUS   VCONFKEY_RCS_IM_DB_PREFIX"/popup_notification"

/**
 * @brief notification data to be shown in UI
 *
 */
#define VCONFKEY_RCS_POP_UP_NOFICATION_DATA VCONFKEY_RCS_IM_DB_PREFIX"/popup_notification_data"

/**
 * @brief string containing value of alert type to be used
 *
 */
#define VCONFKEY_RCS_ALERT_TYPE VCONFKEY_RCS_IM_DB_PREFIX"/alert_type"

/**
 * @brief to set whether user request for display status or not
 *
 * 1 : enable \n
 * 0 : disable \n
 */
#define VCONFKEY_RCS_SEND_DISPLAY_STATUS    VCONFKEY_RCS_IM_DB_PREFIX"/send_display_status"

/**
 * @brief Ring Tone value
 *
 */
#define VCONFKEY_RCS_RINGTONE_VALUE VCONFKEY_RCS_IM_DB_PREFIX"/notification_ringtone"

/**
 * @brief File Max size
 *
 */
#define VCONFKEY_RCS_FILE_MAX_SIZE  VCONFKEY_RCS_IM_DB_PREFIX"/ft_max_size"

/**
 * @brief Free Memory Size
 *
 */
#define VCONFKEY_RCS_FREE_MEMORY_SIZE   VCONFKEY_RCS_IM_DB_PREFIX"/free_memory"

/**
 * @brief RCS  total counts of  RCS accounts
 *
 */
#define VCONFKEY_RCS_ACCOUNTS_COUNT VCONFKEY_RCS_MEMORY_PREFIX"/accounts_count"

/**
 * @brief RCS last sync of contact version
 *
 */
#define VCONFKEY_RCS_LAST_SYNC_CONTACT_VER  VCONFKEY_RCS_DB_PREFIX"/last-sync-contact-ver"

/**
 * @brief Home network value
 *
 */
#define VCONFKEY_RCS_SETTING_HOME_NETWORK_STATUS    VCONFKEY_RCS_SETTING_DB_PREFIX"/home_network"

/**
 * @brief Roaming network value
 *
 */
#define VCONFKEY_RCS_SETTING_ROAMING_NETWORK_STATUS VCONFKEY_RCS_SETTING_DB_PREFIX"/roaming_network"

/**
 * @brief Enable/Disable Large File Transfer
 *
 */
#define VCONFKEY_RCS_SETTING_LARGE_FILE_TRANSFER    VCONFKEY_RCS_SETTING_DB_PREFIX"/large_file_transfer"

/**
 * @brief Enable/Disable RCS Feature
 *
 */
#define VCONFKEY_RCS_SETTING_RCS_ENABLED    VCONFKEY_RCS_SETTING_DB_PREFIX"/rcs_enabled"

/**
 * @brief RCS Config mode 
 *
 */
#define VCONFKEY_RCS_SETTING_CONFIG_MODE    VCONFKEY_RCS_SETTING_DB_PREFIX"/config_mode"

/**
 * @brief RCS URI Scheme 
 *
 */
#define VCONFKEY_RCS_SETTING_URI_SCHEME VCONFKEY_RCS_SETTING_DB_PREFIX"/uri-scheme"

/**
 * @brief RCS proxy port number 
 *
 */
#define VCONFKEY_RCS_SETTING_PROXY_PORT VCONFKEY_RCS_SETTING_DB_PREFIX"/proxy-port"

/**
 * @brief RCS Apn 
 *
 */
#define VCONFKEY_RCS_SETTING_APN    VCONFKEY_RCS_SETTING_DB_PREFIX"/apn"

/**
 * @brief Advance Setting Option 
 *
 */
#define VCONFKEY_RCS_SETTING_SHOW_ADVANCE_SETTING   VCONFKEY_RCS_SETTING_DB_PREFIX"/show_advance_setting"

/**
 * @brief RCS badge number
 *
 */
#define VCONFKEY_RCS_BADGE  VCONFKEY_RCS_BADGE_PREFIX"/com.samsung.rcs-im" 

/**
* @brief RCS Transport Type 
 *
 */
#define VCONFKEY_RCS_TRANSPORT_TYPE         VCONFKEY_RCS_MEMORY_PREFIX"/transport_type"

/**
 * @}
 */

#endif  /* __VCONF_INTERNAL_RCS_KEYS_H__ */

