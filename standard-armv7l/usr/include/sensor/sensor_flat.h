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

#ifndef __SAMSUNG_LINUX_SENSOR_FLAT_H__
#define __SAMSUNG_LINUX_SENSOR_FLAT_H__


//! Pre-defined events for the pedometer sensor
//! Sensor Plugin developer can add more event to their own headers

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @defgroup SENSOR_FLAT Pedometer Sensor
 * @ingroup SENSOR_FRAMEWORK
 *
 * These APIs are used to control the Pedometer sensor.
 * @{
 */

enum flat_data_id {
	FLAT_BASE_DATA_SET 				= (FLAT_SENSOR << 16) | 0x0001,
};

enum flat_event_type {
	FLAT_EVENT_CHANGE_STATE			= (FLAT_SENSOR << 16) | 0x0001,
};

enum flat_change_state {
	FLAT_UNKNOWN	= 0,
	FLAT_FACE_UP	= 1,
	FLAT_FACE_DOWN	= 2,
	FLAT_NONE	= 3,
};

enum flat_property_id {
	FLAT_PROPERTY_UNKNOWN = 0,
};

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
//! End of a file
