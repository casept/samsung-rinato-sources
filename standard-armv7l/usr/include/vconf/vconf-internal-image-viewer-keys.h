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

#ifndef __VCONF_INTERNAL_IMAGE_VIEWER_KEYS_H__
#define __VCONF_INTERNAL_IMAGE_VIEWER_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-image-viewer-keys.h
 * @defgroup    vconf_internal_image_viewer_key Definitions of internal shared Keys for Image Viewer
 * @ingroup     vconf_internal_key
 * @author      jcastle.ahn@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for Image Viewer \n
 */

/* ========================== Image Viewer Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_image_viewer_key
 * @{
 * @brief Image Viewer Keys & Values\n
 *        Maintainer : jcastle.ahn@samsung.com
 */

#define VCONFKEY_IMAGE_VIEWER_PREFIX		 "file/private/ug-image-viewer-efl"

/**
 * @brief Motion popup showing state
 *
 * type : bool
 *
 * 0 : show
 * 1 : do not show
 *
*/
#define VCONFKEY_IMAGE_VIEWER_MOTION_POPUP_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/motion_popup"

/**
 * @brief Face tag feature state
 *
 * type : bool
 *
 * 0 : on
 * 1 : off
 *
*/
#define VCONFKEY_IMAGE_VIEWER_FACE_TAG_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/face_tag"

/**
 * @brief Tag buddy feature state
 *
 * type : bool
 *
 * 0 : on
 * 1 : off
 *
*/
#define VCONFKEY_IMAGE_VIEWER_TAG_BUDDY_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/tag_buddy"

/**
 * @brief Tag buddy wheater feature state
 *
 * type : bool
 *
 * 0 : on
 * 1 : off
 *
*/
#define VCONFKEY_IMAGE_VIEWER_TAG_BUDDY_WEATHER_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/tag_buddy/weather"

/**
 * @brief Tag buddy location feature state
 *
 * type : bool
 *
 * 0 : on
 * 1 : off
 *
*/
#define VCONFKEY_IMAGE_VIEWER_TAG_BUDDY_LOCATION_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/tag_buddy/location"

/**
 * @brief Tag buddy people feature state
 *
 * type : bool
 *
 * 0 : on
 * 1 : off
 *
*/
#define VCONFKEY_IMAGE_VIEWER_TAG_BUDDY_PEOPLE_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/tag_buddy/people"

/**
 * @brief Tag buddy date feature state
 *
 * type : bool
 *
 * 0 : on
 * 1 : off
 *
*/
#define VCONFKEY_IMAGE_VIEWER_TAG_BUDDY_DATE_STATE	VCONFKEY_IMAGE_VIEWER_PREFIX"/tag_buddy/date"


/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_IMAGE_VIEWER_KEYS_H__ */

