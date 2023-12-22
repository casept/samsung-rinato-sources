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

#ifndef __VCONF_INTERNAL_MYFILE_KEYS_H__
#define __VCONF_INTERNAL_MYFILE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-myfile-keys.h
 * @defgroup    vconf_internal_myfile_key Definitions of internal shared Keys for myfile
 * @ingroup     vconf_internal_key
 * @author      Aram Kim <aramie.kim>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for myfile \n
 */

#define VCONFKEY_MFAPP_PREFIX                                 "db/myfile"

/**
 * @brief the folder of browser
 *
 */

#define VCONFKEY_MFAPP_CURRENT_FOLDER_STR            VCONFKEY_MFAPP_PREFIX"/current_folder"

/**
 * @brief support touch sounds option
 *
 * 0 : copy deny \n
 * 1 : copy access \n
 */

#define VCONFKEY_MFAPP_PERMISSION_COPY_BOOL            VCONFKEY_MFAPP_PREFIX"/permission_copy"


#endif	/* __VCONF_INTERNAL_MYFILE_KEYS_H__ */

