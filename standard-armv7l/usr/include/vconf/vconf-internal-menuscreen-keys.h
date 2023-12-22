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

#ifndef __VCONF_INTERNAL_MENUSCREEN_KEYS_H__
#define __VCONF_INTERNAL_MENUSCREEN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-menuscreen-keys.h
 * @defgroup    vconf_internal_menuscreen_key Definitions of internal shared Keys for Menu-screen
 * @ingroup     vconf_internal_key
 * @author      jinny.yoon@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Menu-screen \n
 */

/* ========================== Menu-screen Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_menuscreen_key
 * @{
 * @brief Menu-screen Keys & Values\n
 *        Maintainer : jinny.yoon@samsung.com
 */

/**
 * @brief Menu-screen knows what the package has been installed / updated / removed from the package-manager.
 *
 * type : string
 * format : "state:package_name"
 *          State means create | update | delete.
 */
#define VCONFKEY_MENUSCREEN_DESKTOP "db/menuscreen/desktop"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MENUSCREEN_KEYS_H__ */

