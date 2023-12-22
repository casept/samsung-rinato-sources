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

#ifndef __VCONF_INTERNAL_MUSIC_KEYS_H__
#define __VCONF_INTERNAL_MUSIC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-music-keys.h
 * @defgroup    vconf_internal_music_key Definitions of internal shared Keys for Music
 * @ingroup     vconf_internal_key
 * @author      hm2007.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Music \n
 */

/* ========================== Music Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_music_key
 * @{
 * @brief Music Keys & Values\n
 *        Maintainer : hm2007.kim@samsung.com
 */

/**
 * @brief setting value of music player menu
 *
 * All menu tab can be selected with OR operation
 *
 * SETTING_MUSIC_MENU_ALBUM : show album tab \n
 * SETTING_MUSIC_MENU_ARTIS : show artists tab \n
 * SETTING_MUSIC_MENU_GENRE : show genres tab \n
 * SETTING_MUSIC_MENU_COMPOSER : show composer tab \n
 * SETTING_MUSIC_MENU_YEAR : show year tab \n
 * SETTING_MUSIC_MENU_FOLDER : show folder tab

*/
#define VCONFKEY_SETAPPL_MUSIC_MENU_VAL_INT VCONFKEY_SETAPPL_PREFIX"/music-player/menu"
enum {
	SETTING_MUSIC_MENU_ALBUM = 0x0001,
	SETTING_MUSIC_MENU_ARTIST = 0x0002,
	SETTING_MUSIC_MENU_GENRE = 0x0004,
	SETTING_MUSIC_MENU_COMPOSER = 0x0008,
	SETTING_MUSIC_MENU_YEAR = 0x0010,
	SETTING_MUSIC_MENU_FOLDER = 0x0020
};

/**
 * @brief The status of music player
 *
 * VCONFKEY_MUSIC_OFF : no playing music \n
 * VCONFKEY_MUSIC_PLAY : playing \n
 * VCONFKEY_MUSIC_PAUSE : paused \n
 * VCONFKEY_MUSIC_STOP : stop
 */
#define VCONFKEY_MUSIC_STATE "memory/music/state"
enum {
	VCONFKEY_MUSIC_OFF = 0x00,
	VCONFKEY_MUSIC_PLAY,
	VCONFKEY_MUSIC_PAUSE,
	VCONFKEY_MUSIC_STOP,
	VCONFKEY_MUSIC_STATE_MAX
};

/**
 * @brief Albumart path of current playing song
 *
 * type : string
 */
#define VCONFKEY_MUSIC_ALBUM_ART "memory/music/album_art"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_MUSIC_KEYS_H__ */

