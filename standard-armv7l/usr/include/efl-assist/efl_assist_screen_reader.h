/*
 * Copyright (c) 2013 Samsung Electronics Co., Ltd All Rights Reserved
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 *
 */

#ifndef __EFL_ASSIST_SCREEN_READER_H__
#define __EFL_ASSIST_SCREEN_READER_H__

#include <Elementary.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Set an application window property with a popup to give information.
 *
 * @return The return value that indicates this function works properly or not.
 *         If this function works without error, the return value will be EINA_TRUE.
 *
 * @param[in] win The window(elm_win) object of the application.
 * @param[in] support The property value that will set to the window(elm_win).
 *
 * @brief  This function sets an application window property which indicates the application
 *         supports screen reader or not. This function shows a popup to inform that
 *         screen reader is not supported if @p support is EINA_FALSE.
 */
EAPI Eina_Bool ea_screen_reader_support_set(Evas_Object *win, Eina_Bool support);

/**
 * Get an application window property whether the application supports screen reader or not.
 *
 * @return The property value that an application has currently.
 *
 * @param[in] win The window(elm_win) object of the application.
 *
 * @brief  This function gets an application window property which indicates the application
 *         supports screen reader or not.
 */
EAPI Eina_Bool ea_screen_reader_support_get(Evas_Object *win);

/**
 * Set an application window property without a popup
 *
 * @return The return value that indicates this function works properly or not.
 *         If this function works without error, the return value will be EINA_TRUE.
 *
 * @param[in] win The window(elm_win) object of the application.
 * @param[in] support The property value that will set to the window(elm_win).
 *
 * @brief  This function sets an application window property which indicates the application
 *         supports screen reader or not. This function does not show a popup to inform that
 *         screen reader is not supported event though @p support is EINA_FALSE.
 */
EAPI Eina_Bool ea_screen_reader_window_property_set(Evas_Object *win, Eina_Bool support);

/**
 * Get an application window property whether the application supports screen reader or not.
 *
 * @return The property value that an application has currently.
 *
 * @param[in] win The window(elm_win) object of the application.
 *
 * @brief  This function gets an application window property which indicates the application
 *         supports screen reader or not.
 */
EAPI Eina_Bool ea_screen_reader_window_property_get(Evas_Object *win);

/**
 * Show a popup which has information that screen reader is not supported.
 *
 * @return The return value that indicates this function works properly or not.
 *         If this the popup shows without error, the return value will be EINA_TRUE.
 *
 * @param[in] win The window(elm_win) object of the application.
 *
 * @brief  This function shows a popup and reads information that an application
 *         does not support screen reader. This function does not change application
 *         window property.
 */
EAPI Eina_Bool ea_screen_reader_unsupported_popup_show(Evas_Object *win);
#ifdef __cplusplus
}
#endif

#endif /* __EFL_ASSIST_SCREEN_READER_H__ */
