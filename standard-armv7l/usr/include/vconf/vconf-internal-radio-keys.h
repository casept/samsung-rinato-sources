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

#ifndef __VCONF_INTERNAL_RADIO_KEYS_H__
#define __VCONF_INTERNAL_RADIO_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-radio-keys.h
 * @defgroup    vconf_internal_radio_key Definitions of internal shared Keys for Radio
 * @ingroup     vconf_internal_key
 * @author      hw4444.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Radio \n
 */

/* ========================== Radio Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_radio_key
 * @{
 * @brief Radio Keys & Values\n
 *        Maintainer : hw4444.kim@samsung.com
 */

/**
 * @brief The status of radio app for indicator
 *
 * VCONFKEY_RADIO_OFF : Radio off \n
 * VCONFKEY_RADIO_PLAY : Radio playing \n
 * VCONFKEY_RADIO_STOP : Radio stop
 */
#define VCONFKEY_RADIO_STATE "memory/radio/state"
enum {
	VCONFKEY_RADIO_OFF = 0x00,
	VCONFKEY_RADIO_PLAY,
	VCONFKEY_RADIO_STOP,
	VCONFKEY_RADIO_STATE_MAX
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_RADIO_KEYS_H__ */

