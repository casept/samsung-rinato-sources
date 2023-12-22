/**
 * CSC (Customer Software Configuration) / csc-feature.h
 *
 * Copyright (c) 2000 - 2013 Samsung Electronics Co., Ltd All Rights Reserved
 *
 * Creator: Jung-bae Lee <jungbae.lee@samsung.com>
 *
 * PROPRIETARY/CONFIDENTIAL
 *
 * This software is the confidential and proprietary information of SAMSUNG ELECTRONICS ("Confidential Information").
 * You shall not disclose such Confidential Information and shall
 * use it only in accordance with the terms of the license agreement you entered into with SAMSUNG ELECTRONICS.
 * SAMSUNG make no representations or warranties about the suitability
 * of the software, either express or implied, including but not
 * limited to the implied warranties of merchantability, fitness for a particular purpose, or non-infringement.
 * SAMSUNG shall not be liable for any damages suffered by licensee as
 * a result of using, modifying or distributing this software or its derivatives.
 */

#ifndef __CSC_FEATURE_H__
#define __CSC_FEATURE_H__

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @file csc-feature.h
 * @brief This file contains the CSC feature APIs and related enumeration.
 */

/**
 * @addtogroup CAPI_CSC_FEATURE_MODULE
 * @{
 */

/*************** CSC feature define ***************/
/**
 * @brief Enumeration of definition with boolean type for CSC feature.
 */
typedef enum
{
	CSC_FEATURE_DEF_BOOL_NONE = 0,

	CSC_FEATURE_DEF_BOOL_MODULE_SAMPLE,	// Sample for test

	CSC_FEATURE_DEF_BOOL_RCS_SUPPORTED,
	CSC_FEATURE_DEF_BOOL_CONTACTS_SIM_ADDRESSBOOK,
	CSC_FEATURE_DEF_BOOL_CONTACTS_DOCOMO_SOCIAL_PHONEBOOK,
	CSC_FEATURE_DEF_BOOL_MSG_CB_DISABLE,
	CSC_FEATURE_DEF_BOOL_TETHERING_USE_TETHERING_APN,
	CSC_FEATURE_DEF_BOOL_STRANSLATOR_YANDEX_ENGINE_ENABLE,
	CSC_FEATURE_DEF_BOOL_MSG_SMS_TO_MMS_CONVERSION_BY_TEXTINPUT_DISABLE,
	CSC_FEATURE_DEF_BOOL_APPFRMWK_APP_SYNC_DISABLE,
	CSC_FEATURE_DEF_BOOL_KEEPIT_MAPS_SUPPORT,
	CSC_FEATURE_DEF_BOOL_EMAIL_PROVIDERS_DISPLAY_ENABLE,
	CSC_FEATURE_DEF_BOOL_INDICATOR_GUI_ORANGE,
	CSC_FEATURE_DEF_BOOL_SETUPWIZARD_ONE_STEP_ALL_ACCOUNTS,
	CSC_FEATURE_DEF_BOOL_SEARCH_YANDEX_ENABLE,
	CSC_FEATURE_DEF_BOOL_CAMERA_LOW_FLASH_ENABLE,
	CSC_FEATURE_DEF_BOOL_UIFRMWK_SCR_CAPTURE_DISABLE_WHEN_DTV_ACTIVE,
	CSC_FEATURE_DEF_BOOL_NET_MMS_CONNECT_FORCE,
	CSC_FEATURE_DEF_BOOL_NFC_CARD_ESE_DISABLE,
	CSC_FEATURE_DEF_BOOL_TETHERING_OPERATOR_POPUP_WHEN_ACTIVATE,
	CSC_FEATURE_DEF_BOOL_NET_USSD_TEXT_KEYPAD,
	CSC_FEATURE_DEF_BOOL_NET_STK_HIDE_ALPHA_ID,
	CSC_FEATURE_DEF_BOOL_NET_RESTRICT_MAX_PDP_CONNECTION_RETRY,
	CSC_FEATURE_DEF_BOOL_NET_SHOW_BEARER_CAPABILITY_IN_SAME_CELL,
	CSC_FEATURE_DEF_BOOL_NET_RESTRICTION_MODE,
	CSC_FEATURE_DEF_BOOL_MUSIC_STORE_ENABLE,
	CSC_FEATURE_DEF_BOOL_VIDEO_STORE_ENABLE,
	CSC_FEATURE_DEF_BOOL_NET_DATA_ROAMING_APP_CONTROL,
	CSC_FEATURE_DEF_BOOL_NET_DATA_ROAMING_POPUP_CONTROL,
	CSC_FEATURE_DEF_BOOL_HOME_EDIT_MODE_LONGPRESS_DISABLE,
	CSC_FEATURE_DEF_BOOL_SETTING_IMEI_SERIAL_ADDITION,
	CSC_FEATURE_DEF_BOOL_CONTACTS_PINYIN_FUZZY_SEARCH_ENABLE,
	CSC_FEATURE_DEF_BOOL_MUSIC_LIST_PINYIN_SORT_ENABLE,
	CSC_FEATURE_DEF_BOOL_SETTING_FONT_OTHER_PRELOAD_DISABLE,
	CSC_FEATURE_DEF_BOOL_MSG_SMS_EMOJI_DISABLE,

	CSC_FEATURE_DEF_BOOL_TEMP_DEMO_UNPACKED,

	CSC_FEATURE_DEF_BOOL_MAX
} CscFeatureDefBool;

/**
 * @brief Enumeration of definition with integer type for CSC feature.
 */
typedef enum
{
	CSC_FEATURE_DEF_INT_NONE = 0,

	CSC_FEATURE_DEF_INT_MODULE_SAMPLE,	// Sample for test

	CSC_FEATURE_DEF_INT_CAMERA_FLICKER,
	CSC_FEATURE_DEF_INT_DAILYBRIEFING_DEFAULT_COUNTRY_WHEN_NO_SIM,

	CSC_FEATURE_DEF_INT_MAX
} CscFeatureDefInt;

/**
 * @brief Enumeration of definition with string type for CSC feature.
 */
typedef enum
{
	CSC_FEATURE_DEF_STR_NONE = 0,

	CSC_FEATURE_DEF_STR_MODULE_SAMPLE,	// Sample for test

	CSC_FEATURE_DEF_STR_APPFRMWK_APP_SYNC_LIST,
	CSC_FEATURE_DEF_STR_WIFI_CAPTIVE_PORTAL_IGNORE_AP,
	CSC_FEATURE_DEF_STR_CONTACTS_NETWORK_SEARCH,
	CSC_FEATURE_DEF_STR_DAILYBRIEFING_CP_NAME,
	CSC_FEATURE_DEF_STR_SETTING_NET_MODE_REQ_CUSTOMER,
	CSC_FEATURE_DEF_STR_SETTING_NET_MODE_BAND_NAMING,
	CSC_FEATURE_DEF_STR_SFINDER_OP_WEB_LAUNCHING,

	CSC_FEATURE_DEF_STR_MAX
} CscFeatureDefStr;
/******************************************************/


#define	CSC_FEATURE_STR_LEN_MAX		256

/**
 * @brief Enumeration of bool value for CSC feature.
 */
typedef enum
{
	CSC_FEATURE_BOOL_FALSE	= 0,	/**< False */
	CSC_FEATURE_BOOL_TRUE	= 1		/**< True */
} CscFeatureBool;

/**
 * @brief Load CSC feature's data for initialization in booting.
 *
 * @return 1 on success, 0 on failure
 *
 */
int			csc_feature_load( void );

/**
 * @brief Gets the value of CSC feature with boolean type.
 * 
 * @param [in] definition of CSC feature with boolean type
 * @return 0 or 1 as boolean type
 * @retval #CSC_FEATURE_BOOL_FALSE Feature disabled (0)
 * @retval #CSC_FEATURE_BOOL_TRUE Feature enabled (1)
 *
 */
CscFeatureBool	csc_feature_get_bool( CscFeatureDefBool def );

/**
 * @brief Gets the value of CSC feature with integer type.
 * 
 * @param [in] definition of CSC feature with integer type
 * @return Value of feature.
 *
 */
int				csc_feature_get_int( CscFeatureDefInt def );

/**
 * @brief Gets the value of CSC feature with string type.
 * 
 * @param [in] definition of CSC feature with string type
 * @param [out] value fo CSC feature
 * @param [in] buffer size for saving value
 * @return 1 on success, 0 on failure.
 *
 */
int				csc_feature_get_str( CscFeatureDefStr def, char* pszBuf, int bufSize );

/**
 * @brief Dump CSC feature's memory for test and debugging.
 *
 * @return 1 on success, 0 on failure
 *
 */
int				csc_feature_dump_mem( void );


/**
 * @}
 */


#ifdef __cplusplus
}
#endif //

#endif // __CSC_FEATURE_H__