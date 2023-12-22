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

#ifndef __VCONF_INTERNAL_SETTING_KEYS_H__
#define __VCONF_INTERNAL_SETTING_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-setting-keys.h
 * @defgroup    vconf_internal_setting_key Definitions of internal shared Keys for setting
 * @ingroup     vconf_internal_key
 * @author      Hyejin Kim (hyejin0906.kim@samsung.com)
 * @version     0.1
 * @brief       This file has the definitions of shared keys for setting \n
 */

/* ========================== Setting UI Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_setting_key
 * @{
 * @brief Setting UI Keys & Values\n
 *        Maintainer : hyejin0906.kim@samsung.com
 */
#define VCONFKEY_SETAPPL_PREFIX                                 "db/setting"
#define VCONFKEY_SETAPPL_MEM_PREFIX                             "memory/setting"


/** @brief vibration pattern file path of current incoming call */
#define VCONFKEY_SETAPPL_CALL_VIBRATION_PATTERN_STR            VCONFKEY_SETAPPL_PREFIX"/sound/call/vibration_pattern_path"

/**
 * @brief support touch sounds option
 *
 * 0 : off \n
 * 1 : on \n
 */
#define VCONFKEY_SETAPPL_TOUCH_SOUNDS_BOOL             VCONFKEY_SETAPPL_PREFIX"/sound/touch_sounds"

/**
 * @brief support button sounds option
 *
 * 0 : off \n
 * 1 : on \n
 */
#define VCONFKEY_SETAPPL_BUTTON_SOUNDS_BOOL             VCONFKEY_SETAPPL_PREFIX"/sound/button_sounds"

/**
 * @brief status of screen lock sound
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SOUND_LOCK_BOOL                        VCONFKEY_SETAPPL_PREFIX"/sound/sound_lock"

/**
 * @brief volume level of media sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_MEDIA_SOUND_VOLUME_INT                 VCONFKEY_SETAPPL_PREFIX"/sound/media/sound_volume"


/** @brief current theme name */
#define VCONFKEY_SETAPPL_WIDGET_THEME_STR                       VCONFKEY_SETAPPL_PREFIX"/widget_theme"

/**
 * @brief level of brightness
 *
 * Min : 1 \n
 * Max : 24 \n
 */
#define VCONFKEY_SETAPPL_LCD_BRIGHTNESS                         VCONFKEY_SETAPPL_PREFIX"/Brightness"
/* display - brightness */
enum {
	SETTING_BRIGHTNESS_LEVEL1 = 1,
	SETTING_BRIGHTNESS_LEVEL2,
	SETTING_BRIGHTNESS_LEVEL3,
	SETTING_BRIGHTNESS_LEVEL4,
	SETTING_BRIGHTNESS_LEVEL5,
	SETTING_BRIGHTNESS_LEVEL6,
	SETTING_BRIGHTNESS_LEVEL7,
	SETTING_BRIGHTNESS_LEVEL8,
	SETTING_BRIGHTNESS_LEVEL9,
	SETTING_BRIGHTNESS_LEVEL10
};


/**
 * @brief level of automatic brightness
 *
 * Min : 1 \n
 * Max : 100 \n
 */
#define VCONFKEY_SETAPPL_LCD_AUTOMATIC_BRIGHTNESS                         VCONFKEY_SETAPPL_PREFIX"/automatic_brightness_level"

/**
 * @brief level of automatic display adjustment
 *
 */
#define VCONFKEY_SETAPPL_LCD_AUTO_DISPLAY_ADJUSTMENT                         VCONFKEY_SETAPPL_PREFIX"/auto_display_adjustment"

/**
 * @brief screen mode
 *
 * 0 : dynamic \n
 * 1 : Standard \n
 * 2 : Natural \n
 * 3 : Movie \n
 */
#define VCONFKEY_SETAPPL_SCREEN_MODE_INT		VCONFKEY_SETAPPL_PREFIX"/screen_mode"
/* display - screen mode */
enum {
	SETTING_SCREEN_MODE_DYNAMIC = 0,
	SETTING_SCREEN_MODE_STANDARD,
	SETTING_SCREEN_MODE_NATURAL,
	SETTING_SCREEN_MODE_MOVIE,
	SETTING_SCREEN_MODE_MAX
};

/**
 * @brief timeout of lcd
 *
 * 0 : always on \n
 * 15 : 15 sec \n
 * 30 : 30 sec \n
 * 60 : 1 min \n
 * 120 : 2 min \n
 * 300 : 5 min \n
 * 600 : 10 min \n
 */
#define VCONFKEY_SETAPPL_LCD_TIMEOUT_NORMAL			VCONFKEY_SETAPPL_PREFIX"/lcd_backlight_normal"

/**
 * @brief volume level of ringtone sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_CALL_RINGTONE_SOUND_VOLUME_INT			VCONFKEY_SETAPPL_PREFIX"/sound/call/ringtone_sound_volume"

/** @brief current incoming call ringtone file path */
#define VCONFKEY_SETAPPL_CALL_RINGTONE_PATH_STR				    VCONFKEY_SETAPPL_PREFIX"/sound/call/ringtone_path"

/** @brief default incoming call ringtone file path */
#define VCONFKEY_SETAPPL_CALL_RINGTONE_DEFAULT_PATH_STR                             VCONFKEY_SETAPPL_PREFIX"/sound/call/ringtone_default_path"

/**
 * @brief vibration type of incoming call
 *
 * 0 : vibration 1 \n
 * 1 : vibration 2 \n
 * 2 : vibration 3 \n
 */
#define VCONFKEY_SETAPPL_CALL_VIBRATION_PATTERN_INT			    VCONFKEY_SETAPPL_PREFIX"/sound/call/vibration_type"
/* profile - call alert vib type */
enum {
	SETTING_CALL_ALERT_VIB_TYPE1 = 0,
	SETTING_CALL_ALERT_VIB_TYPE2,
	SETTING_CALL_ALERT_VIB_TYPE3,
	SETTING_CALL_ALERT_VIB_TYPE4,
	SETTING_CALL_ALERT_VIB_TYPE5,
	SETTING_CALL_ALERT_VIB_TYPE6,
	SETTING_CALL_ALERT_VIB_TYPE7,
	SETTING_CALL_ALERT_VIB_TYPE8,
	SETTING_CALL_ALERT_VIB_TYPE9,
	SETTING_CALL_ALERT_VIB_TYPE10,
	SETTING_CALL_ALERT_VIB_MAX
};


/**
 * @brief volume level of notification sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_NOTI_SOUND_VOLUME_INT				    VCONFKEY_SETAPPL_PREFIX"/sound/noti/sound_volume"

/**
 * @brief type of message alert repitition
 *
 * 0 : once \n
 * 1 : every 2 minutes \n
 * 2 : every 5 minutes \n
 * 3 : every 10 minutes \n
 */
#define VCONFKEY_SETAPPL_NOTI_MSG_ALERT_REP_TYPE_INT			VCONFKEY_SETAPPL_PREFIX"/sound/noti/msg_alert_rep_type"
enum {
	SETTING_SOUND_REP_ONCE = 0,
	SETTING_SOUND_REP_EVERY_2_MIN,
	SETTING_SOUND_REP_EVERY_5_MIN,
	SETTING_SOUND_REP_EVERY_10_MIN
};

/** @brief current message ringtone file path */
#define VCONFKEY_SETAPPL_NOTI_MSG_RINGTONE_PATH_STR			    VCONFKEY_SETAPPL_PREFIX"/sound/noti/msg_ringtone_path"

/** @brief default noti ringtone file path */
#define VCONFKEY_SETAPPL_NOTI_RINGTONE_DEFAULT_PATH_STR                         VCONFKEY_SETAPPL_PREFIX"/sound/noti/ringtone_default_path"

/** @brief current noti ringtone file path */
#define VCONFKEY_SETAPPL_NOTI_RINGTONE_PATH_STR 				VCONFKEY_SETAPPL_NOTI_MSG_RINGTONE_PATH_STR

/**
 * @brief type of email alert repitition
 *
 * 0 : once \n
 * 1 : every 2 minutes \n
 * 2 : every 5 minutes \n
 * 3 : every 10 minutes \n
 */
#define VCONFKEY_SETAPPL_NOTI_EMAIL_ALERT_REP_TYPE_INT			VCONFKEY_SETAPPL_PREFIX"/sound/noti/email_alert_rep_type"

/** @brief current email ringtone file path */
#define VCONFKEY_SETAPPL_NOTI_EMAIL_RINGTONE_PATH_STR			VCONFKEY_SETAPPL_PREFIX"/sound/noti/email_ringtone_path"

/**
 * @brief vibration level of notification
 *
 * Min : 0 \n
 * Max : 5 \n
 */
#define VCONFKEY_SETAPPL_NOTI_VIBRATION_LEVEL_INT			    VCONFKEY_SETAPPL_PREFIX"/sound/noti/vibration_level"

/**
 * @brief volume level of system sound
 *
 * Min : 0 \n
 * Max : 15 \n
 */
#define VCONFKEY_SETAPPL_TOUCH_FEEDBACK_SOUND_VOLUME_INT		VCONFKEY_SETAPPL_PREFIX"/sound/touch_feedback/sound_volume"

/**
 * @brief backup vibration level of haptic feedback for powersaving
 *
 * Min : 0 \n
 * Max : 5 \n
 */
#define VCONFKEY_SETAPPL_TOUCH_FEEDBACK_VIBRATION_LEVEL_BAK_INT     VCONFKEY_SETAPPL_PREFIX"/sound/touch_feedback/vibration_level_bak"

/**
 * @brief vibration level of haptic feedback
 *
 * Min : 0 \n
 * Max : 5 \n
 */
#define VCONFKEY_SETAPPL_TOUCH_FEEDBACK_VIBRATION_LEVEL_INT     VCONFKEY_SETAPPL_PREFIX"/sound/touch_feedback/vibration_level"
/* phone - vibration feedback */
enum {
	SETTING_VIB_FEEDBACK_LEVEL0 = 0,
	SETTING_VIB_FEEDBACK_LEVEL1,
	SETTING_VIB_FEEDBACK_LEVEL2,
	SETTING_VIB_FEEDBACK_LEVEL3,
	SETTING_VIB_FEEDBACK_LEVEL4,
	SETTING_VIB_FEEDBACK_LEVEL5
};


/**
 * @brief status of changing USB mode
 *
 * 0 : done \n
 * 1 : on changing \n
 * 2 : on changing to NONE mode \n
 */
#define VCONFKEY_SETAPPL_USB_IN_MODE_CHANGE                     VCONFKEY_SETAPPL_MEM_PREFIX"/usb_in_mode_change"

/**
 * @brief selected popup button
 *
 * 0 : NO/Cancel button \n
 * 1 : YES/OK button \n
 */
#define VCONFKEY_SETAPPL_SELECT_POPUP_BTN_INT                   VCONFKEY_SETAPPL_PREFIX"/select_popup_btn"
/* setting - on,off status */
enum {
	SETTING_ON_OFF_BTN_OFF = 0,
	SETTING_ON_OFF_BTN_ON,
	SETTING_ON_OFF_BTN_MAX
};

/**
 * @brief current USB mode
 *
 * SETTING_USB_NONE_MODE : None \n
 * SETTING_USB_DEFAULT_MODE : Default \n
 * SETTING_USB_SAMSUNG_KIES : Kies \n
 * SETTING_USB_DEBUG_MODE : Debug \n
 * SETTING_USB_ETHERNET_MODE : Ethernet \n
 * SETTING_USB_TETHERING_MODE : USB tethering \n
 * SETTING_USB_ACCESSORY_MODE : USB accessory \n
 */
#define VCONFKEY_SETAPPL_USB_MODE_INT                           VCONFKEY_SETAPPL_MEM_PREFIX"/usb_mode"
enum {
	/** None */
	SETTING_USB_NONE_MODE = -1,
	/** Default */
	SETTING_USB_DEFAULT_MODE = 0,
	/** KIES */
	SETTING_USB_SAMSUNG_KIES = 0,
	/** DEBUG */
	SETTING_USB_DEBUG_MODE = 3,
	/** ETHERNET */
	SETTING_USB_ETHERNET_MODE = 3,
	/** USB tethering */
	SETTING_USB_TETHERING_MODE = 4,
	/** USB accessory */
	SETTING_USB_ACCESSORY_MODE = 5
};	/* connectivity - usb connection */

/**
 * @brief USB mode that user selected
 *
 * 0 : Kies, Default \n
 * 3 : Debug, Ethernet \n
 * 4 : USB tethering \n
 * 5 : USB accessory \n
 */
#define VCONFKEY_SETAPPL_USB_SEL_MODE_INT                       VCONFKEY_SETAPPL_MEM_PREFIX"/usb_sel_mode"

/**
 * @brief status of debug mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USB_DEBUG_MODE_BOOL		        VCONFKEY_SETAPPL_PREFIX"/debug_mode"

/**
 * @brief status of select network
 *
 * 0 : Automatic Off \n
 * 1 : Automatic On \n
 */
#define VCONFKEY_SETAPPL_SELECT_NETWORK_INT                     VCONFKEY_SETAPPL_PREFIX"/select_network"
/* network - select network */
enum {
	SETTING_SELECT_NETWORK_AUTOMATIC = 0,
	SETTING_SELECT_NETWORK_MANUAL,
	SETTING_SELECT_NETWORK_MAX
};

/**
 * @brief network node
 *
 * 0 : automatic \n
 * 1 : gsm900/1800 \n
 * 2 : gsm 8500/1900 \n
 * 3 : umts \n
 */
#define VCONFKEY_SETAPPL_NETWORK_MODE_INT                       VCONFKEY_SETAPPL_PREFIX"/network_mode"
/* network - network mode */
enum {
	SETTING_NETWORK_MODE_AUTOMATIC = 0,
	SETTING_NETWORK_MODE_GSM_900_1800,
	SETTING_NETWORK_MODE_GSM_850_1900,
	SETTING_NETWORK_MODE_UTMS,
	SETTING_NETWORK_MODE_MAX
};

/**
 * @brief status of phone lock
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_POWER_ON_LOCK_BOOL		        VCONFKEY_SETAPPL_PREFIX"/power_on_lock"

/**
 * @brief left count of trying phone lock on/off
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PHONE_LOCK_ATTEMPTS_LEFT_INT                    VCONFKEY_SETAPPL_PREFIX"/phone_lock_attempts_left"

/**
 * @brief timestamp if phone lock is on
 *
 */
#define VCONFKEY_SETAPPL_PHONE_LOCK_TIMESTAMP_STR                    VCONFKEY_SETAPPL_PREFIX"/phone_lock_timestamp"

/**
 * @brief timestamp if sim lock is on
 *
 */
#define VCONFKEY_SETAPPL_SIM_LOCK_TIMESTAMP_STR                    VCONFKEY_SETAPPL_PREFIX"/sim_lock_timestamp"

/**
 * @brief status of fdn mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_FIXED_DIALING_MODE_BOOL		    VCONFKEY_SETAPPL_PREFIX"/fixed_dialing_mode"

/**
 * @brief status of simple password
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_SIMPLE_PASSWORD_BOOL		        VCONFKEY_SETAPPL_PREFIX"/simple_password"


/**
 * @brief screen lock type
 *
 * 0 : Swipe \n
 * 1 : Motion \n
 * 2 : Face and voice \n
 * 3 : Simple password \n
 * 4 : Password \n
 */
#define VCONFKEY_SETAPPL_SCREEN_LOCK_TYPE_INT		        VCONFKEY_SETAPPL_PREFIX"/screen_lock_type"
/* security - screen lock type */
enum {
       SETTING_SCREEN_LOCK_TYPE_NONE = 0,
       SETTING_SCREEN_LOCK_TYPE_SWIPE,
       SETTING_SCREEN_LOCK_TYPE_MOTION,
       SETTING_SCREEN_LOCK_TYPE_FACE_AND_VOICE,
       SETTING_SCREEN_LOCK_TYPE_SIMPLE_PASSWORD,
       SETTING_SCREEN_LOCK_TYPE_PASSWORD,
       SETTING_SCREEN_LOCK_TYPE_OTHER,
       SETTING_SCREEN_LOCK_TYPE_MAX
};


/** @brief 3rd party screen lock package name */
#define VCONFKEY_SETAPPL_3RD_LOCK_PKG_NAME_STR            VCONFKEY_SETAPPL_PREFIX"/3rd_lock_pkg_name"


/**
 * @brief display and light : font size
 *
 * 1 : SMALL \n
 * 2 : MIDIUM \n
 * 3 : LARGE \n
 */
#define VCONFKEY_SETAPPL_FONT_SIZE_INT                          VCONFKEY_SETAPPL_PREFIX"/font_size"
/* display - font size */
enum {
	SETTING_FONT_SIZE_SMALL = 0,
	SETTING_FONT_SIZE_MIDDLE,
	SETTING_FONT_SIZE_LARGE,
	SETTING_FONT_SIZE_MAX
};


/** @brief display and light : index of font type */
#define VCONFKEY_SETAPPL_FONT_TYPE_INT                          VCONFKEY_SETAPPL_PREFIX"/font_type"

/**
 * @brief status of automatic brightness
 *
 * 0 : Off \n
 * 1 : On \n
 * 2 : Pause \n
 */
#define VCONFKEY_SETAPPL_BRIGHTNESS_AUTOMATIC_INT              VCONFKEY_SETAPPL_PREFIX"/brightness_automatic"
enum {
	SETTING_BRIGHTNESS_AUTOMATIC_OFF = 0,
	SETTING_BRIGHTNESS_AUTOMATIC_ON,
	SETTING_BRIGHTNESS_AUTOMATIC_PAUSE
};

/**
 * @brief time and date : status of automatic time update
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_AUTOMATIC_TIME_UPDATE_BOOL       VCONFKEY_SETAPPL_PREFIX"/automatic_time_update"

/**
 * @brief time and date : index of date format type
 *
 * 0 : DD_MM_YYYY
 * 1 : MM_DD_YYYY \n
 * 2 : YYYY_MM_DD \n
 * 3 : YYYY_DD_MM \n
 */
#define VCONFKEY_SETAPPL_DATE_FORMAT_INT                        VCONFKEY_SETAPPL_PREFIX"/date_format"
/* time - date format */
enum {
	SETTING_DATE_FORMAT_DD_MM_YYYY = 0,
	SETTING_DATE_FORMAT_MM_DD_YYYY,
	SETTING_DATE_FORMAT_YYYY_MM_DD,
	SETTING_DATE_FORMAT_YYYY_DD_MM,
	SETTING_DATE_FORMAT_MAX
};

/** @brief city name */
#define VCONFKEY_SETAPPL_CITYNAME_INDEX_INT                     VCONFKEY_SETAPPL_PREFIX"/cityname_id"

/**
 * @brief first day of week
 *
 * 0 : Sunday \n
 * 1 : Monday \n
 */
#define VCONFKEY_SETAPPL_WEEKOFDAY_FORMAT_INT                   VCONFKEY_SETAPPL_PREFIX"/weekofday_format"
/* time - week of day format */
enum {
	SETTING_WEEKOFDAY_FORMAT_SUNDAY = 0,
	SETTING_WEEKOFDAY_FORMAT_MONDAY,
	SETTING_WEEKOFDAY_FORMAT_TUESDAY,
	SETTING_WEEKOFDAY_FORMAT_WEDNESDAY,
	SETTING_WEEKOFDAY_FORMAT_THURSDAY,
	SETTING_WEEKOFDAY_FORMAT_FRIDAY,
	SETTING_WEEKOFDAY_FORMAT_SATURDAY,
	SETTING_WEEKOFDAY_FORMAT_MAX
};


/**
 * @brief index of current language
 *
 * 0 : automatic \n
 * 1 : korean \n
 * 2 : English \n
 * 3 : chinese \n
 * 4 : chinese(hongkong) \n
 * 5 : chinese(taiwan) \n
 * 6 : Deutsche \n
 * 7 : nederlands \n
 * 8 : espanol \n
 * 9 : portugues \n
 * 10 : greek \n
 * 11 : italiano \n
 * 12 : francais \n
 * 13 : turky \n
 * 14 : japanese \n
 * 15 : Russian \n
 */
#define VCONFKEY_SETAPPL_LANG_INT                               VCONFKEY_SETAPPL_PREFIX"/lang"
/* phone - lnaguage */
enum {
	SETTING_LANG_AUTOMATIC = 0,
	SETTING_LANG_KOREA = 1,
	SETTING_LANG_ENGLISH,
	SETTING_LANG_CHINA,
	SETTING_LANG_CANTONESE,
	SETTING_LANG_TAIWAN,
	SETTING_LANG_GERMAN,
	SETTING_LANG_DUTCH,
	SETTING_LANG_SPAINISH,
	SETTING_LANG_PORTUGUESE,
	SETTING_LANG_GREEK,
	SETTING_LANG_ITALIAN,
	SETTING_LANG_FRENCH,
	SETTING_LANG_TURKISH,
	SETTING_LANG_JAPAN,
	SETTING_LANG_RUSSIAN,
	SETTING_LANG_MAX
};

/**
 * @brief status of IM notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_IM_BOOL              VCONFKEY_SETAPPL_PREFIX"/ticker_noti/im"

/**
 * @brief status of facebook notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_FACEBOOK_BOOL        VCONFKEY_SETAPPL_PREFIX"/ticker_noti/facebook"

/**
 * @brief status of twitter notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_TWITTER_BOOL         VCONFKEY_SETAPPL_PREFIX"/ticker_noti/twitter"

/**
 * @brief status of message notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_MESSAGES_BOOL        VCONFKEY_SETAPPL_PREFIX"/ticker_noti/messages"

/**
 * @brief status of email notification
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TICKER_NOTI_EMAIL_BOOL           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/email"

/**
 * @brief font size
 *
 * 0 : small
 * 1 : normal
 * 2 : large
 * 3 : huge
 * 4 : giant
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_FONT_SIZE                VCONFKEY_SETAPPL_PREFIX"/accessibility/font_size"

/**
 * @brief Accessibility setting : status of assistive light
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_TORCH_LIGHT              VCONFKEY_SETAPPL_MEM_PREFIX"/accessibility/torch_light"

/**
 * @brief Accessibility setting : status of checkbox that manages notification popup of assistive light
 *
 * 0 : do not show notification popup when turn on assistive light \n
 * 1 : show notification popup when turn on assistive light \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ASSISTIVE_LIGHT_REMINDER              VCONFKEY_SETAPPL_PREFIX"/accessibility/assistive_light_reminder"

/**
 * @brief Accessibility setting : status of turn off all sounds
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_TURN_OFF_ALL_SOUNDS              VCONFKEY_SETAPPL_PREFIX"/accessibility/turn_off_all_sounds"

/**
 * @brief Accessibility setting : backup the status of sound_on for supporting <turn off all sounds>
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SOUND_STATUS_BAK_BOOL              VCONFKEY_SETAPPL_PREFIX"/sound/sound_on_bak"

/**
 * @brief Accessibility setting : backup the status of touch_sounds for supporting <turn off all sounds>
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_TOUCH_SOUNDS_BAK_BOOL              VCONFKEY_SETAPPL_PREFIX"/sound/touch_sounds_bak"

/**
 * @brief Accessibility setting : backup the status of lock_sound for supporting <turn off all sounds>
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SOUND_LOCK_BAK_BOOL              VCONFKEY_SETAPPL_PREFIX"/sound/sound_lock_bak"

/**
 * @brief Accessibility setting : status of accept call
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ACCEPT_CALL              VCONFKEY_SETAPPL_PREFIX"/accessibility/accept_call"

/**
 * @brief Accessibility setting : status of auto answer
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ENABLE_AUTO_ANSWER       VCONFKEY_SETAPPL_PREFIX"/accessibility/enable_auto_answer"

/**
 * @brief Accessibility setting : auto answering time
 *
 * 1 : after 1 second \n
 * 2 : after 2 seconds \n
 * 3 : after 3 seconds \n
 * 4 : after 4 seconds \n
 * 5 : after 5 seconds \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_AUTO_ANSWER              VCONFKEY_SETAPPL_PREFIX"/accessibility/auto_answer"

/**
 * @brief Accessibility setting : status of end call using the power key
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_POWERKEY_END_CALLS       VCONFKEY_SETAPPL_PREFIX"/accessibility/powerkey_end_calls"

/**
 * @brief Accessibility setting : status of led notify
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_LED_NOTIFY       VCONFKEY_SETAPPL_PREFIX"/accessibility/led_notify"

/**
 * @brief Accessibility setting : screen lock time
 *
 * 0 : Immediately
 * 5 : 5 seconds
 * 15 : 15 seconds
 * 30 : 30 seconds
 * 60 : 1 minute
 * 120 : 2 minutes
 * 300 : 5 minutes
 * 600 : 10 minites
 * 900 : 15 minites
 * 1800 : 30 minites
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_LOCK_TIME_INT VCONFKEY_SETAPPL_PREFIX"/accessibility/lock_time"

/**
 * @brief Accessibility setting : power key shortcut
 *
 * 0 : off \n
 * 1 : always ask \n
 * 2 : screen reader(TTS) \n
 * 3 : negative colours \n
 * 4 : zoom \n
 * 5 : assistive light \n
 * 6 : shot reader \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_POWER_KEY_HOLD           VCONFKEY_SETAPPL_PREFIX"/accessibility/power_key_hold"

enum {
	SETTING_POWERKEY_SHORTCUT_OFF = 0,
	SETTING_POWERKEY_SHORTCUT_ALWAYS_ASK = 1,
	SETTING_POWERKEY_SHORTCUT_SCREEN_READER_TTS,
	SETTING_POWERKEY_SHORTCUT_NEGATIVE_COLOURS,
	SETTING_POWERKEY_SHORTCUT_ZOOM,
	SETTING_POWERKEY_SHORTCUT_ASSISTIVE_LIGHT,
	SETTING_POWERKEY_SHORTCUT_SHOT_READER,
	SETTING_POWERKEY_SHORTCUT_MAX
};

/**
 * @brief Accessibility setting : status of screen reader (TTS)
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_TTS       VCONFKEY_SETAPPL_PREFIX"/accessibility/tts"

/**
 * @brief Accessibility setting : TTS speech rate
 *
 * 0 : Very slow \n
 * 1 : Slow \n
 * 2 : Normal \n
 * 3 : Fast \n
 * 4 : Very fast \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_SPEECH_RATE  VCONFKEY_SETAPPL_PREFIX"/accessibility/speech_rate"

/**
 * @brief Powersaving : status of system power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_SYSMODE_STATUS                   VCONFKEY_SETAPPL_PREFIX"/pwrsv/system_mode/status"

/**
 * @brief Powersaving : status of custom power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_STATUS                  VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/status"

/**
 * @brief Powersaving : status of turn off wifi
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_WIFI                    VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/wifi"

/**
 * @brief Powersaving : status of turn off bluetooth
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BT                      VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/bt"

/**
 * @brief Powersaving : status of turn off gps
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_GPS                     VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/gps"

/**
 * @brief Powersaving : status of turn off data sync
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_DATASYNC                VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/data_sync"

/**
 * @brief Powersaving : status of turn off hotspot
 *
 * 0 : Turn on \n
 * 1 : Turn off \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_HOTSPOT                 VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/hotspot"

/**
 * @brief Powersaving : status of adjust brightness
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BRT_STATUS              VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/brt/status"

/**
 * @brief Powersaving : status of automatic brightness for custom power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BRT_AUTO_STATUS         VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/brt/auto/status"

/**
 * @brief Powersaving : level of brightness for custom power saving
 *
 * Min : 0 \n
 * Max : 24 \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BRT_VALUE               VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/brt/value"

/**
 * @brief Powersaving : level of backlight time for custom power saving
 *
 * 15 : 15 sec \n
 * 30 : 30 sec \n
 * 60 : 1 min \n
 * 120 : 2 min \n
 * 600 : 10 min \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BLTIME                  VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/backlight/time"
/* display - backlight time */
enum {
	SETTING_BACKLIGHT_TIME_8SEC = 8,
	SETTING_BACKLIGHT_TIME_15SEC = 15,
	SETTING_BACKLIGHT_TIME_30SEC = 30,
	SETTING_BACKLIGHT_TIME_1MIN = 60,
	SETTING_BACKLIGHT_TIME_3MIN = 180,
	SETTING_BACKLIGHT_TIME_10MIN = 600,
	SETTING_BACKLIGHT_TIME_MAX
};

/**
 * @brief Powersaving : status of reminder for custom power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_SYSMODE_STATUS_REMINDER          VCONFKEY_SETAPPL_PREFIX"/pwrsv/system_mode/reminder"

/**
 * @brief Powersaving : rate of saving baterry power
 *
 * default 30 : 30%
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_AT                      VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/at"

/**
 * @brief Powersaving : status of cpu power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_CPU                     VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/cpu"

/**
 * @brief Powersaving : status of display power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_DISPLAY                 VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/display"

/**
 * @brief Powersaving : status of background color power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_BG_COLOR                VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/bg_color"

/**
 * @brief Powersaving : status of turning off vibration on screen tap for power saving
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PWRSV_CUSTMODE_SCREEN_VIB              VCONFKEY_SETAPPL_PREFIX"/pwrsv/custom_mode/screen_vib"



/**
 * @brief Setting ticker noti : status of displaying message content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_MESSASGES          VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/messages"

/**
 * @brief Setting ticker noti : status of displaying email content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_EMAIL              VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/email"

/**
 * @brief Setting ticker noti : status of displaying im content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_IM                 VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/im"

/**
 * @brief Setting ticker noti : status of displaying twitter content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_TWITTER            VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/twitter"

/**
 * @brief Setting ticker noti : status of displaying facebook content
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_DISPLAY_CONTENT_FACEBOOK           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/display_content/facebook"

/**
 * @brief Setting ticker noti : status of showing badge at messages
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_MESSAGES           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/messages"

/**
 * @brief Setting ticker noti : status of showing badge at email
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_EMAIL           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/email"

/**
 * @brief Setting ticker noti : status of showing badge at im
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_IM           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/im"

/**
 * @brief Setting ticker noti : status of showing badge at facebook
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_FACEBOOK           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/facebook"

/**
 * @brief Setting ticker noti : status of showing badge at twitter
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_TICKER_NOTI_BADGE_TWITTER           VCONFKEY_SETAPPL_PREFIX"/ticker_noti/badge/twitter"

/**
 * @brief setting value of sim change alert
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_SIM_CHANGE_ALERT_BOOL   VCONFKEY_SETAPPL_PREFIX"/fmm/sim_change_alert"

/**
 * @brief recipient phone number
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_RECIPIENTS_STR          VCONFKEY_SETAPPL_PREFIX"/fmm/recipients"

/**
 * @brief sender phone number
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_SENDER_STR              VCONFKEY_SETAPPL_PREFIX"/fmm/sender"

/**
 * @brief message content when user change the sim
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_MESSAGE_STR             VCONFKEY_SETAPPL_PREFIX"/fmm/alert_message"

/**
 * @brief status of remote control
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_REMOTE_CONTROL_BOOL     VCONFKEY_SETAPPL_PREFIX"/fmm/remote_control"

/**
 * @brief status location consent
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FIND_MY_MOBILE_LOCATION_CONSENT_BOOL   VCONFKEY_SETAPPL_PREFIX"/fmm/location_consent"

/**
 * @brief current language set
 *
 * Value : language set string
 */
#define VCONFKEY_LANGSET                                        "db/menu_widget/language"

/**
 * @brief current region format
 *
 * Value : region format string
 */
#define VCONFKEY_REGIONFORMAT                                   "db/menu_widget/regionformat"

/**
 * @brief current selected package name of menuscreen
 *
 * Value : package name string
 */
#define VCONFKEY_SETAPPL_SELECTED_PACKAGE_NAME	                "db/setting/menuscreen/package_name"

/**
 * @brief current selected package name of homescreen
 *
 * Value : package name string
 */
#define VCONFKEY_SETAPPL_SELECTED_HOMESCREEN_PACKAGE_NAME	"db/setting/homescreen/package_name"

/**
 * @brief easy mode status of homescreen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_HOMESCREEN_EASYMODE_BOOL	"db/setting/homescreen/easymode"

/**
 * @brief status of transaction tracking
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_TRANSACTION_TRACKING_BOOL        VCONFKEY_SETAPPL_PREFIX"/transaction_tracking"

/**
 * @brief status of expiry reminder
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_EXPIRY_REMINDER_BOOL             VCONFKEY_SETAPPL_PREFIX"/expiry_reminder"

/**
 * @brief index of roaming network type
 *
 * 0 : Auto download \n
 * 1 : Manual \n
 * 2 : Always reject \n
 */
#define VCONFKEY_SETAPPL_ROAMING_NETWORK_INT                    VCONFKEY_SETAPPL_PREFIX"/roaming_network"
/* phone - license setting */
enum {
	SETTING_ROAM_NET_AUTO_DOWNLOAD = 0,
	SETTING_ROAM_NET_MANUAL,
	SETTING_ROAM_NET_ALWAYS_REJECT,
	SETTING_ROAM_NET_MAX
};

/**
 * @brief default memory of wap downloads
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_WAP_INT                    VCONFKEY_SETAPPL_PREFIX"/default_memory/wap"

/**
 * @brief default memory of app download
 *
 * 0 : Phone \n
 * 1 : SD card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_DOWNLOAD_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/download"

/**
 * @brief default memory of nfc download
 *
 * 0 : Phone \n
 * 1 : SD card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_DOWNLOAD_NFC_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/download_nfc"


/**
 * @brief default memory of contents download
 *
 * 0 : Phone \n
 * 1 : SD card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_DOWNLOAD_CONTENTS_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/download_contents"

/**
 * @brief default memory of application download
 *
 * 0 : Phone \n
 * 1 : SD card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_DOWNLOAD_APPLICATION_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/download_application"

/**
 * @brief default memory of application install
 *
 * 0 : Phone \n
 * 1 : SD card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_INSTALL_APPLICATIONS_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/install_applications"

/**
 * @brief default memory of wifi direct
 *
 * 0 : Phone \n
 * 1 : SD card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_WIFI_DIRECT_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/wifi_direct"


/**
 * @brief default memory of bluetooth
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_BLUETOOTH_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/bluetooth"

/**
 * @brief default memory of camera
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_CAMERA_INT                 VCONFKEY_SETAPPL_PREFIX"/default_memory/camera"

/**
 * @brief default memory of voice recorder
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_VOICE_RECORDER_INT         VCONFKEY_SETAPPL_PREFIX"/default_memory/voice_recorder"

/**
 * @brief default memory of FM radio
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_FM_RADIO_INT               VCONFKEY_SETAPPL_PREFIX"/default_memory/fm_radio"

/**
 * @brief default memory of allshare
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_ALL_SHARE_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/all_share"

/**
 * @brief default memory of DVB-H
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_DVB_H_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/dvb_h"

/**
 * @brief default memory of adobe air
 *
 * 0 : Phone \n
 * 1 : Memory card \n
 */
#define VCONFKEY_SETAPPL_DEFAULT_MEM_ADOBE_AIR_INT              VCONFKEY_SETAPPL_PREFIX"/default_memory/adobe_air"
/* memory - default memory */
enum {
	SETTING_DEF_MEMORY_PHONE = 0,
	SETTING_DEF_MEMORY_MMC,
	SETTING_DEF_MEMORY_MAX
};


/**
 * @brief status of battery percentage
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_BATTERY_PERCENTAGE_BOOL                VCONFKEY_SETAPPL_PREFIX"/battery_percentage"

/**
 * @brief status of accessibility
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_ACCESSIBILITY            VCONFKEY_SETAPPL_PREFIX"/accessibility/accessibility"

/**
 * @brief status of negative colors
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_HIGH_CONTRAST            VCONFKEY_SETAPPL_PREFIX"/accessibility/high_contrast"

/**
 * @brief status of zoom
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_SCREEN_ZOOM              VCONFKEY_SETAPPL_PREFIX"/accessibility/screen_zoom"

/**
 * @brief current timezone id
 */
#define VCONFKEY_SETAPPL_TIMEZONE_ID                            VCONFKEY_SETAPPL_PREFIX"/timezone_id"

/**
 * @brief offset of timezone
 */
#define VCONFKEY_SETAPPL_TIMEZONE_INT                           VCONFKEY_SETAPPL_PREFIX"/timezone"

/**
 * @brief status of auto-rotate screen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ROTATE_LOCK_BOOL                       VCONFKEY_SETAPPL_PREFIX"/rotate_lock"

/**
 * @brief status of auto-rotate screen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_AUTO_ROTATE_SCREEN_BOOL                       VCONFKEY_SETAPPL_PREFIX"/auto_rotate_screen"

/**
 * @brief status of mono audio
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_MONO_AUDIO               VCONFKEY_SETAPPL_PREFIX"/accessibility/mono_audio"

/** @brief led playing file path */
#define VCONFKEY_SETAPPL_LED_PLAYING_PATH     			VCONFKEY_SETAPPL_PREFIX"/accessibility/led_playing_path"

/**
 * @brief type of displaying time
 *
 * 1 : 12 hour type \n
 * 2 : 24 hour type \n
 */
#define VCONFKEY_REGIONFORMAT_TIME1224	                        "db/menu_widget/regionformat_time1224"
enum {
	VCONFKEY_TIME_FORMAT_12 = 1,
	VCONFKEY_TIME_FORMAT_24
};

/**
 * @brief Image viewer slideshow interval time (secs)
 *
 * type : double
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_INTERVAL             VCONFKEY_SETAPPL_PREFIX"/gallery/interval_time"

/**
 * @brief Image viewer slideshow effect type
 *
 * type : string
 * Slide, Fade, Blind, Iris, Dissolve
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_EFFECT             VCONFKEY_SETAPPL_PREFIX"/gallery/ss_effect"

/**
 * @brief Image viewer slideshow repeat state
 *
 * type : bool
 * 0 : Slide show repeat
 * 1 : Slide show do not repeat
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_REPEAT             VCONFKEY_SETAPPL_PREFIX"/gallery/repeat_state"

/**
 * @brief Image viewer slideshow shuffle state
 *
 * type : bool
 * 0 : Normal list
 * 1 : Shuffled list
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_SHUFFLE             VCONFKEY_SETAPPL_PREFIX"/gallery/shuffle_state"

/**
 * @brief Image viewer slideshow music state
 *
 * type : bool
 * 0 : Use BG music
 * 1 : Do not use BG music
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_MUSIC_STATE		VCONFKEY_SETAPPL_PREFIX"/gallery/music_state"

/**
 * @brief Image viewer slideshow music path
 *
 * type : string
 */
#define VCONFKEY_SETAPPL_GALLERY_SLIDESHOW_MUSIC_PATH		VCONFKEY_SETAPPL_PREFIX"/gallery/ss_music"

/**
 * @brief Voicerecorder recording time limitation
 *
 * type : int
 * 0 : Unlimited
 * 1 : Limit for MMS
 */
#define VCONFKEY_SETAPPL_VOICERECORDER_TIME_LIMIT             VCONFKEY_SETAPPL_PREFIX"/voicerecorder/time_limit"

/**
 * @brief Voicerecorder recording quality
 *
 * type : int
 * 0 : Low quality
 * 1 : High quality
 */
#define VCONFKEY_SETAPPL_VOICERECORDER_QUALITY             VCONFKEY_SETAPPL_PREFIX"/voicerecorder/quality"

/**
 * @brief Voicerecorder GPS tagging
 *
 * type : bool
 * 0 : off
 * 1 : on
 */
#define VCONFKEY_SETAPPL_VOICERECORDER_GPS             VCONFKEY_SETAPPL_PREFIX"/voicerecorder/gps"

/**
 * @brief left attempts count of sim lock
 *
 * type : int
 * 0 : min count
 * 5 : max count
 */
#define VCONFKEY_SETAPPL_SIM_LOCK_ATTEMPTS_LEFT_INT	VCONFKEY_SETAPPL_PREFIX"/sim_lock_attempts_left"

/**
 * @brief status that font changed
 *
 * type : int
 * 0 : not changed
 * 5 : changed
 */
#define VCONFKEY_SETAPPL_FONT_CHANGED 		"memoroy/setting/font_changed"

/**
 * @brief status of flight mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_FLIGHT_MODE_BOOL           VCONFKEY_SETAPPL_PREFIX"/flight_mode"

/**
 * @brief current device name
 */
#define VCONFKEY_SETAPPL_DEVICE_NAME_STR            VCONFKEY_SETAPPL_PREFIX"/device_name"


/**
 * @brief status of sound
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SOUND_STATUS_BOOL          VCONFKEY_SETAPPL_PREFIX"/sound/sound_on"

/**
 * @brief status of vibration
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_VIBRATION_STATUS_BOOL      VCONFKEY_SETAPPL_PREFIX"/sound/vibration_on"

/**
 * @brief status of <vibrate when ringing>
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_VIBRATE_WHEN_RINGING_BOOL      VCONFKEY_SETAPPL_PREFIX"/sound/vibrate_when_ringing"

/**
 * @brief status of <vibrate when notification>
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_VIBRATE_WHEN_NOTIFICATION_BOOL      VCONFKEY_SETAPPL_PREFIX"/sound/vibrate_when_notification"

/**
 * @brief status of <haptic feedback>
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_HAPTIC_FEEDBACK_STATUS_BOOL      VCONFKEY_SETAPPL_PREFIX"/sound/haptic_feedback_on"

/**
 * @brief status of data roaming
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_STATE_DATA_ROAMING_BOOL    VCONFKEY_SETAPPL_PREFIX"/data_roaming"

/**
 * @brief status of motion activation
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_MOTION_ACTIVATION          VCONFKEY_SETAPPL_PREFIX"/motion_active"

/**
 * @brief status of use tilt
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_TILT                   VCONFKEY_SETAPPL_PREFIX"/use_tilt"

/**
 * @brief status of use tilt scroll
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_TILT_SCROLL                   VCONFKEY_SETAPPL_PREFIX"/use_tilt_scroll"

/**
 * @brief level of tilt
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_TILT_SENSITIVITY           VCONFKEY_SETAPPL_PREFIX"/tilt_sensitivity"

/**
 * @brief level of tilt scroll
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_TILT_SCROLL_SENSITIVITY           VCONFKEY_SETAPPL_PREFIX"/tilt_scroll_sensitivity"

/**
 * @brief status of use panning
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PANNING                VCONFKEY_SETAPPL_PREFIX"/use_panning"

/**
 * @brief status of use panning to browse
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PANNING_BROWSER                VCONFKEY_SETAPPL_PREFIX"/use_panning_browser"

/**
 * @brief level of panning
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_PANNING_SENSITIVITY        VCONFKEY_SETAPPL_PREFIX"/panning_sensitivity"

/**
 * @brief level of panning browser
 *
 * 0 : MIN \n
 * 7 : MAX \n
 */
#define VCONFKEY_SETAPPL_PANNING_BROWSER_SENSITIVITY        VCONFKEY_SETAPPL_PREFIX"/panning_browser_sensitivity"

/**
 * @brief status of use double tap
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_DOUBLE_TAP             VCONFKEY_SETAPPL_PREFIX"/use_double_tap"

/**
 * @brief status of use turn over
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_TURN_OVER              VCONFKEY_SETAPPL_PREFIX"/use_turn_over"

/**
 * @brief status of use pick up
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PICK_UP                VCONFKEY_SETAPPL_PREFIX"/use_pick_up"

/**
 * @brief status of use pick up call
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_PICK_UP_CALL                VCONFKEY_SETAPPL_PREFIX"/use_pick_up_call"

/**
 * @brief status of use shake
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_USE_SHAKE                  VCONFKEY_SETAPPL_PREFIX"/use_shake"

/**
 * @brief function of muting sounds by covering screen with your hand when play media
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PALM_TOUCH_MUTE            VCONFKEY_SETAPPL_PREFIX"/motion/palm_touch_mute"

/**
 * @brief function of capture screen by swiping it from right left or vice versa with the side of your hand
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_PALM_SWIP_CAPTURE          VCONFKEY_SETAPPL_PREFIX"/motion/palm_swipe_capture"

/**
 * @brief current background image file path
 *
 * Value : BG image file path
 */
#define VCONFKEY_BGSET                              "db/menu_widget/bgset"

/**
 * @brief activate Driving mode
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_DRIVINGMODE		VCONFKEY_SETAPPL_PREFIX"/drivingmode/drivingmode"

/**
 * @brief activate Driving mode only for incoming call
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_INCOMINGCALL		VCONFKEY_SETAPPL_PREFIX"/drivingmode/incomingcall"

/**
 * @brief activate Driving mode only for message
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_MESSAGE			VCONFKEY_SETAPPL_PREFIX"/drivingmode/message"

/**
 * @brief activate Driving mode only for new email
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_NEWEMAILS			VCONFKEY_SETAPPL_PREFIX"/drivingmode/newemails"

/**
 * @brief activate Driving mode only for new voicemail
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_NEWVOICEMAILS		VCONFKEY_SETAPPL_PREFIX"/drivingmode/newvoicemails"

/**
 * @brief activate Driving mode only for alarm
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_ALARM				VCONFKEY_SETAPPL_PREFIX"/drivingmode/alarm"

/**
 * @brief activate Driving mode only for schedule
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_SCHEDULE			VCONFKEY_SETAPPL_PREFIX"/drivingmode/schedule"

/**
 * @brief activate Driving mode only for unlockscreen
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_DRIVINGMODE_UNLOCKSCREEN		VCONFKEY_SETAPPL_PREFIX"/drivingmode/unlockscreen"

/**
 * @brief developer options - how many background processes are allowed for an app
 *
 * 0 : Standard limit \n
 * 1 : No background process \n
 * 2 : 1 process at most \n
 * 3 : 2 process at most \n
 * 4 : 3 process at most \n
 * 5 : 4 process at most \n
 */
#define VCONFKEY_SETAPPL_DEVOPTION_BGPROCESS		VCONFKEY_SETAPPL_PREFIX"/devoption/bgprocess"

/**
 * @brief activate Smart Rotation
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SMARTSCREEN_SMART_ROTATION VCONFKEY_SETAPPL_PREFIX"/smartscreen/smart_rotation"

/**
 * @brief activate Smart Stay
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SMARTSCREEN_SMARTSTAY_STATUS   VCONFKEY_SETAPPL_PREFIX"/smartscreen/smart_stay"

/**
 * @brief activate Smart Stay Reminder
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SMARTSCREEN_SMARTSTAY_STATUS_REMINDER   VCONFKEY_SETAPPL_PREFIX"/smartscreen/smart_stay_r"


/**
 * @brief activate Smart Status Reminder
 *
 * 0 : Off \n
 * 1 : On \n
 */
#define VCONFKEY_SETAPPL_SMARTSCREEN_SMARTROTATE_STATUS_REMINDER VCONFKEY_SETAPPL_PREFIX"/smartscreen/smart_rotation_r"

/**
 * @brief Blockingmode allday state
 *
 * 0 : Off
 * 1 : On
 */
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_ALLDAY VCONFKEY_SETAPPL_PREFIX"/blockingmode/allday"

/**
 * @brief Blockingmode alarm_and_timer state
 *
 * 0 : Off
 * 1 : On
 */
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_ALARM_AND_TIMER VCONFKEY_SETAPPL_PREFIX"/blockingmode/alarm_and_timer"

/**
 * @brief Blockingmode notifications state
 *
 * 0 : Off
 * 1 : On
 */
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_NOTIFICATIONS VCONFKEY_SETAPPL_PREFIX"/blockingmode/notifications"

/**
 * @brief Blockingmode incomingcall state
 *
 * 0 : Off
 * 1 : On
 */
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_INCOMINGCALL VCONFKEY_SETAPPL_PREFIX"/blockingmode/incomingcall"

/**
 * @brief Blockingmode state
 *
 * 0 : Off
 * 1 : On
 */
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_BLOCKINGMODE VCONFKEY_SETAPPL_PREFIX"/blockingmode/blockingmode"

/**
* @brief Blockingmode allowed contact type
* 0: None
* 1: All contacts
* 2: Favorites
* 3: Custom
*/
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_ALLOWED_CONTACT_TYPE VCONFKEY_SETAPPL_PREFIX"/blockingmode/allowed_contact_type"

 /** @brief Blockingmode allowed contact list (string) **/
 #define VCONFKEY_SETAPPL_BLOCKINGMODE_ALLOWED_CONTACT_LIST VCONFKEY_SETAPPL_PREFIX"/blockingmode/allowed_contact_list"

/**
 * @brief current selected engine type
 *
 * 0 : HW engine
 * 1 : SW engine
 */
#define VCONFKEY_SETAPPL_DEFAULT_RENDERING_ENGINE_TYPE_INT		VCONFKEY_SETAPPL_PREFIX"/default_rendering_engine"
enum {
        SETTING_RENDERING_ENGINE_HW = 0,
        SETTING_RENDERING_ENGINE_SW,
        SETTING_RENDERING_ENGINE_MAX
};

/**
 * @brief most recent opened menu name
 *
 * menu name string(string)
 *
 */
#define VCONFKEY_SETAPPL_MOST_RECENTLY_SETTING VCONFKEY_SETAPPL_PREFIX"/most_recently_setting"

/**
 * @brief frequently used menu names (max 3 menus)
 *
 * menu name; menu name; menu name string(string)
 *
 */
#define VCONFKEY_SETAPPL_FREQUENTLY_SETTINGS VCONFKEY_SETAPPL_PREFIX"/frequently_settings"

/**
 * @brief data usage > input on data limit
 *
 * typed limited data size(int)
 *
 */
#define VCONFKEY_SETAPPL_DATA_LIMIT_INT VCONFKEY_SETAPPL_PREFIX"/data_limit"

/**
 * @brief network > plmn info for network list, access tech
 *
 * telnet plmn list(int)
 *
 */
#define VCONFKEY_SETAPPL_SELECT_OLD_NT_ACT VCONFKEY_SETAPPL_PREFIX"/select_network_act"

/**
 * @brief language > change language region auto or not
 *
 * 0 : automatic
 * 1 : custom
 *
 */
#define VCONFKEY_SETAPPL_LANG_AUTOMATIC_BOOL VCONFKEY_SETAPPL_PREFIX"/lang_automatic"

/**
 * @brief blockingmode > start alarm minute
 *
 * setted start alarm minute time
 *
 */
#define VCONFKEY_SETAPPL_BM_START_MIN VCONFKEY_SETAPPL_PREFIX"/blockingmode/start_min"

/**
 * @brief blockingmode > end alarm minute
 *
 * setted end alarm minute time
 *
 */
#define VCONFKEY_SETAPPL_BM_END_MIN VCONFKEY_SETAPPL_PREFIX"/blockingmode/end_min"

/**
 * @brief blockingmode > end alarm hour
 *
 * setted end alarm hour time
 *
 */
#define VCONFKEY_SETAPPL_BM_END_HOUR VCONFKEY_SETAPPL_PREFIX"/blockingmode/end_hour"

/**
 * @brief blockingmode > registed end alarm id for launching blockingmode alarm
 *
 * registed alarm id digit for end alarm
 *
 */
#define VCONFKEY_SETAPPL_BM_ALARM_ID_END VCONFKEY_SETAPPL_PREFIX"/blockingmode/end_alarm_id"

/**
 * @brief blockingmode > registed start alarm id for launching blockingmode alarm
 *
 * registed alarm id digit for start alarm
 *
 */
#define VCONFKEY_SETAPPL_BM_ALARM_ID_START VCONFKEY_SETAPPL_PREFIX"/blockingmode/start_alarm_id"

/**
 * @brief blockingmode > start alarm hour
 *
 * setted start alarm hour time
 *
 */
#define VCONFKEY_SETAPPL_BM_START_HOUR VCONFKEY_SETAPPL_PREFIX"/blockingmode/start_hour"

/**
 * @brief blockingmode > alarm and timer flag for reminder
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_BM_INTER_ALARM_AND_TIMER VCONFKEY_SETAPPL_PREFIX"/blockingmode/inter/alarm_and_timer"

/**
 * @brief blockingmode > incomingcall flag for reminder
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_BM_INTER_INCOMING_CALL VCONFKEY_SETAPPL_PREFIX"/blockingmode/inter/incomingcall"

/**
 * @brief blockingmode > notification flag for reminder
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_BM_INTER_NOTIFICATIONS VCONFKEY_SETAPPL_PREFIX"/blockingmode/inter/notifications"

/**
 * @brief event notify status for instant messenger
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_TICKER_NOTI_SOUND_IM VCONFKEY_SETAPPL_PREFIX"/ticker_noti/sound/im"

/**
 * @brief event notify status for email
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_TICKER_NOTI_SOUND_EMAIL VCONFKEY_SETAPPL_PREFIX"/ticker_noti/sound/email"

/**
 * @brief event notify status for messages
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_TICKER_NOTI_SOUND_MESSAGES VCONFKEY_SETAPPL_PREFIX"/ticker_noti/sound/messages"

/**
 * @brief data usage > data usage cycle
 *
 * Month / Week / Day
 *
 */
#define VCONFKEY_SETAPPL_DATA_USAGE_CYCLE_INT VCONFKEY_SETAPPL_PREFIX"/data_usage_cycle"

/**
 * @brief store the roaming check status
 *
 * Month / Week / Day
 *
 */
#define VCONFKEY_SETAPPL_DATA_USAGE_ROAMING_STATUS VCONFKEY_SETAPPL_PREFIX"/data_usage_roaming_status"



/**
 * @brief in/out profile flag
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_IOPROFILE VCONFKEY_SETAPPL_PREFIX"/ioprofile"

/**
 * @brief activate data usage limit
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_SET_DATA_USAGE_LIMIT_BOOL VCONFKEY_SETAPPL_PREFIX"/set_data_usage_limit"

/**
 * @brief Accessibility setting : tap hold delay
 *
 * delay type string
 *
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_TAP_HOLD_DELAY_STR VCONFKEY_SETAPPL_PREFIX"/accessibility/taphold_delay"

/**
 * @brief Accessibility setting : status of speak password
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_ACCESSIBILITY_SPEAK_PASSWD_BOOL VCONFKEY_SETAPPL_PREFIX"/accessibility/speak_passwd"

/**
 * @brief Accessibility setting : sound balance slider value
 *
 * sound balance slider value
 *
 */
#define VCONFKEY_SETAPPL_SOUND_BALANCE_INT VCONFKEY_SETAPPL_PREFIX"/accessibility/sound_balance"

/**
 * @brief About : selected phone num
 *
 * selected about phone number string
 *
 */
#define VCONFKEY_SETAPPL_SELECTED_NUM VCONFKEY_SETAPPL_PREFIX"/selected_num"

/**
 * @brief Screen mode : selected screen mode str
 *
 * "Dynamic", "Standard", "Movie"
 *
 */
#define VCONFKEY_SETAPPL_SCREENMODE_SELNAME VCONFKEY_SETAPPL_PREFIX"/screenmode/selected_name"

/**
 * @brief lcd timeout selected time
 *
 * 0 : Immediately
 * 15 : 15 seconds
 * 30 : 30 seconds
 * 60 : 1 minute
 * 120 : 2 minutes
 * 300 : 5 minutes
 * 600 : 10 minites
 *
 */
#define VCONFKEY_LCD_TIMEOUT_NORMAL_BACKUP VCONFKEY_SETAPPL_PREFIX"/lcd_timeout_normal_backup"

/**
 * @brief led indicator setting : activate led indicator charging
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_LED_INDICATOR_CHARGING VCONFKEY_SETAPPL_PREFIX"/led_indicator/charging"

/**
 * @brief led indicator setting : activate led indicator low battery
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_LED_INDICATOR_LOW_BATT VCONFKEY_SETAPPL_PREFIX"/led_indicator/low_batt"

/**
 * @brief led indicator setting : activate led indicator notifications
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_LED_INDICATOR_NOTIFICATIONS VCONFKEY_SETAPPL_PREFIX"/led_indicator/notifications"

/**
 * @brief led indicator setting : activate led indicator voice recording
 *
 * 0 : off
 * 1 : on
 *
 */
#define VCONFKEY_SETAPPL_LED_INDICATOR_VOICE_REC VCONFKEY_SETAPPL_PREFIX"/led_indicator/voice_rec"

/**
 * @brief activate hold rotate(disable rotate : on)
 *
 * 0 : off
 * 1 : on (disable the rotation function)
 */
#define VCONFKEY_SETAPPL_ROTATE_HOLD_BOOL VCONFKEY_SETAPPL_MEM_PREFIX"/rotate_hold"

/**
 * @}
 */
#define VCONFKEY_SETAPPL_SETTING_FONT_NAME  VCONFKEY_SETAPPL_MEM_PREFIX"/tmp_font_name"
/**
 * @brief font update setting:active font update once name is changed.
 */

 /**
 * @brief ps(power saving) mode status
 * type : int
 * 0 : normal mode, SETTING_PSMODE_NORMAL
 * 1 : powerful mode, SETTING_PSMODE_POWERFUL
 * 2 : emergency mode, SETTING_PSMODE_EMERGENCY
 * 3 : power saver(for wearable device), SETTING_PSMODE_WEARABLE
 *
 */
#define VCONFKEY_SETAPPL_PSMODE VCONFKEY_SETAPPL_PREFIX"/psmode"
enum {
	SETTING_PSMODE_NORMAL = 0,
	SETTING_PSMODE_POWERFUL = 1,
	SETTING_PSMODE_ADVISOR = 1,
	SETTING_PSMODE_SURVIVAL = 2,
	SETTING_PSMODE_EMERGENCY = 2,
	SETTING_PSMODE_WEARABLE = 3,
	SETTING_PSMODE_MAX
};

/**
 * @brief color blind status : colorblind is applied to system, (share with system)
 *
 * 0 : off (not applied)
 * 1 : on (applied)
 *
 */
#define VCONFKEY_SETAPPL_COLORBLIND_STATUS_BOOL		VCONFKEY_SETAPPL_PREFIX"/colorblind/status"

/**
 * @brief chip array numbers : 15 chips's numbers are arrayed, (use setting only)
 *
 * "010203040506070809101112131415"
 *
 */
#define VCONFKEY_SETAPPL_COLORBLIND_CHIP_ARRAY_STR	VCONFKEY_SETAPPL_PREFIX"/colorblind/chip_array"

/**
 * @brief rgbcmy : the last applied rgbcmy values for colorblind, (share with system)
 *
 * "fe0100ff00ff01feff006d9001fe00fffe00"
 *
 */
#define VCONFKEY_SETAPPL_COLORBLIND_LAST_RGBCMY_STR	VCONFKEY_SETAPPL_PREFIX"/colorblind/rgbcmy"

/**
 * @brief user adjustment level of color blind : user adjusts slider for color blind (use setting only)
 *
 * MIN : 0.0
 * MAX : 1.0
 *
 */
#define VCONFKEY_SETAPPL_COLORBLIND_USER_ADJUSTMENT_DOUBLE	VCONFKEY_SETAPPL_PREFIX"/colorblind/user_adjustment"

/**
 * @brief mmc encryption status : mmc encryption is enabled or not, (share with system)
 *
 * 0 : disabled
 * 1 : enabled
 *
 */
#define VCONFKEY_SETAPPL_MMC_ENCRYPTION_STATUS_BOOL         VCONFKEY_SETAPPL_PREFIX"/mmc_encryption/status"

/**
 * @brief store the myplace home location info
 *
 * latitude,longitude,map_img_path
 *
 */
#define VCONFKEY_SETAPPL_MYPLACE_HOME VCONFKEY_SETAPPL_PREFIX"/myplace_home"

/**
 * @brief store the myplace office location info
 *
 * latitude,longitude,map_img_path
 *
 */
#define VCONFKEY_SETAPPL_MYPLACE_OFFICE VCONFKEY_SETAPPL_PREFIX"/myplace_office"

/**
 * @brief activate screen automatic unlock when flip SViewer cover
 *
 * 0 : off
 * 1 : on (enable automatic unlock)
 */
#define VCONFKEY_SETAPPL_ACCESSORY_AUTOMATIC_UNLOCK VCONFKEY_SETAPPL_PREFIX"/accessories/atuomatic_unlock"

/**
 * @brief enable/disable "dock sound"
 *
 * 0 : off
 * 1 : on (enable dock sound)
 */
#define VCONFKEY_SETAPPL_ACCESSORY_DOCK_SOUND VCONFKEY_SETAPPL_PREFIX"/accessories/dock_sound"

/**
 * @brief enable/disable "Audio output mode"
 *
 * 0 : off
 * 1 : on (enable Audio output mode)
 */
#define VCONFKEY_SETAPPL_ACCESSORY_AUDIO_OUTPUT_MODE VCONFKEY_SETAPPL_PREFIX"/accessories/audio_output_mode"

/**
 * @brief show/unshow help info when enable "Audio output mode"
 *
 * 0 : show message
 * 1 : never show message
 */
#define VCONFKEY_SETAPPL_ACCESSORY_AUDIO_OUTPUT_MODE_REMINDER VCONFKEY_SETAPPL_PREFIX"/accessories/audio_output_mode_reminder"

/**
 * @brief enable/disable "Desk home screen display"
 *
 * 0 : off
 * 1 : on (enable Desk home screen display)
 */
#define VCONFKEY_SETAPPL_ACCESSORY_DESK_HOME_SCREEN_DISPLAY VCONFKEY_SETAPPL_PREFIX"/accessories/desk_home_screen_display"

/**
 * @brief current Audio output type(int)
 *
 * 0 : Stereo
 * 1 : Surround
 */
#define VCONFKEY_SETAPPL_ACCESSORY_AUDIO_OUTPUT VCONFKEY_SETAPPL_PREFIX"/accessories/audio_output"

/**
 * @brief enable/disable "HDMI applications"
 *
 * 0 : off
 * 1 : on (enable HDMI applications)
 */
#define VCONFKEY_SETAPPL_ACCESSORY_HDMI_APPLICATIONS VCONFKEY_SETAPPL_PREFIX"/accessories/hdmi_application"

/**
 * @brief enable/disable "Audio applications"
 *
 * 0 : off
 * 1 : on (enable Audio applications)
 */
#define VCONFKEY_SETAPPL_ACCESSORY_AUDIO_APPLICATIONS VCONFKEY_SETAPPL_PREFIX"/accessories/audio_applications"

/**
 * @brief store the value for "touch key light duration"
 *
 *  90: 1.5 seconds
 * 360: 6 seconds
 *   0: always off
 *  -1: always on
 */
#define VCONFKEY_SETAPPL_TOUCHKEY_LIGHT_DURATION VCONFKEY_SETAPPL_PREFIX"/display/touchkey_light_duration"
enum {
	SETTING_TOUCHKEY_LIGIT_DURATION_90SEC = 90,
	SETTING_TOUCHKEY_LIGIT_DURATION_360SEC = 360,
	SETTING_TOUCHKEY_LIGIT_DURATION_ALWAYS_OFF = 0,
	SETTING_TOUCHKEY_LIGIT_DURATION_ALWAYS_ON = -1
};
/**
 * @brief store the location where captured image will be saved("screen capture destination")
 *	type: int
 *	0: Gallery
 *	1: KeepIt
 *
 */
#define VCONFKEY_SETAPPL_SCREEN_CAPTURE_DESTINATION VCONFKEY_SETAPPL_PREFIX"/display/screen_capture_destination"
enum {
	SETTING_SCREEN_CAPTURE_DESTINATION_ASK = 0,
	SETTING_SCREEN_CAPTURE_DESTINATION_GALLERY = 1,
	SETTING_SCREEN_CAPTURE_DESTINATION_KEEPIT = 2
};

/**
 * @brief activate the function "Edit after screen capture"
 *  type: bool
 *  0: off
 *  1: on(enable "Edit after screen capture")
 *
 */
#define VCONFKEY_SETAPPL_SCREEN_CAPTURE_EDIT_AFTER_CAPTURE VCONFKEY_SETAPPL_PREFIX"/display/edit_after_screen_capture"

/**
 * @brief Network restriction mode
 *
 * type : bool
 *
 * 0 : Off
 * 1 : On
 */
#define VCONFKEY_SETAPPL_NETWORK_RESTRICT_MODE	VCONFKEY_SETAPPL_PREFIX"/network_restrict_mode"

/**
 * @brief whether blockingmode led indicator is enabled or not
 *
 * type : bool
*/
#define VCONFKEY_SETAPPL_BLOCKINGMODE_LED_INDICATOR VCONFKEY_SETAPPL_PREFIX"/blockingmode/led_indicator"

/**
 * @brief whether 3g data enable/disable regarding LCD on/off
 *
 * type : bool
*/
#define VCONFKEY_SETAPPL_TURN_OFF_3G_DURING_LCD_OFF VCONFKEY_SETAPPL_PREFIX"/3g_turn_off_during_lcd_off"

/**
 * @brief blockingmode > led indicator flag for reminder
 *
 * type : bool
*/
#define VCONFKEY_SETAPPL_BM_INTER_LED_INDICATOR VCONFKEY_SETAPPL_PREFIX"/blockingmode/inter/led_indicator"

/**
 * @brief LCD frequecny can be changed for power saving
 *
 * type : bool(off, on)
*/
#define VCONFKEY_SETAPPL_LCD_FREQ_CONTROL VCONFKEY_SETAPPL_PREFIX"/lcd_freq_control"


/**
 * @brief HOME BG color type number
 *
 * type : int ( 1 ~ 4 )
**/
#define VCONFKEY_SETAPPL_HOME_BG_COLOR_TYPE_INT		"db/setting/home_bg_color_type"

/**
 * @brief Idle clock type number
 *
 * type : int ( 1 ~ 9 )
**/
#define VCONFKEY_SETAPPL_CLOCK_TYPE_INT                 "db/setting/idle_clock_type"

/**
 * @brief This is alert hourly.
 *
 * type : bool (off, on)
**/
#define VCONFKEY_SETAPPL_HOURLY_ALERT_BOOL              "db/setting/hourly_alert"

/**
 * @brief Left or Right arm. that is perfered arm.
 *
 * type : bool ( 0:left, 1:right )
**/
#define VCONFKEY_SETAPPL_PERFERED_ARM_LEFT_BOOL         "db/setting/prefer_arm_left"

/**
 * @brief Wake up guesture of motion functions
 *
 * type : int ( 0:off, 1:clock, 2:last viewd screen )
**/
#define VCONFKEY_SETAPPL_MOTIONS_WAKE_UP_GESTURE_INT	"db/setting/motion_wake_up_guesture"
enum {
	SETTING_WAKE_UP_GESTURE_OFF = 0,
	SETTING_WAKE_UP_GESTURE_CLOCK = 1,
	SETTING_WAKE_UP_GESTURE_LAST_VIEWED_SCREEN = 2
};
/**
 * @brief Smart relay of motion functions
 *
 * type : bool ( off, on )
**/
#define VCONFKEY_SETAPPL_MOTIONS_SMART_RELAY_BOOL	"db/setting/motion_smart_relay"

/**
 * @brief Type of homescreen layout
 *
 * type : int (0 : 1x1, 1 : 2x2)
**/
#define VCONFKEY_SETAPPL_HOMESCREEN_TYPE_INT		"db/setting/homescreen_type"
enum {
	SETTING_HOMESCREEN_TYPE_1_1 = 0,
	SETTING_HOMESCREEN_TYPE_2_2 = 1
};

/**
 * @brief Default app for double pressing power key
 *
 * type : string for app id
**/
#define VCONFKEY_SETAPPL_DEFAULT_APP_STR		"db/setting/default_app"

/**
 * @brief degree of screen rotation
 *
 * type : int (0 : 0 / 1 : 90 / 2 : 180 / 3: 270)
**/
#define VCONFKEY_SETAPPL_SCREENROTATION_DEG_INT		"db/setting/screen_rotation"
enum {
	SETTING_SCREENROTATION_0_DEGREE = 0,
	SETTING_SCREENROTATION_90_DEGREE = 1,
	SETTING_SCREENROTATION_180_DEGREE = 2,
	SETTING_SCREENROTATION_270_DEGREE = 3
};

/**
 * @brief Home screen bg set, color or image
 *
 * type : int ( 0:bg color, 1:set wallpaper image )
**/
#define VCONFKEY_SETAPPL_HOMESCREEN_BG_INT	"db/setting/homescreen_bg"
enum {
	SETTING_HOMESCREEN_BG_SET_COLOR = 0,
	SETTING_HOMESCREEN_BG_SET_IMAGE = 1
};

/**
 * @brief Privacy lock type
 *
 * type: int
**/
#define VCONFKEY_SETAPPL_PRIVACY_LOCK_TYPE_INT		"db/setting/lock_type"
enum {
	SETTING_PRIVACY_LOCK_TYPE_NONE = 0,
	SETTING_PRIVACY_LOCK_TYPE_PATTERN = 1
};

/**
 * @brief Privacy lock visibility
 *
 * type: bool ( 0: disable, 1: enable )
**/
#define VCONFKEY_SETAPPL_PRIVACY_LOCK_ENABLE_BOOL	"db/setting/see_pattern"

/**
 * @brief support Emergency
 *
 * type: bool ( 0: not supported, 1: supported )
**/
#define VCONFKEY_SETAPPL_SUPPORT_EMERGENCY_BOOL	"db/setting/support_emergency"

/**
 * @brief Emergency mode status
 *
 * type: bool ( 0: off, 1: on )
**/
#define VCONFKEY_SETAPPL_EMERGENCY_STATUS_BOOL	"db/setting/emergency_status"

/**
 * @brief Wake up gesture status for emergency
 *
 * type : int ( 0:off )
**/
#define VCONFKEY_SETAPPL_EMERGENCY_WAKE_UP_GESTURE_INT	"db/setting/emergency_wakeup_gesture"

/**
 * @brief Brightness value for emergency
 *
 * type : int ( lowest : 1 )
**/
#define VCONFKEY_SETAPPL_EMERGENCY_LCD_BRIGHTNESS_INT	"db/setting/emergency_brightness"

/**
 * @brief Screen timeout value for emergency
 *
 * type : int ( shortest : 10sec )
**/
#define VCONFKEY_SETAPPL_EMERGENCY_LCD_TIMEOUT_INT	"db/setting/emergency_lcd_timeout"

/**
 * @brief Ringtone path for emergency
 *
 * type : string
 *
 */
#define VCONFKEY_SETAPPL_EMERGENCY_RINGTONE_STR		"db/setting/emergency_ringtone"

/**
 * @brief Wake up gesture status for emergency
 *
 * type : int ( 0:off )
**/
#define VCONFKEY_SETAPPL_PWS_WAKE_UP_GESTURE_INT	"db/setting/pws_wakeup_gesture"

/**
 * @brief Brightness value for emergency
 *
 * type : int ( lowest : 1 )
**/
#define VCONFKEY_SETAPPL_PWS_LCD_BRIGHTNESS_INT	"db/setting/pws_brightness"

/**
 * @brief Screen timeout value for emergency
 *
 * type : int ( shortest : 10sec )
**/
#define VCONFKEY_SETAPPL_PWS_LCD_TIMEOUT_INT	"db/setting/pws_lcd_timeout"

/**
 * @brief Ringtone path for emergency
 *
 * type : string
 *
 */
#define VCONFKEY_SETAPPL_PWS_RINGTONE_STR		"db/setting/pws_ringtone"


#endif	/* __VCONF_INTERNAL_SETTING_KEYS_H__ */

