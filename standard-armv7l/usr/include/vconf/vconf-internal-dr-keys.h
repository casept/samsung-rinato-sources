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

#ifndef __VCONF_INTERNAL_DR_KEYS_H__
#define __VCONF_INTERNAL_DR_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-dr-keys.h
 * @defgroup    vconf_internal_dr_key Definitions of internal shared Keys for Data Router
 * @ingroup     vconf_internal_key
 * @author      injun.yang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Data Router \n
 */

/* ========================== Data Router Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_dr_key
 * @{
 * @brief Data Router Keys & Values\n
 *        Maintainer : injun.yang@samsung.com
 */

#define VCONF_DATAROUTER_PREFIX "memory/data_router"

/**
 * @brief The hash value for Kies authentication
 */
#define VCONFKEY_DR_AUTH_STATUS_CHECK_INT	VCONF_DATAROUTER_PREFIX"/auth_status"
enum
{
	VCONFKEY_DR_AUTH_STATUS_NOT_AUTHORIZED = 0,
	VCONFKEY_DR_AUTH_STATUS_AUTHORIZED = 1
};

/**
 * @brief The status of serial connection with osp
 */
#define VCONFKEY_DR_OSP_SERIAL_OPEN_INT	VCONF_DATAROUTER_PREFIX"/osp_serial_open"
enum
{
	VCONFKEY_DR_OSP_SERIAL_CLOSE = 0,
	VCONFKEY_DR_OSP_SERIAL_OPEN = 1
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_DR_KEYS_H__ */

