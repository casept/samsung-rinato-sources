/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Seokey Jeong <seokey.jeong@samsung.com>
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

#ifndef __VCONF_INTERNAL_FOTA_CONSUMER_H__
#define __VCONF_INTERNAL_FOTA_CONSUMER_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-fota-consumer.h
 * @defgroup    vconf_internal_fota-consumer Definitions of internal shared Keys for fota-consumer
 * @ingroup     vconf_internal_key
 * @author      seokey.jeong@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for fota-consumer \n
 */


/**
 * @brief state of fota-consumer
 *
 * FOTA_CONSUMER_STATE_NONE = 0,
 * FOTA_CONSUMER_STATE_INIT = 10,
 * FOTA_CONSUMER_STATE_COPY_FAILED = 20,
 * FOTA_CONSUMER_STATE_COPY_IN_PROGRESS = 30,
 * FOTA_CONSUMER_STATE_READY_TO_UPDATE = 50,
 * FOTA_CONSUMER_STATE_UPDATE_IN_PROGRESS = 60,
 * FOTA_CONSUMER_STATE_UPDATE_TO_REPORTING = 65,
 */
#define VCONFKEY_FOTA_CONSUMER_STATE            "db/fotaconsumer/state"

#define VCONFKEY_FOTA_FIRWARE_UPDARE_RESULT     "db/fotaconsumer/fu_result"

#endif	/* __VCONF_INTERNAL_FOTA_CONSUMER_H__ */
