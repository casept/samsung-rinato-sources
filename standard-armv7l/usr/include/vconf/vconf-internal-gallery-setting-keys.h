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

#ifndef __VCONF_INTERNAL_GALERY_SETTING_KEYS_H__
#define __VCONF_INTERNAL_GALERY_SETTING_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-gallery-setting-keys.h
 * @defgroup    vconf_internal_gallery_setting_key Definitions of internal shared Keys for Gallery Setting
 * @ingroup     vconf_internal_key
 * @author      jcastle.ahn@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Gallery Setting \n
 */

/* ========================== Gallery Setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_gallery_setting_key
 * @{
 * @brief Gallery Setting Keys & Values\n
 *        Maintainer : jcastle.ahn@samsung.com
 */


#define VCONFKEY_GALLERY_SETTING_PREFIX                                 "db/gallery/setting"

/**
 * @brief Image viewer slideshow interval time (secs)
 *
 * type : double
 */
#define VCONFKEY_GALLERY_SETTING_SLIDESHOW_INTERVAL		VCONFKEY_GALLERY_SETTING_PREFIX"/interval_time"

/**
 * @brief Image viewer slideshow effect type
 *
 * type : string
 * Slide, Fade, Blind, Iris, Dissolve
 */
#define VCONFKEY_GALLERY_SETTING_SLIDESHOW_EFFECT		VCONFKEY_GALLERY_SETTING_PREFIX"/ss_effect"

/**
 * @brief Image viewer slideshow repeat state
 *
 * type : bool
 * 0 : Slide show repeat
 * 1 : Slide show do not repeat
 */
#define VCONFKEY_GALLERY_SETTING_SLIDESHOW_REPEAT		VCONFKEY_GALLERY_SETTING_PREFIX"/repeat_state"

/**
 * @brief Image viewer slideshow shuffle state
 *
 * type : bool
 * 0 : Normal list
 * 1 : Shuffled list
 */
#define VCONFKEY_GALLERY_SETTING_SLIDESHOW_SHUFFLE		VCONFKEY_GALLERY_SETTING_PREFIX"/shuffle_state"

/**
 * @brief Image viewer slideshow music state
 *
 * type : bool
 * 0 : Use BG music
 * 1 : Do not use BG music
 */
#define VCONFKEY_GALLERY_SETTING_SLIDESHOW_MUSIC_STATE		VCONFKEY_GALLERY_SETTING_PREFIX"/music_state"

/**
 * @brief Image viewer slideshow music path
 *
 * type : string
 */
#define VCONFKEY_GALLERY_SETTING_SLIDESHOW_MUSIC_PATH		VCONFKEY_GALLERY_SETTING_PREFIX"/ss_music"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_GALERY_SETTING_KEYS_H__ */

