/*
 * vconf-internal-keys
 *
 * Copyright (c) 2013 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Sunmi Jung <sun.mi.jung@samsung.com>
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

#ifndef __VCONF_INTERNAL_POPSYNC_KEYS_H__
#define __VCONF_INTERNAL_POPSYNC_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-popsync-keys.h
 * @defgroup    vconf_internal_popsync_key Definitions of internal shared Keys for PopSync
 * @ingroup     vconf_internal_key
 * @author      sun.mi.jung@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for PopSync \n
 */

/* ========================== PopSync Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_popsync_key
 * @{
 * @brief PopSync Keys & Values\n
 *        Maintainer : sun.mi.jung@samsung.com
 */

/**
 * @brief activated state of popsync app.
 *
 * 1 : PopSync activated \n
 * 0 : Popsync deactivated \n
 */
#define VCONFKEY_POPSYNC_ACTIVATED_KEY "db/popsync/popsync_activated"

/**
 * @brief received copy event from other apps.
 *
 * 1 : PopSync received copy event \n
 * 0 : copy event process is complete. \n
 */
#define VCONFKEY_POPSYNC_COPY_EVENT_SET_KEY "db/popsync/copy_event_set"

/**
 * @brief received drag event and information.
 *
 * value(string): "x;y;filepath"
 */
#define VCONFKEY_POPSYNC_DRAG_EVENT_SET_KEY "db/popsync/drag_event_set"

/**
 * @brief the folder of browser
 *
 */

#define VCONFKEY_POPSYNC_CURRENT_FOLDER_STR "db/popsync/current_folder"

/**
 * @brief copy permission
 *
 * 0 : copy deny \n
 * 1 : copy access \n
 */

#define VCONFKEY_POPSYNC_PERMISSION_COPY_BOOL "db/popsync/permission_copy"

/**
 * @brief rotate mode
 *
 * 0 : manual mode \n
 * 1 : Automatic mode \n
 */

#define VCONFKEY_POPSYNC_ROTATE_MODE_BOOL "db/popsync/rotate_mode"

/**
 * @brief rotate state
 *
 * 1 : ROTATION_HEAD_ROTATE_90  CCW BASE 
 * 2 : ROTATION_HEAD_ROTATE_0   CCW BASE 
 * 3 : ROTATION_HEAD_ROTATE_180 CCW BASE
 * 4 : ROTATION_HEAD_ROTATE_270 CCW BASE
 */

#define VCONFKEY_POPSYNC_ROTATE_STATE "db/popsync/rotate_state"

/**
 * @brief licensed conmtent.
 *
 * 0 : non licenced contents
 * 1 : licensed contents - OneSeg
 * x : If we need add other licended contents, we will add new value.  
 *
 */
  

#define VCONFKEY_POPSYNC_LICENSED_CONTENTS_CHECK "db/popsync/licensed_contents"



/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_POPSYNC_KEYS_H__ */
