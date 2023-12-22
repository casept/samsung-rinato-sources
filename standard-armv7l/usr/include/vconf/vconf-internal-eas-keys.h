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

#ifndef __VCONF_INTERNAL_SYNC_KEYS_H__
#define __VCONF_INTERNAL_SYNC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-eas-keys.h
 * @defgroup    vconf_internal_eas_key Definitions of internal shared Keys for eas
 * @ingroup     vconf_internal_key
 * @author      sw6508@samsung.com, jinmin21.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for eas \n
 */

/* ========================== Exchange ActiveSync Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sync_key
 * @{
 * @brief Exchange ActiveSync Keys & Values\n
 *        Maintainer : sw6508@samsung.com, jinmin21.kim@samsung.com
 */

/**
 * @brief Exchange ActiveSync sync status for indicator. EAS engine will set value.
 *
 * 0 : Not synchronizing \n
 * 1 : Synchronizing \n
 */
#define VCONFKEY_EAS_SYNC_STATE "db/sync/exchange"

/**
 * @brief eas recovery mode
 * 0 : Normal mode
 * 1 : Recovery mode
 */
#define VCONFKEY_EAS_RECOVERY_MODE "db/eas/recovery_mode"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SYNC_KEYS_H__ */

