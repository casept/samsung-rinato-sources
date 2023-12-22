/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2012 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Jeesun Kim <iamjs.kim@samsung.com>
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

#ifndef __VCONF_INTERNAL_CALENDAR_KEYS_H__
#define __VCONF_INTERNAL_CALENDAR_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-calendar-keys.h
 * @defgroup    vconf_internal_calendar_key Definitions of internal shared Keys for calendar
 * @ingroup     vconf_internal_key
 * @author      Sunghyuk Lee <sunghyuk.lee@samsung.com> Jeesun Kim <iamjs.kim@samsung.com>
 * @version     0.1
 * @brief       This file has the definitions of shared keys for calendar \n
 */

/* ========================== Calendar Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_calendar_key
 * @{
 * @brief Calendar Keys & Values\n
 *        Maintainer : Sunghyuk Lee<sunghyuk.lee@samsung.com> Jeesun Kim <iamjs.kim@samsung.com>
 */

#define VCONFKEY_CALENDAR_PREFIX "db/calendar"

/**
 * @brief flag for timezone on or off.
 * 0(int): off
 * 1(int): on
 */
#define VCONFKEY_CALENDAR_TIMEZONE_ON_OFF VCONFKEY_CALENDAR_PREFIX"/timezone_on_off"

/**
 * @brief timezone path
 */
#define VCONFKEY_CALENDAR_TIMEZONE_PATH VCONFKEY_CALENDAR_PREFIX"/timezone_path"

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_CALENDAR_KEYS_H__ */

