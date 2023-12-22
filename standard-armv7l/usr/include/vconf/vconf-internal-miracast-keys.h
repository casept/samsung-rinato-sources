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

#ifndef __VCONF_INTERNAL_MIRACAST_KEYS_H__
#define __VCONF_INTERNAL_MIRACAST_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-miracast-keys.h
 * @defgroup    vconf_internal_miracast_key Definitions of internal shared Keys for Miracast(WiFi Display)
 * @ingroup     vconf_internal_key
 * @author      hyunil46.park@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for miracast \n
 */

/* ========================== Miracast Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_miracast_key
 * @{
 * @brief Miracast Keys & Values\n
 *        Maintainer : hyunil46.park@samsung.com
 */

/**
 * @brief Miracast WFD(WiFi Display)Source status
 *
 * 0: WFD source is not launched \n
 * 1: WFD source is launched \n
*/
#define VCONFKEY_MIRACAST_WFD_SOURCE_STATUS "memory/wifi/miracast/source_status"
enum {
	VCONFKEY_MIRACAST_WFD_SOURCE_OFF,
	VCONFKEY_MIRACAST_WFD_SOURCE_ON
};

#endif	/* __VCONF_INTERNAL_MIRACAST_KEYS_H__ */

