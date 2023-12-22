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

#ifndef __VCONF_INTERNAL_EMAIL_KEYS_H__
#define __VCONF_INTERNAL_EMAIL_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-email-keys.h
 * @defgroup    vconf_internal_email_key Definitions of internal shared Keys for email
 * @ingroup     vconf_internal_key
 * @author      kyuho.jo@samsung.com, sh0701.kwon@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for email \n
 */

/* ========================== email Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_email_key
 * @{
 * @brief email Keys & Values\n
 *        Maintainer : kyuho.jo@samsung.com, sh0701.kwon@samsung.com
 */

/**
 * @brief email-service sync status for indicator. email-service will set this value.
 *
 * 0 : Not synchronizing \n
 * 1 : Synchronizing \n
 */
#define VCONFKEY_EMAIL_SYNC_STATE "memory/sync/email"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SYNC_KEYS_H__ */

