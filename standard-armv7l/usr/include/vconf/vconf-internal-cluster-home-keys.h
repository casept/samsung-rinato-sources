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

#ifndef __VCONF_INTERNAL_CLUSTER_HOME_KEYS_H__
#define __VCONF_INTERNAL_CLUSTER_HOME_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-cluster-home-keys.h
 * @defgroup    vconf_internal_cluster_home_key Definitions of internal shared Keys for cluster-home
 * @ingroup     vconf_internal_key
 * @author      Sang-man Lee <prince.lee@samsung.com>, Min-gu cho <mingu79.cho@samsung.com>, Mi-ju Lee <miju52.lee@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for cluster-home \n
 */

/* ========================== Cluster-home Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_cluster_home_key
 * @{
 * @brief Cluster-home Keys & Values\n
 *        Maintainer : Sang-man Lee <prince.lee@samsung.com>, Min-gu cho <mingu79.cho@samsung.com>, Mi-ju Lee <miju52.lee@samsung.com>
 */

/**
 * @brief homescreen edit state check.
 *
 * type : bool
 * 0 : homescreen normal state
 * 1 : homescreen edit state
*/

#define VCONFKEY_CLUSTER_HOME_EDITSTATE		"memory/cluster-home/edit-state"

#endif	/* __VCONF_INTERNAL_CLUSTER_HOME_KEYS_H__ */

