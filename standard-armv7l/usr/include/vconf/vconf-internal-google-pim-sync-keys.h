/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: taewook kim <tw123.kim@samsung.com>
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

#ifndef __VCONF_INTERNAL_GOOGLE_PIM_SYNC_KEYS_H__
#define __VCONF_INTERNAL_GOOGLE_PIM_SYNC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-google-pim-sync-keys.h
 * @defgroup    vconf_internal_google_pim_sync_key Definitions of internal shared Keys for google-pim-sync
 * @ingroup     vconf_internal_key
 * @author      tw123.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for google-pim-sync \n
 */

/* ========================== google-pim-sync Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sync_key
 * @{
 * @brief google-pim-sync & Values\n
 *        Maintainer : tw123.kim@samsung.com
 */

/**
 * @brief google-pim-sync sync status for indicator. google-pim-sync service will set value.
 *
 * 0 : Not synchronizing \n
 * 1 : Synchronizing \n
 */
#define VCONFKEY_GOOGLE_PIM_SYNC_STATE "memory/sync/google-pim-sync"


/**
 * @}
 */

#endif  /* __VCONF_INTERNAL_GOOGLE_PIM_SYNC_KEYS_H__ */
