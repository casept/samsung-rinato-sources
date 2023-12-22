/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: WoongSuk Cho <ws77.cho@samsung.com>
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

#ifndef __VCONF_INTERNAL_WMS_KEYS_H__
#define __VCONF_INTERNAL_WMS_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-wms-keys.h
 * @defgroup    vconf_internal_wms_key Definitions of internal shared Keys for WMS
 * @ingroup     vconf_internal_key
 * @author      ws77.cho@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for WMS \n
 */

/* ========================== WMS Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_wms_key
 * @{
 * @brief WMS & Values\n
 *        Maintainer : ws77.cho@samsung.com
 */


/**
 * @brief Alpm on/off flag
 *
 * 0 : OFF \n
 * 1 : ON \n
 */
#define VCONFKEY_WMS_ALPM          "db/wms/alpm"


/**
 * @brief Notification from Alpm_App to WMS
 * (After alpm_setting by Alpm_App, noti should be delivered to WMS.)
 *
 * 0 : OFF \n
 * 1 : ON \n
 */
#define VCONFKEY_WMS_ALPM_SETTING          "db/wms/alpm_setting"


/**
 * @brief Reason of locale change
 *
 * 1 : CHANGE_LOCALE_FROM_INITIAL \n
 * 2 : CHANEGE_LOCALE_ONLY \n
 */
#define VCONFKEY_WMS_CHANGE_LOCALE_FROM          "db/wms/change_locale_from"


/**
 * @brief favorites reorder support
 *
 * 0 : not support \n
 * 1 : support \n
 */
#define VCONFKEY_WMS_FAVORITES_REORDER_SUPPORT          "db/wms/favorites_reorder_support"


/**
 * @brief favorite app list order of w-launcher
 *
 * 0 : init \n
 * 1 : backup \n
 * 2 : restore \n
 * 3 : write done \n
 */
#define VCONFKEY_WMS_FAVORITE_ORDER          "memory/wms/favorites_order"


/**
 * @brief application list order of w-launcher
 *
 * 0 : init \n
 * 1 : backup \n
 * 2 : restore \n
 * 3 : write done \n
 */
#define VCONFKEY_WMS_APPS_ORDER          "memory/wms/apps_order"


/**
 * @brief motion support
 *
 * 0 : not support \n
 * 1 : support \n
 */
#define VCONFKEY_WMS_MOTION_SUPPORT          "db/wms/motion_support"


/**
 * @brief noti onoff support
 *
 * 0 : not support \n
 * 1 : support \n
 */
#define VCONFKEY_WMS_NOTI_ONOFF_SUPPORT          "db/wms/noti_onoff_support"


/**
 * @brief powerkey double pressing support
 *
 * 0 : not support \n
 * 1 : support \n
 */
#define VCONFKEY_WMS_POWERKEY_DOUBLE_PRESSING_SUPPORT          "db/wms/powerkey_double_pressing_support"


/**
 * @brief Preview Message
 *
 * 0: OFF \n
 * 1: ON \n
 */
#define VCONFKEY_WMS_PREVIEW_MESSAGE          "db/wms/preview_message"


/**
 * @brief Safety assistance on/off flag
 *
 * 0 : OFF \n
 * 1 : ON \n
 */
#define VCONFKEY_WMS_SAFETY_ENABLE          "db/wms/safety_enable"


/**
 * @brief Notification from Safety_App to WMS
 * (After safety_function trigger, noti should be delivered to WMS. Any key_value is allowed)
 *
 */
#define VCONFKEY_WMS_SAFETY_MESSAGE_TRIGGER          "memory/wms/safety_message_trigger"


/**
 * @brief smart relay Support
 *
 * 0 : not support \n
 * 1 : support \n
 */
#define VCONFKEY_WMS_SMART_RELAY_SUPPORT          "db/wms/smart_relay_support"


/**
 * @brief smart search support
 *
 * 0 : not support \n
 * 1 : support \n
 */
#define VCONFKEY_WMS_SMART_SEARCH_SUPPORT          "db/wms/smart_search_support"


/**
 * @brief wakeup by gesture setting
 *
 * 0: Off \n
 * 1: Clock \n
 * 2: Last viewed screen \n
 *  \n
 */
#define VCONFKEY_WMS_WAKEUP_BY_GESTURE_SETTING          "db/wms/wakeup_by_gesture_setting"





/**
 * @brief Application_shortcuts mPackagename
 * package : Package_Name \n
 *
 * @brief Application_shortcuts mClassname
 * class : Class_Name \n
 */
#define VCONFKEY_WMS_APPLICATION_SHORTCUTS_DOWN_PACKAGE_CLASS          "db/wms/application_shortcuts_down_package_class"


/**
 * @brief Application_shortcuts mPackagename
 * package : Package_Name \n
 *
 * @brief Application_shortcuts mClassname
 * class : Class_Name \n
 */
#define VCONFKEY_WMS_APPLICATION_SHORTCUTS_UP_PACKAGE_CLASS          "db/wms/application_shortcuts_up_package_class"


/**
 * @brief Clock Set Idle
 *
 * package : Package_Name_Clocks_Set_Idle \n
 */
#define VCONFKEY_WMS_CLOCKS_SET_IDLE          "db/wms/clocks_set_idle"


/**
 * @brief Favorite reorder request to the launcher application
 *
 * data : xml data \n
 */
#define VCONFKEY_WMS_FAVORITES_REORDER          "db/wms/favorites_reorder"


/**
 * @brief Notification setting set connected
 * true: isFirst value(true, falseall, false) \n
 * false: isFirst value(Archive) \n
 *
 * @brief Notification setting active
 * true: notification setting on \n
 * false: notification setting off \n
 *
 * @brief Notification setting xml file path
 * file path: notification_setting.xml \n
 */
#define VCONFKEY_WMS_NOTI_SETTING_SETCONNECTED_ACTIVE_PATH          "db/wms/noti_setting_setconnected_active_path"


/**
 * @brief package exist email mini app
 *
 * true : com.sec.android.app.email:true \n
 * false : com.sec.android.app.email:false \n
 */
#define VCONFKEY_WMS_PACKAGE_EXIST_EMAILMINIAPP          "db/wms/package_exist_emailminiapp"


/**
 * @brief package exist text template
 *
 * true : com.samsung.accessory.texttemplateprovider:true \n
 * false : com.samsung.accessory.texttemplateprovider:false \n
 */
#define VCONFKEY_WMS_PACKAGE_EXIST_TEXTTEMPLATE          "db/wms/package_exist_texttemplate"


/**
 * @brief Name of an app to be launched when power key is double pressed
 *
 * package : Pacakge_Name \n
 * class : Class_Name \n
 */
#define VCONFKEY_WMS_POWERKEY_DOUBLE_PRESSING          "db/wms/powerkey_double_pressing"


/**
 * @brief Safety assistance camera_functionaltiy on/off flag
 *
 * 0 : ON \n
 * 1 : OFF \n
 */
#define VCONFKEY_WMS_SAFETY_CAM_DISABLE          "db/wms/safety_cam_disable"


/**
 * @brief Shortcut Clock
 *
 * package : Package_Name_Shortcut_Clock \n
 */
#define VCONFKEY_WMS_SHORTCUT_CLOCK          "memory/wms/shortcut_clock"


/**
 * @brief Watch Package Name
 *
 * package : Package_Name_IdleClock \n
 */
#define VCONFKEY_WMS_WATCH_PKGNAME          "db/wms/watch_pkgname"


/**
 * @brief watchapps reorder data
 *
 * data : xml data \n
 */
#define VCONFKEY_WMS_WATCHAPPS_REORDER_DATA          "memory/wms/watchapps_reorder_data"


/**
 * @brief watchapps reorder viewtype
 *
 * 0 : alphabet \n
 * 1 : custom \n
 */
#define VCONFKEY_WMS_WATCHAPPS_REORDER_VIEWTYPE          "memory/wms/watchapps_reorder_viewtype"





/**
 * @brief Contacts Settings
 *
 * 0: All Contacts \n
 * 1: Favorites \n
 */
#define VCONFKEY_WMS_CONTACTS_SETTINGS          "db/wms/contacts_settings"


/**
 * @brief Flag to notify setupwizard data receiving finished
 *
 * 0: Not Finished \n
 * 1: Finished \n
 */
#define VCONFKEY_WMS_GM_SETUPWIZARD_DATA_RECEIVING_FINISHED          "memory/wms/gm_setupwizard_data_receiving_finished"


/**
 * @brief Flag to notify setupwizard EULA setting finished
 *
 * 0 : Not Finished \n
 * 1 : Finished \n
 */
#define VCONFKEY_WMS_GM_SETUPWIZARD_EULA_FINISHED          "db/wms/gm_setupwizard_eula_finished"


/**
 * @brief Flag to notify setupwizard restore finished
 *
 * 0: Not Finished \n
 * 1: Finished \n
 */
#define VCONFKEY_WMS_GM_SETUPWIZARD_RESTORE_FINISHED          "memory/wms/gm_setupwizard_restore_finished"


/**
 * @brief Flag to check first-connection related info
 *
 * 0 : False \n
 * 1 : True \n
 */
#define VCONFKEY_WMS_IS_INITIALED_WATCH          "db/wms/is_initialed_watch"


/**
 * @brief Factory reset on/off flag
 *
 * 0 : OFF \n
 * 1 : ON \n
 */
#define VCONFKEY_WMS_IS_MASTER_RESET          "db/wms/is_master_reset"


/**
 * @brief Restore Start
 *
 * 0: FALSE \n
 * 1: TRUE \n
 */
#define VCONFKEY_WMS_RESTORE_START          "db/wms/restore_start"


/**
 * @brief smart relay
 *
 * 0 : OFF \n
 * 1 : ON \n
 */
#define VCONFKEY_WMS_SMART_RELAY          "db/wms/smart_relay"


/**
 * @brief Enable/Disable the contact app icon in the favorite list
 *
 * 0: FALSE \n
 * 1: TRUE \n
 */
#define VCONFKEY_WMS_SYNC_CONTACTS          "db/wms/sync_contacts"


/**
 * @brief Enable/Disable the log app icon in the favorite list
 *
 * 0: FALSE \n
 * 1: TRUE \n
 */
#define VCONFKEY_WMS_SYNC_LOGS          "db/wms/sync_logs"


/**
 * @brief Wakeup By Gesture Enable
 *
 * 0: OFF \n
 * 1: ON \n
 */
#define VCONFKEY_WMS_WAKEUP_BY_GESTURE_ENABLE          "db/wms/wakeup_by_gesture_enable"


/**
 * @brief Wmanager Connected
 *
 * 0: disconnected \n
 * 1: connected \n
 */
#define VCONFKEY_WMS_WMANAGER_CONNECTED          "memory/wms/wmanager_connected"


/**
 * @brief Wearable Status XML path
 *
 * data: notify Wearable Status XMl Path
 */
#define VCONFKEY_WMS_WEARABLE_STATUS_XML			"db/wms/wearable_status_xml"


/**
 * @brief Host Status XML path
 *
 * data: notify Host Status XMl Path
 */
#define VCONFKEY_WMS_HOST_STATUS_XML				"db/wms/host_status_xml"


/**
 * @}
 */

#endif /* __VCONF_INTERNAL_WMS_KEYS_H__ */


