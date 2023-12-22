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

#ifndef __VCONF_INTERNAL_MOBEX_ENGINE_KEYS_H__
#define __VCONF_INTERNAL_MOBEX_ENGINE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-mobex-engine-keys.h
 * @defgroup    vconf_internal_mobex_engine_key Definitions of internal shared Keys for Mobex Engine
 * @ingroup     vconf_internal_key
 * @author      Sunbong Ha (sunbong.ha@samsung.com)
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Mobex Engine \n
 */

/* ========================== Mobex Engine Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_mobex_engine_key
 * @{
 * @brief Mobex Engine Keys & Values\n
 *        Maintainer : sunbong.ha@samsung.com
 */
#define VCONFKEY_MOBEX_ENGINE_PREFIX "memory/mobex_engine"

/**
 * @brief mobex engine status
 *
 * VCONFKEY_MOBEX_ENGINE_STATUS_NOT_CONNECT : Not connected \n
 * VCONFKEY_MOBEX_ENGINE_STATUS_CONNECTED : Connected \n
 * VCONFKEY_MOBEX_ENGINE_STATUS_SYNC_START : Sync start \n
 * VCONFKEY_MOBEX_ENGINE_STATUS_SYNC_END : Sync end \n
 */
#define VCONFKEY_MOBEX_ENGINE_STATUS_INT VCONFKEY_MOBEX_ENGINE_PREFIX"/status"
enum {
 /** Not connected */
 VCONFKEY_MOBEX_ENGINE_STATUS_NOT_CONNECT = 0x00,
 /** Connected */
 VCONFKEY_MOBEX_ENGINE_STATUS_CONNECTED = 0x01,
 /** Sync start */
 VCONFKEY_MOBEX_ENGINE_STATUS_SYNC_START = 0x02,
 /** Sync end */
 VCONFKEY_MOBEX_ENGINE_STATUS_SYNC_END = 0x03
};

/**
 * @brief check memo sync start/end for mobex-engine
 *
 * 0 : Not/Completed sync \n
 * 1 : Syncing \n
 */
#define VCONFKEY_MOBEX_ENGINE_MEMO_SYNC_STATUS VCONFKEY_MOBEX_ENGINE_PREFIX"/memo_sync_status"

/**
 * @brief connected method status with Kies(Samsung PC Studio)
 *
 * VCONFKEY_MOBEX_ENGIN_NONE : Not connected \n
 * VCONFKEY_MOBEX_ENGIN_USB : Connected to USB \n
 * VCONFKEY_MOBEX_ENGIN_WIFI : Connected to WiFi \n
 */
#define VCONFKEY_MOBEX_ENGINE_CONNECTION_METHOD_INT VCONFKEY_MOBEX_ENGINE_PREFIX"/conn_method"
enum {
 /** Not connected */
 VCONFKEY_MOBEX_ENGIN_NONE = 0,
 /** Connected to USB */
 VCONFKEY_MOBEX_ENGIN_USB,
 /** Connected to WiFi */
 VCONFKEY_MOBEX_ENGIN_WIFI
};
/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MOBEX_KEYS_H__ */

