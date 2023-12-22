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

#ifndef __VCONF_INTERNAL_SAT_KEYS_H__
#define __VCONF_INTERNAL_SAT_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-sat-keys.h
 * @defgroup    vconf_internal_sat_key Definitions of internal shared Keys for Sim Application Toolkit
 * @ingroup     vconf_internal_key
 * @author      sungjoon.won@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Sim Application Toolkit \n
 */

/* ========================== Sim Application Toolkit Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sat_key
 * @{
 * @brief Sim Application Toolkit Keys & Values\n
 *        Maintainer : sungjoon.won@samsung.com
 */

#define VCONFKEY_SAT_PREFIX       "memory/sat"

/**
 * @brief It contains a text string which is provided by SETUP IDLE MODE TEXT command from SATK
 *
 * Value : Idle text from SIM.
 */
#define VCONFKEY_SAT_IDLE_TEXT    VCONFKEY_SAT_PREFIX"/idle_text"

/**
 * @brief Normal priority available status
 *
 * 0 : Not available \n
 * 1 : Available \n
 */
#define VCONFKEY_SAT_NORMAL_PRIORITY_AVAILABLE_BOOL		VCONFKEY_SAT_PREFIX"/normal_priority_available"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SAT_KEYS_H__ */

