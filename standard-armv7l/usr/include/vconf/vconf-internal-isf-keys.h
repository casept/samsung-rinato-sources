
/*
 * vconf-internal-keys
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Jihoon Kim <jihoon48.kim@samsung.com>
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

#ifndef __VCONF_INTERNAL_ISF_KEYS_H__
#define __VCONF_INTERNAL_ISF_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-isf-keys.h
 * @defgroup    vconf_internal_isf_key Definitions of internal shared Keys for ISF
 * @ingroup     vconf_internal_key
 * @author      Jihoon Kim <jihoon48.kim@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for ISF \n
 */

/* ========================== ISF Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_ISF_key
 * @{
 * @brief ISF Keys & Values\n
 *        Maintainer : Jihoon Kim <jihoon48.kim@samsung.com>
 */

/**
 * @brief input language string
 */
#define VCONFKEY_ISF_INPUT_LANGUAGE 	"db/isf/input_language"

/**
 * @brief Input Panel(virtual keypad) status
 */
#define VCONFKEY_ISF_INPUT_PANEL_STATE	"memory/isf/input_panel_state"
enum {
	VCONFKEY_ISF_INPUT_PANEL_STATE_HIDE = 0,    /* after hiding Input Panel */
	VCONFKEY_ISF_INPUT_PANEL_STATE_WILL_HIDE,   /* prior to hiding Input Panel */
	VCONFKEY_ISF_INPUT_PANEL_STATE_SHOW,        /* after showing Input Panel */
	VCONFKEY_ISF_INPUT_PANEL_STATE_WILL_SHOW    /* prior to showing Input Panel */
};

/**
 * @}
 */
#endif	/* __VCONF_INTERNAL_ISF_KEYS_H__ */
