/*
 * vconf-internal-sound-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seungbae Shin <seungbae.shin@samsung.com>
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

#ifndef __VCONF_INTERNAL_SOUND_KEYS_H__
#define __VCONF_INTERNAL_SOUND_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-sound-keys.h
 * @defgroup    vconf_internal_sound_key Definitions of internal shared Keys for sound
 * @ingroup     vconf_internal_key
 * @author      seungbae.shin@samsung.com, sc11.lee@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for sound \n
 */

/* ========================== Sound Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sound_key
 * @{
 * @brief Sound Keys & Values\n
 *        Maintainer : seungbae.shin@samsung.com, sc11.lee@samsung.com
 */

/**
 * @brief Sound status(int)
 *
 * STATUS_NONE                  = 0x00000000
 * STATUS_SHARE_MMPLAYER        = 0x00000001
 * STATUS_SHARE_MMCAMCORDER     = 0x00000002
 * STATUS_SHARE_MMSOUND         = 0x00000004
 * STATUS_SHARE_OPENAL          = 0x00000008
 * STATUS_SHARE_AVSYSTEM        = 0x00000010
 * STATUS_EXCLUSIVE_MMPLAYER    = 0x00000020
 * STATUS_EXCLUSIVE_MMCAMCORDER = 0x00000040
 * STATUS_EXCLUSIVE_MMSOUND     = 0x00000080
 * STATUS_EXCLUSIVE_OPENAL      = 0x00000100
 * STATUS_EXCLUSIVE_AVSYSTEM    = 0x00000200
 * STATUS_NOTIFY                = 0x00000400
 * STATUS_CALL                  = 0x10000000
 * STATUS_SHARE_FMRADIO         = 0x00000800
 * STATUS_EXCLUSIVE_FMRADIO     = 0x00001000
 * STATUS_EARJACK_UNPLUG        = 0x00002000
 * STATUS_ALARM                 = 0x00100000
 * STATUS_VIDEOCALL             = 0x20000000
 * STATUS_VOIP                  = 0x00010000
 * STATUS_MONITOR               = 0x80000000
 * STATUS_RICH_CALL             = 0x40000000
 * STATUS_EMERGENCY             = 0x00004000
 * STATUS_EXCLUSIVE_RESOURCE    = 0x00008000
 * STATUS_VOICE_RECOGNITION     = 0x00020000
 *
 * 0 : Sound is not in use (STATUS_NONE)\n
 * not 0 : Sound is in use (combination of above status)
 */
#define VCONFKEY_SOUND_STATUS "memory/Sound/SoundStatus"
enum {
	VCONFKEY_SOUND_STATUS_AVRECORDING = 0x00000040
};

/**
 * @brief Accumulated time of media volume for safety volume pop-up(int)
 *
 * 0 : Media volume level has never gone over the predefined level after reset\n
 * Not 0 : Accumulated time in case the media volume level goes beyond the predefined level
 */
#define VCONFKEY_SOUND_MEDIA_VOL_ACCUM_TIME "memory/Sound/SoundVolAccumTime"

/**
 * @brief Enable/Disable safety volume pop-up for earphone volume
 *
 * 0 : Disable\n
 * 1 : Enable
 */
#define VCONFKEY_SOUND_ENABLE_SAFETY_VOL "memory/Sound/SoundEnableSafetyVol"
enum {
	VCONFKEY_SOUND_SAFETY_VOL_FW_MMPLAYER   = 0x00000001,
	VCONFKEY_SOUND_SAFETY_VOL_APP_VIDEO     = 0x00000010,
	VCONFKEY_SOUND_SAFETY_VOL_APP_MUSIC     = 0x00000020,
	VCONFKEY_SOUND_SAFETY_VOL_APP_VOICE_REC = 0x00000040,
	VCONFKEY_SOUND_SAFETY_VOL_APP_MTV       = 0x00000080
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SOUND_KEYS_H__ */
