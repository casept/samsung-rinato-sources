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

#ifndef __SENSOR_BIO_H__
#define __SENSOR_BIO_H__

//! Pre-defined events for the bio sensor
//! Sensor Plugin developer can add more event to their own headers

#ifdef __cplusplus
extern "C"
{
#endif

/**
 * @defgroup SENSOR_BIO BIO Sensor
 * @ingroup SENSOR_FRAMEWORK
 *
 * These APIs are used to control the bio sensor.
 * @{
 */

enum bio_data_id {
	BIO_BASE_DATA_SET	= (BIO_SENSOR << 16) | 0x0001,
};

enum bio_event_type {
	BIO_EVENT_RAW_DATA_REPORT_ON_TIME	= (BIO_SENSOR << 16) | 0x0001,
};

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
//! End of a file
