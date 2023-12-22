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

#ifndef __VCONF_INTERNAL_CALL_KEYS_H__
#define __VCONF_INTERNAL_CALL_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-call-keys.h
 * @defgroup    vconf_internal_call_key Definitions of internal shared Keys for call
 * @ingroup     vconf_internal_key
 * @author      sungjoon.won@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for call \n
 */

/* ========================== Call Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_call_key
 * @{
 * @brief Call Keys & Values\n
 *        Maintainer : sungjoon.won@samsung.com
 */

/**
 * @brief Current call status
 *
 * VCONFKEY_CALL_OFF : No call connected \n
 * VCONFKEY_CALL_VOICE_CONNECTING : Voice call is connecting \n
 * VCONFKEY_CALL_VOICE_ACTIVE : Voice call is connected \n
 * VCONFKEY_CALL_VIDEO_CONNECTING : Video call is connecting \n
 * VCONFKEY_CALL_VIDEO_ACTIVE : Video call is connecting \n
 */
#define VCONFKEY_CALL_STATE            "memory/call/state"
enum {
	/** No call connected */
	VCONFKEY_CALL_OFF = 0x00,
	/** Voice call is connecting */
	VCONFKEY_CALL_VOICE_CONNECTING,
	/** Voice call is connected */
	VCONFKEY_CALL_VOICE_ACTIVE,
	/** Video call is connecting */
	VCONFKEY_CALL_VIDEO_CONNECTING,
	/** Video call is connecting */
	VCONFKEY_CALL_VIDEO_ACTIVE,
	VCONFKEY_CALL_STATE_MAX
};

/**
 * @brief Call volume level
 *
 * Call volume leve : 1~6 \n
 */
#define VCONFKEY_CALL_VOLUME_LEVEL     "db/call/vol_level"

/**
 * @brief Noise reduction state
 *
 * False : Off
 * True : On
 */
#define VCONFKEY_CALL_NOISE_REDUCTION_STATE_BOOL		"memory/call/noise_reduction_state"

/**
 * @brief Extra volume state
 *
 * False : Off
 * True : On
 */
#define VCONFKEY_CALL_EXTRA_VOLUME_STATE_BOOL		"memory/call/extra_volume_state"

/**
 * @brief Wide band AMR state
 *
 * False : Off
 * True : On
 */
#define VCONFKEY_CALL_WBAMR_STATE_BOOL		"memory/call/wbamr_state"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_CALL_KEYS_H__ */

