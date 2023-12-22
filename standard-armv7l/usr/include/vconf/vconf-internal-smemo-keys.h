/*
 *vconf-internal-keys
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Zhibin Zhou <zhibin.zhou@samsung.com>, Wei Hua <wei2012.hua@samsung.com>
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
#ifndef __VCONF_INTERNAL_SMEMO_KEYS_H__
#define __VCONF_INTERNAL_SMEMO_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-smemo-keys.h
 * @defgroup    vconf_internal_smemo_key Definitions of internal shared Keys for Smemo
 * @ingroup     vconf_internal_key
 * @author      wei2012.hua@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for smemo \n
 */

/* ========================== Smemo Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_smemo_key
 * @{
 * @brief Smemo Keys & Values\n
 *        Maintainer : wei2012.hua@samsung.com
 */

/**
 * @brief it stands for the main view type  .0:  List view; 1:  thumbnail view 
 *
 */

#define VCONFKEY_SMEMO_MAIN_VIEW_TYPE  "db/smemo/main_view_type"

/**
 * @brief to save PDM's callback function.
 *
 * 0 : off Reset \n
 * 1 : on  Smemo data changed. \n
 */
#define VCONFKEY_SMEMO_SYNC_CHECK "db/smemo/sync_check"

/**
 * @brief to check cloud account verification.
 *
 * 0 : Samsung account is verified. \n
 * 1 : Samsung account is not logged in. \n
 * 2 : Samsung account needs to verify from email account.\n
 */
#define VCONFKEY_SMEMO_CHECK_CLOUD_SYNC_VERIFICATION "db/smemo/check_cloud_sync_verification"

/**
 * @brief to check showing samsung account popup.
 *
 * 0 : Do not show option is disable. \n
 * 1 : Do not show option is enbale. \n
 */
#define VCONFKEY_SMEMO_CHECK_DO_NOT_SHOW_OPTION_SAMSUNG_ACCOUT "db/smemo/check_do_not_show_option_samsung_account"

#endif /* __VCONF_INTERNAL_SMEMO_KEYS_H__ */


