/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Juho Son <juho80.son@samsung.com>
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

#ifndef __VCONF_INTERNAL_CRASH_KEYS_H__
#define __VCONF_INTERNAL_CRASH_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-crash-keys.h
 * @defgroup    vconf_internal_crash_key Definitions of internal shared Keys for crash
 * @ingroup     vconf_internal_key
 * @author      Juho Son <juho80.son@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for crash \n
 */

/* ========================== Crash Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_crash_key
 * @{
 * @brief Crash Keys & Values\n
 *        Maintainer : Juho Son <juho80.son@samsung.com>
 */

#define VCONFKEY_CRASH_PREFIX "db/crash"

/**
 * @brief Flag for automatically send when crash occurs.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_CRASH_AUTOSEND VCONFKEY_CRASH_PREFIX"/autosend"
/**
 * @brief Flag for automatically close popup.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_CRASH_AUTOCLOSE  VCONFKEY_CRASH_PREFIX"/autoclose"

/**
 * @brief Flag for showing popup when crash occurs.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_CRASH_POPUP VCONFKEY_CRASH_PREFIX"/popup"

/**
 * @brief Flag for showing progress in indicator.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_CRASH_PROGRESS VCONFKEY_CRASH_PREFIX"/progress"

/**
 * @brief Set flag on when crash occured in unable network environment.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_CRASH_SENDFLAG VCONFKEY_CRASH_PREFIX"/sendflag"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_CRASH_KEYS_H__ */

