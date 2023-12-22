/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Mijin Park <mijini.park@samsung.com>
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

#ifndef __VCONF_INTERNAL_SVOICE_KEYS_H__
#define __VCONF_INTERNAL_SVOICE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-svoice-keys.h
 * @defgroup    vconf_internal_svoice_key Definitions of internal shared Keys for S Voice
 * @ingroup     vconf_internal_key
 * @author      mijini.park@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for S Voice \n
 */

/* ========================== S Voice Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_svoice_key
 * @{
 * @brief S Voice Keys & Values\n
 *        Maintainer : mijini.park@samsung.com
 */

/**
 * @brief It stands for whether the earphone button will launch a S Voice or not.
 *
 * 1 : Launch the S Voice via earphone key \n
 * 0 : Launch other app via earphone key \n
 */
#define VCONFKEY_SVOICE_OPEN_VIA_EARPHONE_KEY "db/svoice/open_via_earphone_key"

/**
 * @brief It stands for whether the home button will launch a S Voice or not.
 *
 * 1 : Launch the S Voice via home key double press \n
 * 0 : Launch other app via home key double press \n
 */
#define VCONFKEY_SVOICE_OPEN_VIA_HOME_KEY "db/svoice/open_via_home_key"

/**
 * @brief Package name of Voice app.
 *
 * "com.samsung.svoice" : S-Voice \n
 * "docomo2004.DocomoShabetteConcier" : Docomo only \n
 */
#define VCONFKEY_SVOICE_PACKAGE_NAME "db/svoice/package_name"

/**
 * @brief It stands for whether the wkaeup on command will be enabled on lock application or not.
 *
 * 1 : enabled on lock \n
 * 0 : disabled on lock \n
 */
#define VCONFKEY_SVOICE_WAKEUP_CMD_ON_LOCK_SCREEN "db/svoice/wake_up_command_on_lock_screen"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SVOICE_KEYS_H__ */

