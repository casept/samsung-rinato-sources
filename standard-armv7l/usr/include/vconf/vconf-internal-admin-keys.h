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

#ifndef __VCONF_INTERNAL_ADMIN_KEYS_H__
#define __VCONF_INTERNAL_ADMIN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-admin-keys.h
 * @defgroup    vconf_internal_admin_key Definitions of internal shared Keys for admin
 * @ingroup     vconf_internal_key
 * @author      Inho Oh <inho48.oh@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for admin \n
 */

/* ========================== Admin Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_admin_key
 * @{
 * @brief Admin Keys & Values\n
 *        Maintainer : Inho Oh <inho48.oh@samsung.com>
 */

#define VCONFKEY_ADMIN_PREFIX                       "db/admin"

/**
 * @brief Java Autotest url
 *
 */
#define VCONFKEY_ADMIN_INTNL_JAVA_AUTOTEST_URL      VCONFKEY_ADMIN_PREFIX"/autotest_url"

/**
 * @brief User Agent
 *
 */
#define VCONFKEY_ADMIN_UAGENT                       VCONFKEY_ADMIN_PREFIX"/uagent"

/**
 * @brief UA Profile 2G
 *
 */
#define VCONFKEY_ADMIN_UAPROF_URL_2G                VCONFKEY_ADMIN_PREFIX"/uaprof_url_2g"

/**
 * @brief UA Profile 3G
 *
 */
#define VCONFKEY_ADMIN_UAPROF_URL_3G                VCONFKEY_ADMIN_PREFIX"/uaprof_url_3g"

/**
 * @brief GCF Test mode flag
 *
 * VCONFKEY_ADMIN_GCF_OFF : GCF Test Off \n
 * VCONFKEY_ADMIN_GCF_OFF : GCF Test On \n
 */
#define VCONFKEY_ADMIN_GCF_TEST                     VCONFKEY_ADMIN_PREFIX"/gcf_test"
enum {
	VCONFKEY_ADMIN_GCF_OFF = 0,
	VCONFKEY_ADMIN_GCF_ON
};


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_ADMIN_KEYS_H__ */

