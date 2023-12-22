/*
 * vconf-internal-setup-wizard-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Sunyeop Hwang <sunyeop.hwang@samsung.com>, HeeYoung Shin <shy81.shin@samsung.com>, Minho Yun <minho.yun@samsung.com>
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

#ifndef __VCONF_INTERNAL_SETUP_WIZARD_KEYS_H__
#define __VCONF_INTERNAL_SETUP_WIZARD_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-setup-wizard-keys.h
 * @defgroup    vconf_internal_setup-wizard-key Definitions of internal shared Keys for Setup Wizard
 * @ingroup     vconf_internal_key
 * @author      Sunyeop Hwang <sunyeop.hwang@samsung.com>, HeeYoung Shin <shy81.shin@samsung.com>, Minho Yun <minho.yun@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Setup Wizard \n
 */

/* ========================== Setup Wizard Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_setup_wizard_key
 * @{
 * @brief Setup Wizard Keys & Values\n
 *        Maintainer : Sunyeop Hwang <sunyeop.hwang@samsung.com>, HeeYoung Shin <shy81.shin@samsung.com>, Minho Yun <minho.yun@samsung.com>
 */

/**
 * @brief whether it is first booting after downloading binary
 *
 * type : bool
*/
#define VCONFKEY_SETUP_WIZARD_FIRST_BOOT	"db/setup_wizard/first_boot"

/**
 * @brief setup wizard status
 *
 * VCONFKEY_SETUP_WIZARD_UNLOCK : unlocked state \n
 * VCONFKEY_SETUP_WIZARD_LOCK : locked state \n
 */
#define VCONFKEY_SETUP_WIZARD_STATE                       "memory/setup_wizard/state"
enum {
	/** unlocked state */
	VCONFKEY_SETUP_WIZARD_UNLOCK = 0x00,
	/** locked state */
	VCONFKEY_SETUP_WIZARD_LOCK
};

#endif	/* __VCONF_INTERNAL_SETUP_WIZARD_KEYS_H__ */
