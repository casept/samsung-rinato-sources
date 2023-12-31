/*
 * deviced
 *
 * Copyright (c) 2012 - 2013 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef __DD_DISPLAY_H__
#define __DD_DISPLAY_H__

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file        dd-display.h
 * @defgroup    CAPI_SYSTEM_DEVICED_DISPLAY_MODULE Display
 * @ingroup     CAPI_SYSTEM_DEVICED
 * @brief       This file provides the API for control of display
 * @section CAPI_SYSTEM_DEVICED_DISPLAY_MODULE_HEADER Required Header
 *   \#include <dd-display.h>
 */

/**
 * @addtogroup CAPI_SYSTEM_DEVICED_DISPLAY_MODULE
 * @{
 */

#include "dd-common.h"

/**
 * LCD state
 */
#define LCD_NORMAL	0x1	/**< NORMAL state */
#define LCD_DIM		0x2	/**< LCD dimming state */
#define LCD_OFF		0x4	/**< LCD off state */
#define SUSPEND		0x8	/**< Sleep state */
#define POWER_OFF	0x16	/**< Sleep state */
#define SETALL (LCD_DIM | LCD_OFF | LCD_NORMAL)	/*< select all state - not supported yet */

/**
 * Parameters for display_lock_state()
 */
#define STAY_CUR_STATE	0x1
#define GOTO_STATE_NOW	0x2
#define HOLD_KEY_BLOCK	0x4
#define STANDBY_MODE	0x8

/**
 * Parameters for display_unlock_state()
 */
#define PM_SLEEP_MARGIN	0x0	/**< keep guard time for unlock */
#define PM_RESET_TIMER	0x1	/**< reset timer for unlock */
#define PM_KEEP_TIMER	0x2	/**< keep timer for unlock */

/**
 * @brief enhance - info, mode, scenario, tone, outdoor
 */
enum image_enhance_type {
	ENHANCE_MODE = 0,
	ENHANCE_SCENARIO,
	ENHANCE_TONE,
	ENHANCE_OUTDOOR,
};

/**
 * @brief mode - dynamic, standard, natural, movie
 */
enum image_enhance_mode {
	MODE_DYNAMIC = 0,
	MODE_STANDARD,
	MODE_NATURAL,
	MODE_MOVIE,
};

/**
 * @brief scenario - ui, gallery, video, vtcall, camera,
 *	browser, negative, bypass
 */
enum image_enhance_scenario {
	SCENARIO_UI = 0,
	SCENARIO_GALLERY,
	SCENARIO_VIDEO,
	SCENARIO_VTCALL,
	SCENARIO_CAMERA,
	SCENARIO_BROWSER,
	SCENARIO_NEGATIVE,
	SCENARIO_BYPASS,
};

/**
 * @brief tone - normal, warm, cold
 */
enum image_enhance_tone {
	TONE_NORMAL = 0,
	TONE_WARM,
	TONE_COLD,
};

/**
 * @brief outdoor - off, on
 */
enum image_enhance_outdoor {
	OUTDOOR_OFF = 0,
	OUTDOOR_ON,
};

/**
 * @brief auto tone - off, on
 */
enum auto_screen_tone {
	TONE_OFF = 0,
	TONE_ON,
};
/**
 * @par Description:
 * @todo
 */
struct blind_color_info {
    unsigned int RrCr;
    unsigned int RgCg;
    unsigned int RbCb;
    unsigned int GrMr;
    unsigned int GgMg;
    unsigned int GbMb;
    unsigned int BrYr;
    unsigned int BgYg;
    unsigned int BbYb;
};

/**
 * @brief This API is used to get number of displays on the phone.\n
 * @details It returns enum value which is the current number on success.\n
 *	Or a negative value(-1) is returned on failure.
 * @return 0 on success, -1 if failed
 * @par Example
 * @code
 *  ...
 *  ret = display_get_count();
 *  if( ret < 0 )
 *      printf("Fail to get number of displays\n");
 *  ...
 * @endcode
 */
int display_get_count(void);

/**
 * @brief This API is used to get the max brightness of the display.\n
 * @details It gets the current brightness of the display
 *	by calling device_get_property() function.\n
 *	It returns integer value which is the max brightness on success.\n
 *	Or a negative value(-1) is returned on failure
 * @return max brightness value on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  int max_brt;
 *  max_brt = display_get_max_brightness();
 *  if( max_brt < 0 )
 *      printf("Fail to get the max brightness of the display.\n");
 *  else
 *      printf("Max brightness of the display is %d\n", max_brt);
 *  ...
 * @endcode
 */
int display_get_max_brightness(void);

/**
 * @brief This API is used to get the min brightness of the display.\n
 * @details It gets the current brightness of the display
 *	by calling device_get_property() function.\n
 *	It returns integer value which is the min brightness on success.\n
 *	Or a negative value(-1) is returned on failure
 * @return min brightness value on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  int min_brt;
 *  min_brt = display_get_min_brightness();
 *  if( min_brt < 0 )
 *      printf("Fail to get the min brightness of the display.\n");
 *  else
 *      printf("Min brightness of the display is %d\n", min_brt);
 *  ...
 * @endcode
 */
int display_get_min_brightness(void);

/**
 * @brief This API is used to get the current brightness of the display.\n
 * @details It gets the current brightness of the display
 *	by calling device_get_property() function.\n
 *	It returns integer value which is the current brightness on success.\n
 *	Or a negative value(-1) is returned on failure.
 * @return current brightness value on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  int cur_brt;
 *  cur_brt = display_get_brightness();
 *  if( cur_brt < 0 )
 *      printf("Fail to get the current brightness of the display.\n");
 *  else
 *      printf("Current brightness of the display is %d\n", cur_brt);
 *  ...
 * @endcode
 */
int display_get_brightness(void);

/**
 * @brief This API is used to set the current brightness of the display
 *	and system brightness value in settings.\n
 * @details It sets the current brightness of the display
 *	by calling device_set_property() function.\n
 *	MUST use this API very carefully. \n
 *	This api is different from display_set_brightness api.\n
 *	display_set_brightness api will change only device brightness value.\n
 *	but this api will change device brightness
 *	as well as system brightness value.\n
 * @param[in] val brightness value that you want to set
 * @return 0 on success, negative if failed
 * @see display_set_brightness()
 * @par Example
 * @code
 *  ...
 *  if( display_set_brightness_with_setting(6) < 0 )
 *      printf("Fail to set the current brightness of the display\n");
 *  else
 *      printf("The current brightness of the display is set 6\n");
 *  ...
 * @endcode
 */
int display_set_brightness_with_setting(int val);

/**
 * @brief This API is used to set the current brightness of the display.\n
 * @details It sets the current brightness of the display
 *	by calling device_set_property() function.\n
 *	MUST use this API very carefully. \n
 *	you MUST set original brightness by display_release_brightness(),
 *	after you finish your job using this API.
 * @param[in] val brightness value that you want to set
 * @return 0 on success, negative if failed
 * @see display_get_brightness(), display_release_brightness()
 * @par Example
 * @code
 *  ...
 *  if( display_set_brightness(6) < 0 )
 *      printf("Fail to set the current brightness of the display\n");
 *  else
 *      printf("The current brightness of the display is set 6\n");
 *  ...
 * @endcode
 */
int display_set_brightness(int val);

/**
 * @brief This API is used to release brightness control.\n
 * @details It sets the current brightness of the display
 *	by calling device_set_property() function.\n
 *	MUST call this API after you finished the job
 *	which need to change the brightness.
 * @return 0 on success, negative if failed
 * @see display_set_brightness()
 * @par Example
 * @code
 *  ...
 *  org_val = display_get_brightness();
 *  display_set_brightness(1);
 *  ...
 *  ret = display_release_brightness();
 *  if( ret < 0 )
 *      printf("Fail to release brightness control\n");
 *  ...
 * @endcode
 */
int display_release_brightness(void);

/**
 * @brief This API is used to get the current state for acl.\n
 * @details It gets the current state for acl
 *	by calling device_get_property() function.\n
 * @return current status for acl(1 on, 0 off) on success, negative if failed
 * @see display_set_acl_status()
 * @par Example
 * @code
 *  ...
 *  int acl_stat;
 *  acl_stat = display_get_acl_status();
 *  if( acl_stat < 0 )
 *      printf("Fail to get the current status for acl.\n");
 *  else
 *      printf("Current status for acl is %d\n", cur_brt);
 *  ...
 * @endcode
 */
int display_get_acl_status(void);

/**
 * @brief This API is used to set the current status for acl.\n
 * @details It sets the current status for acl
 *	by calling device_set_property() function.\n
 * @param[in] val status for acl(1 on, 0 off) that you want to set
 * @return 0 on success, negative if failed
 * @see display_get_acl_status()
 * @par Example
 * @code
 *  ...
 *  if( display_set_acl_status(0) < 0 )
 *      printf("Fail to set the current status for acl\n");
 *  else
 *      printf("The current status for acl is set 6\n");
 *  ...
 * @endcode
 */
int display_set_acl_status(int val);

/**
 * @brief This API is used to get enhance mode supported.\n
 * @return 1 supported, 0 not supporter, negative if failed
 * @par Example
 * @code
 *  ...
 *  ret = display_get_image_enhance_info();
 *  if( ret < 0 )
 *      printf("Not support image enhance mode on this device\n");
 *  ...
 * @endcode
 */
int display_get_image_enhance_info(void);

/**
 * @brief This API is used to get enhance mode state.\n
 * @param[in] type enhance mode type
 * @return enum value of type on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  ret = display_get_image_enhance(ENHANCE_MODE);
 *  if( ret < 0 )
 *      printf("Fail to get current image enhance\n");
 *  ...
 * @endcode
 */
int display_get_image_enhance(int type);

/**
 * @brief This API is used to set enhance mode state.\n
 * @param[in] type enhance mode type
 * @param[in] val enum value of enhance mode type
 * @return 0 on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  if( display_set_image_enhance(ENHANCE_MODE, MODE_DYNAMIC) < 0 )
 *      printf("Fail to set the image enhance mode\n");
 *  ...
 * @endcode
 */
int display_set_image_enhance(int type, int val);

/**
 * @brief This API is used to set frame rate of display.\n
 * @param[in] val frame rate
 * @return 0 on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  if( display_set_frame_rate() < 0 )
 *      printf("Fail to set display frame rate\n");
 *  ...
 * @endcode
 * @todo describe range of val
 */
int display_set_frame_rate(int val) DEPRECATED;

/**
 * @brief refresh app - setting, video, camera
 */
enum refresh_app {
	REFRESH_SETTING,
	REFRESH_VIDEO,
	REFRESH_CAMERA,
	REFRESH_WEB,
};

/**
 * @brief This API is used to set refresh rate of display.\n
 * @param[in] app caller application type
 * @param[in] val refresh rate
 * @return 0 on success, negative if failed
 * @par Example
 * @code
 *  ...
 *  if( display_set_refresh_rate(REFRESH_SETTING, 60) < 0 )
 *      printf("Fail to set display refresh rate\n");
 *  ...
 * @endcode
 * @todo describe range of val
 */
int display_set_refresh_rate(enum refresh_app app, int val);

/**
 * @brief This API is used to lock a particular display state
 *	as the current display-state.\n
 * @details The parameter state specifies the display state which
 *	you want to lock LCD_NORMAL, LCD_DIM, LCD_OFF. \n
 *	The second parameter Flag is set if you want to go
 *	the requested lock state directly.\n
 *	The third parameter timeout specifies lock-timeout in milliseconds.
 *	If the value 0 is selected, the display state remains locked
 *	until display_unlock_state is called.
 * @param[in] state target power state which you want to lock
 *	- LCD_NORMAL, LCD_DIM, LCD_OFF
 * @param[in] flag set if you want to go the lock state directly \n
 *	GOTO_STATE_NOW - State is changed directly you want to lock.\n
 *	STAY_CUR_STATE - State is not changed directly and
 *	phone stay current state until timeout expired.\n
 *	HOLD_KEY_BLOCK - Hold key is blocked during locking
 *	LCD_NORMAL or LCD_DIM. \n
 *	Then LCD state transition to LCD_OFF is blocked. \n
 *	If this flag is not set, phone state is lcd off
 *	after pressing hold key. \n
 *	GOTO_STATE_NOW and STAY_CUR_STATE can't be applied at the same time.
 * @param[in] timeout lock-timeout in miliseconds. \n
 *	0 is always lock until calling display_unlock_state
 * @return 0 on success, negative if failed
 * @see display_unlock_state(), display_change_state()
 * @par Example
 * @code
 *  ...
 *  result = pm_lock_state(LCD_NORMAL, GOTO_STATE_NOW, SET_TIMEOUT);
 *  if( result < 0 )
 *      printf("[ERROR] return value result =%d, \n",result);
 *  else
 *      printf("[SUCCESS]return value result =%d \n",result);
 *  ...
 * @endcode
 */
int display_lock_state(unsigned int state, unsigned int flag, unsigned int timeout);

/**
 * @brief This API is used to unlock the display state. \n
 * @details The parameter state specifies the display
 *	state which you want to unlock. \n
 *	Some examples are LCD_NORMAL, LCD_DIM, LCD_OFF.
 * @param[in] state target display state which you want to unlock
 * @param[in] flag set timer which is going to the next state after unlocking\n
 *	PM_SLEEP_MARGIN - If the current status is lcd off,
 *	deviced reset timer to 1 second.
 *	If the current status is not lcd off, deviced uses the existing timer.\n
 *	PM_RESET_TIMER - deviced resets timer.
 *	(lcd normal : reset timer to predfined value
 *	which is set in setting module,
 *	lcd dim : reset timer to 5 seconds, lcd off : reset timer to 1 seconds)\n
 *	PM_KEEP_TIMER - deviced uses the existing timer
 *	(if timer is already expired, deviced changes the status) \n
 * @return 0 on success, negative if failed
 * @see display_lock_state(), display_change_state()
 * @par Example
 * @code
 *  ...
 *  result = display_unlock_state(LCD_NORMAL,PM_RESET_TIMER);
 *  if( result < 0 )
 *      printf("[ERROR] return value result =%d, \n",result);
 *  else
 *      printf("[SUCCESS]return value result =%d \n",result);
 *  ...
 * @endcode
 */
int display_unlock_state(unsigned int state, unsigned int flag);

/**
 * @brief This API is used to change display state by force.
 * @param[in] state display state - LCD_NORMAL, LCD_DIM, LCD_OFF
 * @return 0 on success, negative if failed.
 * @see display_lock_state(), display_unlock_state()
 * @par Example
 * @code
 *  ...
 *  result = display_change_state(LCD_OFF);
 *  if( result < 0 )
 *      printf("[ERROR] return value result =%d, \n",result);
 *  else
 *      printf("[SUCCESS]return value result =%d \n",result);
 *  ...
 * @endcode
 */
int display_change_state(unsigned int state);

/**
 * @brief This API is used to get auto screen tone.\n
 * @return enum value for current tone on success, negative if failed
 * @see display_set_auto_screen_tone()
 * @par Example
 * @code
 *  ...
 *  result = display_get_auto_screen_tone();
 *  if( result == 0 )
 *      printf("Display auto screen ton OFF\n");
 *  else if ( result == 1 )
 *      printf("Display auto screen ton ON\n");
 *  ...
 * @endcode
 */
int display_get_auto_screen_tone(void);

/**
 * @brief This API is used to set auto screen tone.\n
 * @return 0 on success, negative if failed
 * @see display_get_auto_screen_tone()
 * @par Example
 * @code
 *  ...
 *  result = display_set_auto_screen_tone(TONE_OFF);
 *  if( result < 0 )
 *      printf("[ERROR] return value result =%d, \n",result);
 *  else
 *      printf("[SUCCESS] return value result =%d, \n",result);
 *  ...
 * @endcode
 */
int display_set_auto_screen_tone(int type);

/**
 * @brief This API is used to get color blind value.\n
 * @return blind value on success, negative if failed
 * @see display_set_color_blind()
 * @par Example
 * @code
 *  ...
 *  result = display_get_color_blind();
 *  if( result < 0 )
 *      printf("[ERROR] return value result =%d, \n",result);
 *  else
 *      printf("[SUCCESS] return value result =%d, \n",result);
 *  ...
 * @endcode
 */
int display_get_color_blind(void);

/**
 * @brief This API is used to set color blind value.\n
 * @param[in] enable color blind on/off
 * @param[in] info blind color info
 * @return 0 on success, negative if failed
 * @see display_set_color_blind()
 * @par Example
 * @code
 *  ...
 *  result = display_set_color_blind(1, info);
 *  if( result < 0 )
 *      printf("[ERROR] return value result =%d, \n",result);
 *  else
 *      printf("[SUCCESS] return value result =%d, \n",result);
 *  ...
 * @endcode
 * @todo describe blind_color_info
 */
int display_set_color_blind(int enable, struct blind_color_info *info);

/**
 * @brief Gets touch sensitivity mode
 * @return 0 on success, otherwise negative error value
 * @see display_set_enhanced_touch()
 */
int display_get_enhanced_touch(void);

/**
 * @brief Sets touch sensitivity mode
 * @param[in] enable 1 on enable, 0 on disable
 * @return 0 on success, otherwise negative error value
 * @see display_get_enhanced_touch()
 */
int display_set_enhanced_touch(int enable);

/**
 * @brief Gets HBM(High Brightness Mode) state
 * @return 0 or 1 on success, otherwise negative error value
 * @see display_set_hbm
 */
int display_get_hbm(void);

/**
 * @brief Sets HBM(High Brightness Mode) state
 * @param[in] enable 1 on enable, 0 on disable
 * @return 0 on success, otherwise negative error value
 * @see display_get_hbm()
 */
int display_set_hbm(int enable);

/**
 * @brief Sets HBM(High Brightness Mode) state
 * @param[in] enable 1 on enable, 0 on disable
 * @param[in] timeout (second)
 * @return 0 on success, otherwise negative error value
 * @see display_get_hbm()
 */
int display_enable_hbm(int enable, int timeout);

/**
 * @} // end of CAPI_SYSTEM_DEVICED_DISPLAY_MODULE
 */

#ifdef __cplusplus
}
#endif
#endif
