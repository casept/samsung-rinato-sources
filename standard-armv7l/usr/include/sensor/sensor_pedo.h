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

#ifndef __SENSOR_PEDO_H__
#define __SENSOR_PEDO_H__

//! Pre-defined events for the pedometer sensor
//! Sensor Plugin developer can add more event to their own headers

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @defgroup SENSOR_PEDO Pedometer Sensor
 * @ingroup SENSOR_FRAMEWORK
 *
 * These APIs are used to control the Pedometer sensor.
 * @{
 */

enum pedo_data_id {
	PEDOMETER_BASE_DATA_SET	= (PEDOMETER_SENSOR << 16) | 0x0001,
};

enum pedo_event_type {
	PEDOMETER_EVENT_STEP_COUNT	= (PEDOMETER_SENSOR << 16) | 0x0001,
};

enum pedo_property_id {
	PEDOMETER_PROPERTY_UNKNOWN	= 0,
};

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
//! End of a file
