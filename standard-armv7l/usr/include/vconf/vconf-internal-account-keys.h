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

#ifndef __VCONF_INTERNAL_ACCOUNT_KEYS_H__
#define __VCONF_INTERNAL_ACCOUNT_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-account-keys.h
 * @defgroup    vconf_internal_account_key Definitions of internal shared Keys for account
 * @ingroup     vconf_internal_key
 * @author      wy1115.lee@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for account \n
 */

/* ========================== Account Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_account_key
 * @{
 * @brief Account-hotspot Keys & Values\n
 *        Maintainer : wy1115.lee@samsung.com
 */

/**
 * @brief my account sync refresh status
 *
 * 0 : Cancel sync \n
 * 1 : Sync all \n
 */
#define VCONFKEY_ACCOUNT_SYNC_ALL_STATUS_INT     "db/account/sync_all"

/**
 * @brief my account auto sync on/off status
 *
 * 0 : my account auto sync off \n
 * 1 : my account auto sync on \n
 */
#define VCONFKEY_ACCOUNT_AUTO_SYNC_STATUS_INT    "db/account/auto_sync"

/**
 * @brief latest account message
 *
 * insert : account added \n
 * update : account updated \n
 * delete : account deleted \n
 * sync_update : sync status updated \n
 */
#define VCONFKEY_ACCOUNT_MSG_STR	 "db/account/msg"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_ACCOUNT_KEYS_H__ */

