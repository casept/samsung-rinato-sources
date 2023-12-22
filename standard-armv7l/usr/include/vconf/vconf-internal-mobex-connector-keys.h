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

#ifndef __VCONF_INTERNAL_MOBEX_CONNECTOR_KEYS_H__
#define __VCONF_INTERNAL_MOBEX_CONNECTOR_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-mobex-connector-keys.h
 * @defgroup    vconf_internal_mobex_connector_key Definitions of internal shared Keys for mobex-connector
 * @ingroup     vconf_internal_key
 * @author      injun.yang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for mobex-connector \n
 */

/* ========================== Mobex Connector Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_mobex_connector_key
 * @{
 * @brief Mobex Connector Keys & Values\n
 *        Maintainer : injun.yang@samsung.com
 */

#define VCONFKEY_MOBEX_CONNECTOR_PREFIX "memory/mobex_connector"

/**
 * @brief Mobex connector status
 *
 * VCONFKEY_MOBEX_CONNECTOR_STATUS_DISCONNECTED : Disconnected \n
 * VCONFKEY_MOBEX_CONNECTOR_STATUS_WAITING : Waiting \n
 * VCONFKEY_MOBEX_CONNECTOR_STATUS_CONNECTED : Connected \n
 */
#define VCONFKEY_MOBEX_CONNECTOR_STATUS VCONFKEY_MOBEX_CONNECTOR_PREFIX"/status"
enum {
 /** Disconnected */
 VCONFKEY_MOBEX_CONNECTOR_STATUS_DISCONNECTED = 0,
 /** Waiting */
 VCONFKEY_MOBEX_CONNECTOR_STATUS_WAITING,
 /** Connected */
 VCONFKEY_MOBEX_CONNECTOR_STATUS_CONNECTED
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MOBEX_CONNECTOR_KEYS_H__ */

