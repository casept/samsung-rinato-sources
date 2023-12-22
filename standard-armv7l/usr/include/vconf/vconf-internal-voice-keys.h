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

#ifndef __VCONF_INTERNAL_VOICE_KEYS_H__
#define __VCONF_INTERNAL_VOICE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-voice-keys.h
 * @defgroup    vconf_internal_voice_key Definitions of internal shared Keys for voice framework
 * @ingroup     vconf_internal_key
 * @author      dy3.lee@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for voice framework \n
 */

/**
 * @addtogroup vconf_internal_voice_key
 * @{
 * @brief Voice framework Keys & Values\n
 *        Maintainer : dy3.lee@samsung.com
 */

/**
* @brief The voice input language
*
* type : string
*/
#define VCONFKEY_VOICE_INPUT_LANGUAGE     "db/voice_input/language"

/**
* @brief The on/off status of voice control static enabled
*
* type : bool
*/
#define VCONFKEY_VOICE_CONTROL_ENABLED     "db/voice_control/enabled"

/**
* @brief The on/off status of voice control static enabled
*
* type : bool
*/
#define VCONFKEY_VOICE_CONTROL_ENABLED     "db/voice_control/enabled"

/**
 * @brief The on/off status of incoming call application for voice control static enabled
 *
 * type : bool
 */
#define VCONFKEY_VOICE_CONTROL_INCOMING_CALL_ENABLED     "db/voice_control/incoming_call_enabled"

/**
* @brief The on/off status of incoming call via ChatON for voice control static enabled
*
* type : bool
*/
#define VCONFKEY_VOICE_CONTROL_INCOMING_CALL_VIA_CHATON_ENABLED     "db/voice_control/incoming_call_via_chaton_enabled"

/**
 * @brief The on/off status of camera application for voice control static enabled
 *
 * type : bool
 */
#define VCONFKEY_VOICE_CONTROL_CAMERA_ENABLED     "db/voice_control/camera_enabled"

/**
 * @brief The on/off status of alarm application for voice control static enabled
 *
 * type : bool
 */
#define VCONFKEY_VOICE_CONTROL_ALARM_ENABLED     "db/voice_control/alarm_enabled"

/**
 * @brief The on/off status of radio application for voice control static enabled
 *
 * type : bool
 */
#define VCONFKEY_VOICE_CONTROL_RADIO_ENABLED     "db/voice_control/radio_enabled"

/**
 * @brief The on/off status of video application for voice control static enabled
 *
 * type : bool
 */
#define VCONFKEY_VOICE_CONTROL_VIDEO_ENABLED     "db/voice_control/video_enabled"

/**
 * @brief The on/off status of audio application for voice control static enabled
 *
 * type : bool
 */
#define VCONFKEY_VOICE_CONTROL_AUDIO_ENABLED     "db/voice_control/audio_enabled"

/**
* @brief The voice control language string
*
* type : string
*/
#define VCONFKEY_VOICE_CONTROL_LANGUAGE		"db/voice_control/language"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_VOICE_KEYS_H__ */

