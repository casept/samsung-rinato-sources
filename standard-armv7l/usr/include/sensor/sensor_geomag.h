/*
 * libslp-sensor
 *
 * Copyright (c) 2013 Samsung Electronics Co., Ltd.
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

#ifndef __SENSOR_GEOMAG_H__
#define __SENSOR_GEOMAG_H__

//! Pre-defined events for the geomagnetic sensor
//! Sensor Plugin developer can add more event to their own headers

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @defgroup SENSOR_GEOMAG Geomagnetic Sensor
 * @ingroup SENSOR_FRAMEWORK
 * 
 * These APIs are used to control the Geomagnatic sensor.
 * @{
 */

enum geomag_data_id {
	GEOMAGNETIC_BASE_DATA_SET		= (GEOMAGNETIC_SENSOR << 16) | 0x0001,
	GEOMAGNETIC_RAW_DATA_SET 		= (GEOMAGNETIC_SENSOR << 16) | 0x0001,
	GEOMAGNETIC_ATTITUDE_DATA_SET	= (GEOMAGNETIC_SENSOR << 16) | 0x0002,
};

enum geomag_evet_type {			
	GEOMAGNETIC_EVENT_CALIBRATION_NEEDED			= (GEOMAGNETIC_SENSOR << 16) | 0x0001,
	GEOMAGNETIC_EVENT_RAW_DATA_REPORT_ON_TIME       = (GEOMAGNETIC_SENSOR << 16) | 0x0002,
	GEOMAGNETIC_EVENT_ATTITUDE_DATA_REPORT_ON_TIME 	= (GEOMAGNETIC_SENSOR << 16) | 0x0004,
};

enum geomag_property_id {
	GEOMAGNETIC_PROPERTY_UNKNOWN = 0,
	GEOMAGNETIC_PROPERTY_SET_ACCEL_CALIBRATION,
	GEOMAGNETIC_PROPERTY_CHECK_ACCEL_CALIBRATION,
};

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
//! End of a file
