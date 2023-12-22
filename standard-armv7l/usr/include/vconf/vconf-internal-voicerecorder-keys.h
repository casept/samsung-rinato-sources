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

#ifndef __VCONF_INTERNAL_VOICERECORDER_KEYS_H__
#define __VCONF_INTERNAL_VOICERECORDER_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-voicerecorder-keys.h
 * @defgroup    vconf_internal_voicerecorder_key Definitions of internal shared Keys for VoiceRecorder
 * @ingroup     vconf_internal_key
 * @author      quddls.oh@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for VoiceRecorder \n
 */

/* ========================== VoiceRecorder Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_voicerecorder_key
 * @{
 * @brief VoiceRecorder Keys & Values\n
 *        Maintainer : quddls.oh@samsung.com
 */

/**
 * @brief The status of voice recorder
 *
 * VCONFKEY_VOICERECORDER_OFF : application is not launched
 * VCONFKEY_VOICERECORDER_READY : ready to record
 * VCONFKEY_VOICERECORDER_RECORDING : recording
 * VCONFKEY_VOICERECORDER_PAUSED : paused
*/

#define VCONFKEY_VOICERECORDER_STATE "memory/voicerecorder/state"
enum {
	/** application is not launched */
	VCONFKEY_VOICERECORDER_OFF = 0x00,
	/** ready to record */
	VCONFKEY_VOICERECORDER_READY,
	/** recording */
	VCONFKEY_VOICERECORDER_RECORDING,
	/** paused */
	VCONFKEY_VOICERECORDER_PAUSED,
	VCONFKEY_VOICERECORDER_STATE_MAX
};


/**
 * @brief Current recording file name
 *
 * type : string
*/
#define VCONFKEY_VOICERECORDER_RECORDING_NAME	"memory/voicerecorder/clip_name"

/**
 * @brief current elpased time
 *
 * type : int (sec)
*/
#define VCONFKEY_VOICERECORDER_RECORDING_TIME	"memory/voicerecorder/recording_time"

/**
 * @brief current file size
 *
 * type : int (KB)
*/
#define VCONFKEY_VOICERECORDER_RECORDING_SIZE	"memory/voicerecorder/recording_size"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_VOICERECORDER_KEYS_H__ */

