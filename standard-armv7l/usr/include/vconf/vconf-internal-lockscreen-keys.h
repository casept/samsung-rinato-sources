/*
 * vconf-internal-lockscreen-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_LOCKSCREEN_KEYS_H__
#define __VCONF_INTERNAL_LOCKSCREEN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-lockscreen-keys.h
 * @defgroup    vconf_internal_lockscreen-key Definitions of internal shared Keys for lockscreen
 * @ingroup     vconf_internal_key
 * @author      Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, youngsub Ko <ys4610.ko@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for lockscreen \n
 */

/* ========================== lockscreen Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_lockscreen_key
 * @{
 * @brief lockscreen Keys & Values\n
 *        Maintainer : Seungtaek Chung <seungtaek.chung@samsung.com>, Mi-Ju Lee <miju52.lee@samsung.com>, Xi Zhichan <zhichan.xi@samsung.com>, YoungSub Ko <ys4610.ko@samsung.com>
 */

/**
 * @brief whether phone lock is verified
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_PHONE_LOCK_VERIFICATION	"memory/lockscreen/phone_lock_verification"

/**
 * @brief whether context aware notification is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_CONTEXT_AWARE_NOTIFICATION_DISPLAY	"db/lockscreen/context_aware_notification_display"

/**
 * @brief whether camera quick access is operated or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_CAMERA_QUICK_ACCESS	"db/lockscreen/camera_quick_access"

/**
 * @brief whether clock is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_CLOCK_DISPLAY	"db/lockscreen/clock_display"

/**
 * @brief whether dual clock is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_DUAL_CLOCK_DISPLAY	"db/lockscreen/dual_clock_display"

/**
 * @brief dual clock timezone id
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_DUAL_CLOCK_TIMEZONE_ID	"db/lockscreen/dual_clock_timezone_id"

/**
 * @brief dual clock timezone offset
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_DUAL_CLOCK_TIMEZONE		"db/lockscreen/dual_clock_timezone"

/**
 * @brief whether help text is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_HELP_TEXT_DISPLAY	"db/lockscreen/help_text_display"

/**
 * @brief whether title is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_TITLE_DISPLAY	"db/lockscreen/title_display"

/**
 * @brief whether total briefings are displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_BRIEFING_DISPLAY	"db/lockscreen/briefing_display"

/**
 * @brief whether music controller is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_MUSIC_CONTROLLER_DISPLAY	"db/lockscreen/music_controller_display"

/**
 * @brief whether event notification is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_EVENT_NOTIFICATION_DISPLAY	"db/lockscreen/event_notification_display"

/**
 * @brief whether weather is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_WEATHER_DISPLAY	"db/lockscreen/weather_display"

/**
 * @brief whether news is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_NEWS_DISPLAY	"db/lockscreen/news_display"

/**
 * @brief whether SNS is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_SNS_DISPLAY	"db/lockscreen/sns_display"

/**
 * @brief whether schedule is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_SCHEDULE_DISPLAY	"db/lockscreen/schedule_display"

/**
 * @brief whether shorcut is displayed or not
 *
 * type : bool
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT_DISPLAY	"db/lockscreen/shortcut_display"

/**
 * @brief theme style displayed in lockscreen
 *
 * 0 : Default style \n
 * 1 : Style 1 \n
 * 2 : Style 2 \n
 * 3 : Style 3 \n
 * 4 : Style 4 \n
 * 5 : Style 5 \n
 * 6 : Style 6 \n
 * 7 : Style 7 \n
 * ...
 */
#define VCONFKEY_LOCKSCREEN_STYLE	"db/lockscreen/style"
/* lockscreen style */
enum {
		LOCKSCREEN_STYLE_DEFAULT = 0,
		LOCKSCREEN_STYLE_1,
		LOCKSCREEN_STYLE_2,
		LOCKSCREEN_STYLE_3,
		LOCKSCREEN_STYLE_4,
		LOCKSCREEN_STYLE_5,
		LOCKSCREEN_STYLE_6,
		LOCKSCREEN_STYLE_7,
		LOCKSCREEN_STYLE_MAX
};

/**
 * @brief 1st style color value.
 *
 * type : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_1_COLOR	"db/lockscreen/style_1_color"

/**
 * @brief 2nd style color value.
 *
 * tyle : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_2_COLOR	"db/lockscreen/style_2_color"

/**
 * @brief 3rd style color value.
 *
 * tyle : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_3_COLOR	"db/lockscreen/style_3_color"

/**
 * @brief 4th style color value.
 *
 * tyle : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_4_COLOR	"db/lockscreen/style_4_color"

/**
 * @brief 5th style color value.
 *
 * tyle : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_5_COLOR	"db/lockscreen/style_5_color"

/**
 * @brief 6th style color value.
 *
 * tyle : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_6_COLOR	"db/lockscreen/style_6_color"

/**
 * @brief 7th style color value.
 *
 * tyle : integer
*/
#define VCONFKEY_LOCKSCREEN_STYLE_7_COLOR	"db/lockscreen/style_7_color"

/**
 * @brief first package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT1	"file/lockscreen/shortcut1"

/**
 * @brief second package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT2	"file/lockscreen/shortcut2"

/**
 * @brief third package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT3	"file/lockscreen/shortcut3"

/**
 * @brief fourth package name displayed  in shortcut
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_SHORTCUT4	"file/lockscreen/shortcut4"

/**
 * @brief title string displayed in lockscreen
 *
 * type : string
*/
#define VCONFKEY_LOCKSCREEN_TITLE	"file/lockscreen/title"

/**
 * @brief lockscreen display status
 *
 * type : bool
 * 0 : not displayed  state
 * 1 : displayed state
*/
#define VCONFKEY_LOCKSCREEN_STATE	"memory/lockscreen/display_state"

#endif	/* __VCONF_INTERNAL_LOCKSCREEN_KEYS_H__ */
