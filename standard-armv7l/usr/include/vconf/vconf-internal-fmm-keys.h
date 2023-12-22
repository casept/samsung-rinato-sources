/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Joohark Park <juhaki.park@samsung.com>
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

#ifndef __VCONF_INTERNAL_FMM_KEYS_H__
#define __VCONF_INTERNAL_FMM_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-fmm-keys.h
 * @defgroup    vconf_internal_fmm_key Definitions of internal shared Keys for find-my-mobile
 * @ingroup     vconf_internal_key
 * @author      juhaki.park@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for find-my-mobile \n
 */

/* ========================== FMM Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_fmm_key
 * @{
 * @brief Find My Mobile Keys & Values\n
 *        Maintainer : juhaki.park@samsung.com
 */

/**
 * @brief fmm-lock status ( find-my-mobile lock status )
 *
 * 0 : unlock \n
 * 1 : lock \n
 */
#define VCONFKEY_FMMLOCK_STATE                           "db/SyncML/oma-dm-service/fmmlock_state"
enum {
	VCONFKEY_FMM_STATE_UNLOCK = 0,
	VCONFKEY_FMM_STATE_LOCK
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_FMM_KEYS_H__ */

