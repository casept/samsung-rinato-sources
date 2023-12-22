/*
 * vconf-internal-livebox-keys
 *
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
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

#ifndef __VCONF_INTERNAL_LIVEBOX_KEYS_H__
#define __VCONF_INTERNAL_LIVEBOX_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-livebox-keys.h
 * @defgroup    vconf_internal_livebox-key Definitions of internal shared Keys for livebox
 * @ingroup     vconf_internal_key
 * @author      Youngjoo Park <yjoo93.park@samsung.com>, Sung-jae Park <nicesj.park@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for livebox \n
 */

/* ========================== Livebox Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_livebox_key
 * @{
 * @brief Livebox Keys & Values\n
 *        Maintainer : Youngjoo Park <yjoo93.park@samsung.com>, Sung-jae Park <nicesj.park@samsung.com>
 */

/**
 * @brief service status of data provider master.
 *
 * type : bool
 */
#define VCONFKEY_MASTER_STARTED		"memory/data-provider-master/started"


/**
 * @brief Address of service provider (master)
 *
 * type : string
 */
#define VCONFKEY_MASTER_CLIENT_ADDR	"db/data-provider-master/serveraddr"

#endif	/* __VCONF_INTERNAL_LIVEBOX_KEYS_H__ */
