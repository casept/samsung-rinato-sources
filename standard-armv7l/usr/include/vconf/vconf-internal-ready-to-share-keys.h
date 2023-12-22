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

#ifndef __VCONF_INTERNAL_READY_TO_SHARE_KEYS_H__
#define __VCONF_INTERNAL_READY_TO_SHARE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-ready-to-share-keys.h
 * @defgroup    vconf_internal_ready_to_share_key Definitions of internal shared Keys for Ready to share 
 * @ingroup     vconf_internal_key
 * @author      jst.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Ready to share\n
 */

/* ========================== Ready to share mode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_ready_to_share_key
 * @{
 * @brief Ready to share Keys & Values\n
 *        Maintainer : jbtm.park@samsung.com
 */

/**
 * @brief it stands for ready to share enabled in status by int value.
 *
 * 0 : off \n
 * 1 : on \n
 */
#define VCONFKEY_READY_TO_SHARE_STATE	"memory/ready_to_share/state"
enum
{
	VCONFKEY_READY_TO_SHARE_OFF = 0,
	VCONFKEY_READY_TO_SHARE_ON
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_READY_TO_SHARE_KEYS_H__ */

