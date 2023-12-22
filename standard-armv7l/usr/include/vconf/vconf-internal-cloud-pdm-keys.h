/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seokkyu Jang <seokkyu.jang@samsung.com>
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

#ifndef __VCONF_INTERNAL_CLOUD_PDM_KEYS_H__
#define __VCONF_INTERNAL_CLOUD_PDM_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-cloud-pdm-keys.h
 * @defgroup    vconf_internal_cloud_pdm_key Definitions of internal shared Keys for cloud-pdm
 * @ingroup     vconf_internal_key
 * @author      seokkyu.jang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for cloud-pdm \n
 */

/* ========================== cloud-pdm Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sync_key
 * @{
 * @brief cloud-pdm & Values\n
 *        Maintainer : seokkyu.jang@samsung.com
 */

/**
 * @brief cloud-pdm sync status for indicator. cloud-pdm service will set value.
 *
 * 0 : Not synchronizing \n
 * 1 : Synchronizing \n
 */
#define VCONFKEY_CLOUD_PDM_SYNC_STATE "memory/sync/cloud-pdm-sync"


/**
 * @}
 */

#endif  /* __VCONF_INTERNAL_CLOUD_PDM_KEYS_H__ */
