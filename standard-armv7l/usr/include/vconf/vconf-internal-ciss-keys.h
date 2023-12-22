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

#ifndef __VCONF_INTERNAL_CISS_KEYS_H__
#define __VCONF_INTERNAL_CISS_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-ciss-keys.h
 * @defgroup    vconf_internal_ciss_key Definitions of internal shared Keys for CISS app
 * @ingroup     vconf_internal_key
 * @author      js49.lee@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for CISS App \n
 */

/* ========================== CISS UI Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_ciss_key
 * @{
 * @brief CISS UI Keys & Values\n
 *        Maintainer : js49.lee@samsung.com
 */

#define VCONFKEY_CISSAPPL_PREFIX                         "db/ciss/"

/**
 * @brief Show my number status
 *
 * 0 : By network \n
 * 1 : Show \n
 * 2 : Hide \n
 */
#define VCONFKEY_CISSAPPL_SHOW_MY_NUMBER_INT             VCONFKEY_CISSAPPL_PREFIX"/show_my_number"

/**
 * @brief Incoming call auto rejection status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_AUTO_REJECT_INT               VCONFKEY_CISSAPPL_PREFIX"/auto_reject"

/**
 * @brief Incoming call auto rejection status
 *
 * 0 : Off \n
 * 1 : On \n
 */
/* 
 * to prevent build error. 
*/
#define VCONFKEY_CISSAPPL_AUTO_REJECT_BOOL               VCONFKEY_CISSAPPL_PREFIX"/auto_reject"

/**
 * @brief Auto rejection status regarding incoming calls from unknown numbers
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_AUTO_REJECT_UNKNOWN_BOOL       VCONFKEY_CISSAPPL_PREFIX"/auto_reject_unknown"

/**
 * @brief Prefix dial status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_BOOL               VCONFKEY_CISSAPPL_PREFIX"/prefix_dial"

/**
 * @brief The total number of the prefix dial numbers
 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_INT                VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_cnt"

/** @brief Prefix dial number 1 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_NUM1_STR           VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_num1"

/** @brief Prefix dial number 2 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_NUM2_STR           VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_num2"

/** @brief Prefix dial number 3 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_NUM3_STR           VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_num3"

/** @brief Prefix dial number 4 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_NUM4_STR           VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_num4"

/** @brief Prefix dial number 5 */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_NUM5_STR           VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_num5"

/** @brief The total number of the predefined reject messages */
#define VCONFKEY_CISSAPPL_REJECT_CALL_MSG_INT            VCONFKEY_CISSAPPL_PREFIX"/reject_call_message_cnt"

/** @brief Predefined reject message 1 */
#define VCONFKEY_CISSAPPL_USER_CREATE_MSG1_STR           VCONFKEY_CISSAPPL_PREFIX"/user_create_message1"

/** @brief Predefined reject message 2 */
#define VCONFKEY_CISSAPPL_USER_CREATE_MSG2_STR           VCONFKEY_CISSAPPL_PREFIX"/user_create_message2"

/** @brief Predefined reject message 3 */
#define VCONFKEY_CISSAPPL_USER_CREATE_MSG3_STR           VCONFKEY_CISSAPPL_PREFIX"/user_create_message3"

/** @brief Predefined reject message 4 */
#define VCONFKEY_CISSAPPL_USER_CREATE_MSG4_STR           VCONFKEY_CISSAPPL_PREFIX"/user_create_message4"

/** @brief Predefined reject message 5 */
#define VCONFKEY_CISSAPPL_USER_CREATE_MSG5_STR           VCONFKEY_CISSAPPL_PREFIX"/user_create_message5"

/** @brief Predefined reject message 6 */
#define VCONFKEY_CISSAPPL_USER_CREATE_MSG6_STR           VCONFKEY_CISSAPPL_PREFIX"/user_create_message6"

/**
 * @brief Incoming call auto answer status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_ANSWERING_MODE_INT             VCONFKEY_CISSAPPL_PREFIX"/answering_mode"

/**
 * @brief Incoming call auto answer time
 *
 * 1 : 1 Second after \n
 * 2 : 2 Seconds after \n
 * 3 : 3 Seconds after \n
 * 4 : 4 Seconds after \n
 * 5 : 5 Seconds after \n
 */
#define VCONFKEY_CISSAPPL_ANSWERING_MODE_TIME_INT        VCONFKEY_CISSAPPL_PREFIX"/answering_mode_time"

/**
 * @brief Call connect tone status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_CALL_CONNECT_TONE_BOOL         VCONFKEY_CISSAPPL_PREFIX"/call_connect_tone"

/**
 * @brief Minute minder status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_MINUTE_MINDER_BOOL             VCONFKEY_CISSAPPL_PREFIX"/minute_minder"

/**
 * @brief Call end tone status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_CALL_END_TONE_BOOL             VCONFKEY_CISSAPPL_PREFIX"/call_end_tone"

/**
 * @brief Alert on call status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_ALERT_ON_CALL_INT              VCONFKEY_CISSAPPL_PREFIX"/alert_on_call"

/** @brief Video call hide me image path */
#define VCONFKEY_CISSAPPL_VIDEO_IMAGE_PATH_STR           VCONFKEY_CISSAPPL_PREFIX"/video_image_path"

/**
 * @brief The status of showing own video on the incoming video call screen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_OWN_VIDEO_BOOL                 VCONFKEY_CISSAPPL_PREFIX"/own_video"

/** @brief The index of the selected prefix dial number */
#define VCONFKEY_CISSAPPL_PREFIX_DIAL_VALUE_INT          VCONFKEY_CISSAPPL_PREFIX"/prefix_dial_value"

/**
 * @brief The status of answering an incoming call with Home key
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_ANSWERING_KEY_BOOL             VCONFKEY_CISSAPPL_PREFIX"/call_answering_key"

/**
 * @brief The status of ending calls with Power key
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_POWER_KEY_ENDS_CALL_BOOL       VCONFKEY_CISSAPPL_PREFIX"/call_power_key_ends_call"

/**
 * @brief The status of muting a ringtone with the proximity sensor
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_PROXIMITY_SENSOR_BOOL          VCONFKEY_CISSAPPL_PREFIX"/proximity_sensor"

/**
 * @brief The status of making outgoing calls with BT headsets
 *
 * 0 : Even when device locked \n
 * 1 : Only when device unlocked \n
 */
#define VCONFKEY_CISSAPPL_OUTGOING_CALL_CONDITIONS_INT          VCONFKEY_CISSAPPL_PREFIX"/outgoing_call_conditions"

/**
 * @brief Outgoing call type status
 *
 * 0 : Follow last call log \n
 * 1 : Voice call \n
 * 2 : Video call \n
 */
#define VCONFKEY_CISSAPPL_OUTGOING_CALL_TYPE_INT          VCONFKEY_CISSAPPL_PREFIX"/outgoing_call_type"

/**
 * @brief The status of device selected for receiving incoming calls
 *
 * 0 : BT Headset \n
 * 1 : Receiver \n
 */
#define VCONFKEY_CISSAPPL_ACCEPT_CALL_IN_DEVICE_SELECT_INT          VCONFKEY_CISSAPPL_PREFIX"/accept_call_in_device"

/**
 * @brief Eye contact status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_EYE_CONTACT_BOOL          VCONFKEY_CISSAPPL_PREFIX"/eye_contact"

/**
 * @brief Noise reduction status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_NOISE_REDUCTION_BOOL          VCONFKEY_CISSAPPL_PREFIX"/noise_reduction"

/**
 * @brief In-call sound EQ status
 *
 * 0 : Off \n
 * 1 : Boost low tones \n
 * 2 : Boost high tones \n
 * 3 : For left ear \n
 * 4 : For right ear \n
 */
#define VCONFKEY_CISSAPPL_IN_CALL_SOUND_EQ_INT          VCONFKEY_CISSAPPL_PREFIX"/in_call_sound_eq"

/**
 * @brief extra volume status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_EXTRA_VOL_BOOL          VCONFKEY_CISSAPPL_PREFIX"/extra_vol"

/**
 * @brief increase ringtone status
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_INCREASE_RINGTONE_BOOL          VCONFKEY_CISSAPPL_PREFIX"/increase_ringtone"

/**
 * @brief It saves 24 charaters.
 * First 12 characters are eq value for left ear.
 * Last 12 characters are eq values for right ears.
 */
#define VCONFKEY_CISSAPPL_PERSONALISED_EQ_STR	VCONFKEY_CISSAPPL_PREFIX"/personalised_eq"

/**
 * @brief The status of frequently used side for my sound
 *
 * -1 : Unset
 * 0 : Left
 * 1 : Right
 */
#define VCONFKEY_CISSAPPL_FREQUENT_SIDE_INT	VCONFKEY_CISSAPPL_PREFIX"/frequent_side"

/**
 * @brief The status of music sound *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_CISSAPPL_MUSIC_SOUND_BOOL	VCONFKEY_CISSAPPL_PREFIX"/music_sound"

/**
 * @brief The status of call sound *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_CISSAPPL_CALL_SOUND_BOOL	VCONFKEY_CISSAPPL_PREFIX"/call_sound"

/**
 * @brief The status (phone number locator) *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_CISSAPPL_CHINA_PNL_BOOL			VCONFKEY_CISSAPPL_PREFIX"/china_numloc"

/**
 * @brief update frequency (phone number locator) *
 * 0 : no update
 * 1 : every 1 month
 * 2 : every 3 month
 * 3 : every 6 month
 */
#define VCONFKEY_CISSAPPL_CHINA_PNL_UPDATE_FREQ_INT				VCONFKEY_CISSAPPL_PREFIX"/china_numloc_autoupdate_freq"

/**
 * @brief to shorten auto update frequency for verification team (phone number locator) *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_CISSAPPL_CHINA_PNL_TESTMODE_BOOL					VCONFKEY_CISSAPPL_PREFIX"/china_numloc_test_mode"

/**
 * @brief update date (phone number locator) *
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_CISSAPPL_CHINA_PNL_UPDATE_DATE_STR				VCONFKEY_CISSAPPL_PREFIX"/china_numloc_update_date"

/**
 * @brief update accepted or not (phone number locator) *
 * 0 : reject
 * 1 : accept
 */
#define VCONFKEY_CISSAPPL_CHINA_PNL_ACCEPT_BOOL						VCONFKEY_CISSAPPL_PREFIX"/china_numloc_accept_update"

/**
 * @brief selected index (ipcall) *
 * 0 ~ 5 : each selected item
 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_SELECTED_IDX_INT		VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_selected_index"

/**
 * @brief number of ipcall (ipcall) *
 * 0 ~ 5 : number of ipcall
 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_CNT_IDX_INT				VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_cnt"

/** @brief Predefined ipcall list 1 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_LIST1_STR           VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_list1"
/** @brief Predefined ipcall list 2 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_LIST2_STR           VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_list2"
/** @brief Predefined ipcall list 3 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_LIST3_STR           VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_list3"
/** @brief Predefined ipcall list 4 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_LIST4_STR           VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_list4"
/** @brief Predefined ipcall list 5 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_LIST5_STR           VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_list5"
/** @brief Predefined ipcall list 6 */
#define VCONFKEY_CISSAPPL_CHINA_IPCALL_LIST6_STR           VCONFKEY_CISSAPPL_PREFIX"/china_ipcall_list6"

/**
 * @brief The status of international dial automatic conversion *
 * False : off
 * True : on
 */
#define VCONFKEY_CISSAPPL_DOCOMO_INTL_DIAL_AUTO_CONVERSION_BOOL		VCONFKEY_CISSAPPL_PREFIX"/intl_dial_auto_conversion"

/** @brief International dial assist - country name */
#define VCONFKEY_CISSAPPL_DOCOMO_INTL_DIAL_COUNTRY_NAME_STR		VCONFKEY_CISSAPPL_PREFIX"/intl_dial_country_name"

/** @brief International dial assist - prefix */
#define VCONFKEY_CISSAPPL_DOCOMO_INTL_DIAL_COUNTRY_PREFIX_STR	VCONFKEY_CISSAPPL_PREFIX"/intl_dial_country_prefix"

/** @brief International prefix - name */
#define VCONFKEY_CISSAPPL_DOCOMO_INTL_PREFIX_NAME_STR		VCONFKEY_CISSAPPL_PREFIX"/intl_prefix_name"

/** @brief International prefix - code */
#define VCONFKEY_CISSAPPL_DOCOMO_INTL_PREFIX_CODE_STR		VCONFKEY_CISSAPPL_PREFIX"/intl_prefix_code"

/**
 * @brief The status of message notification sound *
 * False : off
 * True : on
 */
#define VCONFKEY_CISSAPPL_DOCOMO_MSG_NOTI_SOUND_BOOL		VCONFKEY_CISSAPPL_PREFIX"/msg_noti_sound"

/**
 * @brief message notification vibration *
 * 0 : never
 * 1 : always
 * 2 : onli in silent mode
 */
#define VCONFKEY_CISSAPPL_DOCOMO_MSG_NOTI_VIB_INT			VCONFKEY_CISSAPPL_PREFIX"/msg_noti_vib"

/**
 * @brief answering memo *
 * 0 : on
 * 1 : on during vibration/silent
 * 2 : off
 */
#define VCONFKEY_CISSAPPL_DOCOMO_ANS_MEMO_INT			VCONFKEY_CISSAPPL_PREFIX"/ans_memo"

/**
 * @brief answering memo sound language*
 * 0 : japanese
 * 1 : english
 * 2 : korean
 */
#define VCONFKEY_CISSAPPL_DOCOMO_ANS_MEMO_SND_LANG_INT			VCONFKEY_CISSAPPL_PREFIX"/ans_memo_snd_lang"

/**
 * @brief answering memo ring duration *
 * 00 ~ 120 , Ring duration after which answering memo starts
 */
#define VCONFKEY_CISSAPPL_DOCOMO_ANS_MEMO_RING_DUR_INT			VCONFKEY_CISSAPPL_PREFIX"/ans_memo_ring_dur"

/**
 * @brief Call alerts - Answer Vibration
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_CALL_ANSWER_VIBRATION_BOOL         VCONFKEY_CISSAPPL_PREFIX"/call_answer_vibrate"

/**
 * @brief Call alerts - Call end Vibration
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_CALL_END_VIBRATION_BOOL			VCONFKEY_CISSAPPL_PREFIX"/call_callend_vibrate"

/**
 * @brief Use Call fail option
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_USE_CALL_FAIL_BOOL			VCONFKEY_CISSAPPL_PREFIX"/use_call_fail"

/**
 * @brief Play tone when keypad is pressed
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_KEYPAD_TONES_BOOL					VCONFKEY_CISSAPPL_PREFIX"/keypad_tone"

/**
 * @brief Enable auto redial if call cannot be connected or has been cut off
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_CISSAPPL_AUTO_REDIAL_BOOL 	VCONFKEY_CISSAPPL_PREFIX"/auto_redial"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_CISS_KEYS_H__ */

