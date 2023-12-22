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

#ifndef __VCONF_INTERNAL_DEBUG_KEYS_H__
#define __VCONF_INTERNAL_DEBUG_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-debug-keys.h
 * @defgroup    vconf_internal_debug_key Definitions of internal shared Keys for debug
 * @ingroup     vconf_internal_key
 * @author      Inho Oh <inho48.oh@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for debug \n
 */

/* ========================== Debug Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_debug_key
 * @{
 * @brief Debug Keys & Values\n
 *        Maintainer : Inho Oh <inho48.oh@samsung.com>
 */

/**
 * @brief support debug level in BS dlog
 *
 * VCONFKEY_DEBUG_LEVEL_LOW : ERROR \n
 * VCONFKEY_DEBUG_LEVEL_MIDDLE : ERROR, WARNING, INFO \n
 * VCONFKEY_DEBUG_LEVEL_HIGH : All log \n
 */
#define VCONFKEY_DEBUG_LEVEL     "db/debug/level"
enum {
 /** ERROR */
 VCONFKEY_DEBUG_LEVEL_LOW = 0,
 /** ERROR, WARNING, INFO */
 VCONFKEY_DEBUG_LEVEL_MIDDLE,
 /** All log */
 VCONFKEY_DEBUG_LEVEL_HIGH
};


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DEBUG_KEYS_H__ */

