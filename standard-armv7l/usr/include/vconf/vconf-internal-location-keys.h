/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>, Genie Kim <daejins.kim@samsung.com>
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

#ifndef __VCONF_INTERNAL_LOCATION_KEYS_H__
#define __VCONF_INTERNAL_LOCATION_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-location-keys.h
 * @defgroup    vconf_internal_location_key Definitions of internal shared Keys for location
 * @ingroup     vconf_internal_key
 * @author      daejins.kim@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for location \n
 */

/* ========================== Location Setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Location Setting Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief 'Use my location' on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_USE_MY_LOCATION "db/location/setting/Usemylocation"

/**
 * @brief GPS service on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_ENABLED "db/location/setting/GpsEnabled"

/**
 * @brief advanced GPS on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_AGPS_ENABLED "db/location/setting/AgpsEnabled"

/**
 * @brief network position on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_NETWORK_ENABLED "db/location/setting/NetworkEnabled"

/**
 * @brief sensor position on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_SENSOR_ENABLED "db/location/setting/SensorEnabled"

/**
 * @}
 */

/* ========================== GPS setting Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Replay mode Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief GPS operation mode(int)
 *
 * STANDALONE = 0 \n
 * MS_BASED = 1 \n
 * MS_ASSISTED = 2
 */
#define VCONFKEY_LOCATION_GPS_OPERATION "db/location/gps/Operation"
enum {
	VCONFKEY_GPS_OPERATION_STANDALONE = 0,
	VCONFKEY_GPS_OPERATION_MS_BASED,
	VCONFKEY_GPS_OPERATION_MS_ASSISTED,
	VCONFKEY_GPS_OPERATION_MAX
};


/**
 * @brief GPS operation test mode(int)
 *
 * NORMAL = 0 \n
 * TEST_HW_SENSITIVITY = 1
 */
#define VCONFKEY_LOCATION_GPS_OPERATION_TEST "db/location/gps/OperationTest"
enum {
	VCONFKEY_GPS_OPERATION_TEST_NORMAL = 0,
	VCONFKEY_GPS_OPERATION_TEST_HW_SENSITIVITY,
	VCONFKEY_GPS_OPERATION_TEST_HW_CN0,
	VCONFKEY_GPS_OPERATION_TEST_HW_CW,
	VCONFKEY_GPS_OPERATION_TEST_MAX
};

/**
 * @brief GPS operation in virtual simulation mode(int)
 * For example, running with ULTS/PLTS is virtual mode.
 *
 * NORMAL = 0 \n
 * VIRTUAL = 1
 */
#define VCONFKEY_LOCATION_GPS_OPERATION_VIRTUAL "db/location/gps/OperationVirtual"

/**
 * @brief GPS operation in focused in GLONASS mode(int)
 *
 * NORMAL = 0 \n
 * GLONASS = 1
 */
#define VCONFKEY_LOCATION_GPS_OPERATION_GLONASS "db/location/gps/OperationGlonass"

/**
 * @brief GPS quality of precision in dynamic accuracy mode(int)
 *
 * NORMAL = 0 \n
 * DYNAMIC_ACC = 1
 */
#define VCONFKEY_LOCATION_GPS_QOP_DYNAMIC_ACC "db/location/gps/QoP/DynamicAcc"

/**
 * @brief GPS quality of precision timeout in seconds (int)
 */
#define VCONFKEY_LOCATION_GPS_QOP_TIMEOUT "db/location/gps/QoP/Timeout"

/**
 * @brief GPS quality of precision accuracy in meters (int)
 */
#define VCONFKEY_LOCATION_GPS_QOP_ACCURACY "db/location/gps/QoP/Accuracy"

/**
 * @brief GPS starting mode(int)
 *
 * HOT_START = 0 \n
 * COLD_START = 1
 */
#define VCONFKEY_LOCATION_GPS_STARTING "db/location/gps/Starting"
enum {
	VCONFKEY_GPS_STARTING_HOT = 0,
	VCONFKEY_GPS_STARTING_COLD,
	VCONFKEY_GPS_STARTING_MAX
};

/**
 * @brief GPS session mode(int)
 *
 * SINGLE_FIX = 0 \n
 * TRACKING = 1
 */
#define VCONFKEY_LOCATION_GPS_SESSION "db/location/gps/Session"
enum {
	VCONFKEY_GPS_SESSION_SINGLE_FIX = 0,
	VCONFKEY_GPS_SESSION_TRACKING,
	VCONFKEY_GPS_SESSION_MAX
};

/**
 * @brief SUPL server address(string)
 */
#define VCONFKEY_LOCATION_SUPL_SERVER "db/location/supl/Server"

/**
 * @brief SUPL port number(int)
 */
#define VCONFKEY_LOCATION_SUPL_PORT "db/location/supl/Port"

/**
 * @brief SUPL SSL mode on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_SUPL_SSL "db/location/supl/SslEnabled"

/**
 * @brief GPS session mode(int)
 *
 * FQDN CUSTOM = 0 \n
 * AUTO = 1 \n
 * SPIRENT = 2 \n
 * DOCOMO = 3
 */
#define VCONFKEY_LOCATION_SUPL_FQDNTYPE "db/location/supl/FQDNType"
enum {
	VCONFKEY_LOCATION_SUPL_FQDN_CUSTOM = 0,
	VCONFKEY_LOCATION_SUPL_FQDN_AUTO,
	VCONFKEY_LOCATION_SUPL_FQDN_SPIRENT,
	VCONFKEY_LOCATION_SUPL_FQDN_DOCOMO
};

/**
 * @brief SUPL version(int)
 *
 * SUPL 1.0 = 0 \n
 * SUPL 2.0 = 1
 *
 */
#define VCONFKEY_LOCATION_SUPL_VERSION "db/location/supl/Version"

/**
 * @brief Log Enable(int)
 *
 * LOG Disable = 0 \n
 * LOG Enable = 1
 *
 */
#define VCONFKEY_LOCATION_LOG_ENABLED "db/location/supl/LogEnabled"

/**
 * @brief LTO Enable(int)
 *
 * LTO Disable = 0 \n
 * LTO Enable = 1
 *
 */
#define VCONFKEY_LOCATION_LTO_ENABLED "db/location/supl/LtoEnabled"

/**
 * @}
 */

/* ========================== NMEA Logging mode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Replay mode Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief nmea logging mode on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_NMEA_LOGGING "db/location/nmea/LoggingEnabled"

/**
 * @}
 */

/* ========================== Replay mode Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief Replay mode Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief replay mode on/off status(int)
 *
 * Disabled = 0 \n
 * Enabled = 1
 */
#define VCONFKEY_LOCATION_REPLAY_ENABLED "db/location/replay/ReplayEnabled"

/**
 * @brief replay mode(int)
 *
 * REPLAY_OFF = 0 \n
 * REPLAY_NMEA = 1 \n
 * REPLAY_MANAUL = 2
 */
#define VCONFKEY_LOCATION_REPLAY_MODE "db/location/replay/ReplayMode"
enum {
	VCONFKEY_GPS_REPLAY_OFF = 0,
	VCONFKEY_GPS_REPLAY_NMEA,
	VCONFKEY_GPS_REPLAY_MANAUL,
	VCONFKEY_GPS_REPLAY_MODE_MAX
};

/**
 * @brief replay nmea mode : file name(string)
 */
#define VCONFKEY_LOCATION_NMEA_FILE_NAME "db/location/replay/FileName"

/**
 * @brief replay manual mode : latitude(double)
 */
#define VCONFKEY_LOCATION_MANUAL_LATITUDE "db/location/replay/ManualLatitude"

/**
 * @brief replay manual mode : longitude(double)
 */
#define VCONFKEY_LOCATION_MANUAL_LONGITUDE "db/location/replay/ManualLongitude"

/**
 * @brief replay manual mode : altitude(double)
 */
#define VCONFKEY_LOCATION_MANUAL_ALTITUDE "db/location/replay/ManualAltitude"

/**
 * @}
 */

/* ========================== GPS / WPS Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief GPS/ WPS Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief Position fix status(int)
 *
 * POSITION OFF = 0 \n
 * POSITION_SEARCHING = 1 \n
 * POSITION_CONNECTED = 2
 *
 */
#define VCONFKEY_LOCATION_POSITION_STATE "memory/location/position/state"
enum {
	VCONFKEY_LOCATION_POSITION_OFF = 0,
	VCONFKEY_LOCATION_POSITION_SEARCHING,
	VCONFKEY_LOCATION_POSITION_CONNECTED,
	VCONFKEY_LOCATION_POSITION_STATE_MAX
};

/**
 * @brief GPS status(int)
 *
 * GPS OFF = 0 \n
 * GPS_SEARCHING = 1 \n
 * GPS_CONNECTED = 2
 *
 */
#define VCONFKEY_LOCATION_GPS_STATE "memory/location/gps/state"
enum {
	VCONFKEY_LOCATION_GPS_OFF = 0,
	VCONFKEY_LOCATION_GPS_SEARCHING,
	VCONFKEY_LOCATION_GPS_CONNECTED,
	VCONFKEY_LOCATION_GPS_STATE_MAX
};

/**
 * @brief WPS status(int)
 *
 * WPS OFF = 0 \n
 * WPS_SEARCHING = 1 \n
 * WPS_CONNECTED = 2
 *
 */
#define VCONFKEY_LOCATION_WPS_STATE "memory/location/wps/state"
enum {
	VCONFKEY_LOCATION_WPS_OFF = 0,
	VCONFKEY_LOCATION_WPS_SEARCHING,
	VCONFKEY_LOCATION_WPS_CONNECTED,
	VCONFKEY_LOCATION_WPS_STATE_MAX
};

/**
 * @}
 */

/* ========================== GPS / WPS Last Position Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_location_key
 * @{
 * @brief GPS/ WPS Keys & Values\n
 *        Maintainer : daejins.kim@samsung.com
 */

/**
 * @brief last GPS timestamp(int)
 */
#define VCONFKEY_LOCATION_LAST_GPS_TIMESTAMP "memory/location/last/gps/Timestamp"

/**
 * @brief last GPS latitude(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_LATITUDE "memory/location/last/gps/Latitude"

/**
 * @brief last GPS longitude(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_LONGITUDE "memory/location/last/gps/Longitude"

/**
 * @brief last GPS altitude(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_ALTITUDE "memory/location/last/gps/Altitude"

/**
 * @brief last GPS speed(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_SPEED "memory/location/last/gps/Speed"

/**
 * @brief last GPS direction(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_DIRECTION "memory/location/last/gps/Direction"

/**
 * @brief last GPS horizontal accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_HOR_ACCURACY "memory/location/last/gps/HorAccuracy"

/**
 * @brief last GPS vertical accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_GPS_VER_ACCURACY "memory/location/last/gps/VerAccuracy"

/**
 * @brief last WPS timestamp(int)
 */
#define VCONFKEY_LOCATION_LAST_WPS_TIMESTAMP "memory/location/last/wps/Timestamp"

/**
 * @brief last WPS latitude(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_LATITUDE "memory/location/last/wps/Latitude"

/**
 * @brief last WPS longitude(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_LONGITUDE "memory/location/last/wps/Longitude"

/**
 * @brief last WPS altitude(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_ALTITUDE "memory/location/last/wps/Altitude"

/**
 * @brief last WPS speed(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_SPEED "memory/location/last/wps/Speed"

/**
 * @brief last WPS direction(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_DIRECTION "memory/location/last/wps/Direction"

/**
 * @brief last WPS horizontal accuracy(double)
 */
#define VCONFKEY_LOCATION_LAST_WPS_HOR_ACCURACY "memory/location/last/wps/HorAccuracy"

/**
 * @brief last GPS location timestamp(int)
 */
#define VCONFKEY_LOCATION_NV_LAST_GPS_TIMESTAMP "db/location/last/gps/LocTimestamp"

/**
 * @brief last WPS location timestamp(int)
 */
#define VCONFKEY_LOCATION_NV_LAST_WPS_TIMESTAMP "db/location/last/wps/LocTimestamp"

/**
 * @brief last GPS location(string)
 */
#define VCONFKEY_LOCATION_NV_LAST_GPS_LOCATION "db/location/last/gps/Location"

/**
 * @brief last WPS location(string)
 */
#define VCONFKEY_LOCATION_NV_LAST_WPS_LOCATION "db/location/last/wps/Location"

/**
 * @}
 */

#endif				/* __VCONF_INTERNAL_LOCATION_KEYS_H__ */
