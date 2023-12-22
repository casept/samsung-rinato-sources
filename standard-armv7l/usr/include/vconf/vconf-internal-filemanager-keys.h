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

#ifndef __VCONF_INTERNAL_FILEMANAGER_KEYS_H__
#define __VCONF_INTERNAL_FILEMANAGER_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-filemanager-keys.h
 * @defgroup    vconf_internal_filemanager_key Definitions of internal shared Keys for FileManager
 * @ingroup     vconf_internal_key
 * @author      yy9875.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for FileManager \n
 */

/* ========================== FileManager Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_filemanager_key
 * @{
 * @brief FileManager Keys & Values\n
 *        Maintainer : yy9875.kim@samsung.com
 */

/**
 * @brief SD card loding status
 *
 * VCONFKEY_FILEMANAGER_MMC_REMOVED : SD card is not inserted \n
 * VCONFKEY_FILEMANAGER_MMC_LOADING : SD card is inserted and media-server is insterting meta data of contents in SD card into media db \n
 * VCONFKEY_FILEMANAGER_MMC_LOADED : Inserting meta data is done\n
 * VCONFKEY_FILEMANAGER_MMC_FULL : Not enough space in SD card \n
 */
#define VCONFKEY_FILEMANAGER_MMC_STATUS             "memory/filemanager/Mmc"
enum {
	/** SD card is not inserted */
	VCONFKEY_FILEMANAGER_MMC_REMOVED = 0,
	/** SD card is inserted and media-server is insterting meta data of contents in SD card into media db */
	VCONFKEY_FILEMANAGER_MMC_LOADING,
	/** Inserting meta data is done */
	VCONFKEY_FILEMANAGER_MMC_LOADED,
	/** Not enough space in SD card */
	VCONFKEY_FILEMANAGER_MMC_FULL
};

/**
 * @brief Media DB updating status
 *
 * VCONFKEY_FILEMANAGER_DB_UPDATING : Media DB is updating \n
 * VCONFKEY_FILEMANAGER_DB_UPDATED : Media DB updating is done \n
 */
#define VCONFKEY_FILEMANAGER_DB_STATUS              "db/filemanager/dbupdate"
enum {
	/** Media DB is updating */
	VCONFKEY_FILEMANAGER_DB_UPDATING = 0,
	/** Media DB updating is done */
	VCONFKEY_FILEMANAGER_DB_UPDATED
};


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_FILEMANAGER_KEYS_H__ */

