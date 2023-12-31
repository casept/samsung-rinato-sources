/*
 * DLOG
 * Copyright (c) 2005-2008, The Android Open Source Project
 * Copyright (c) 2012-2013 Samsung Electronics Co., Ltd.
 *
 * Licensed under the Apache License, Version 2.0 (the License);
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/**
 * @file	dlog.h
 * @version	0.4
 * @brief	This file is the header file of interface of dlog.
 */
/**
 * @addtogroup CAPI_BASE_DLOG_MODULE
 * @{
 *
 */
#ifndef	_DLOG_H_
#define	_DLOG_H_

#include <stdarg.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/*
 * This is the local tag used for the following simplified
 * logging macros.  You can change this preprocessor definition
 * before using the other macros to change the tag.
 */
#ifndef LOG_TAG
#define LOG_TAG NULL
#endif

#ifndef __MODULE__
#define __MODULE__ (strrchr(__FILE__, '/') ? strrchr(__FILE__, '/') + 1 : __FILE__)
#endif

#ifdef TIZEN_ENGINEER_MODE
#ifndef TIZEN_DEBUG_ENABLE
#define TIZEN_DEBUG_ENABLE
#endif
#endif

/*
 * log priority values, in ascending priority order.
 */
typedef enum {
	DLOG_UNKNOWN = 0,
	DLOG_DEFAULT,
	DLOG_VERBOSE,
	DLOG_DEBUG,
	DLOG_INFO,
	DLOG_WARN,
	DLOG_ERROR,
	DLOG_FATAL,
	DLOG_SILENT,
	DLOG_PRIO_MAX	/* Keep this always at the end. */
} log_priority;

typedef enum {
    LOG_ID_MAIN = 0,
	LOG_ID_RADIO,
	LOG_ID_SYSTEM,
	LOG_ID_APPS,
	LOG_ID_MAX
} log_id_t;

#define CONDITION(cond)     (__builtin_expect((cond) != 0, 0))
#define NOP(fmt, arg...) ({ do { } while (0); })

// Macro inner work---------------------------------------------------------------
#undef LOG_
#ifdef TIZEN_DEBUG_ENABLE
#define LOG_(id, prio, tag, fmt, arg...) \
	({ do { \
		__dlog_print(id, prio, tag, "%s: %s(%d) > " fmt, __MODULE__, __func__, __LINE__, ##arg); \
	} while (0); })
#else
#define LOG_(id, prio, tag, fmt, arg...) \
	({ do { \
		if ((int)prio != DLOG_DEBUG) { \
			__dlog_print(id, prio, tag, "%s: %s(%d) > " fmt, __MODULE__, __func__, __LINE__, ##arg); \
		} \
	} while (0); })
#endif

#undef SECURE_LOG_
#ifdef TIZEN_DEBUG_ENABLE
#define SECURE_LOG_(id, prio, tag, fmt, arg...) \
	({ do { \
		__dlog_print(id, prio, tag, "%s: %s(%d) > [SECURE_LOG] " fmt, __MODULE__, __func__, __LINE__, ##arg); \
	} while (0); })
#else
#define SECURE_LOG_(id, prio, tag, fmt, arg...) NOP(fmt, ##arg)
#endif
// ---------------------------------------------------------------------
/**
 * For Secure Log.
 * Normally we strip Secure log from release builds.
 * Please use this macros.
 */
/**
 * For Application and etc.
 * Simplified macro to send a main log message using the current LOG_TAG.
 * Example:
 *  SECURE_LOGD("app debug %d", num);
 *  SECURE_LOGE("app error %d", num);
 */
#define SECURE_LOGD(format, arg...) SECURE_LOG_(LOG_ID_MAIN, DLOG_DEBUG, LOG_TAG, format, ##arg)
#define SECURE_LOGI(format, arg...) SECURE_LOG_(LOG_ID_MAIN, DLOG_INFO, LOG_TAG, format, ##arg)
#define SECURE_LOGW(format, arg...) SECURE_LOG_(LOG_ID_MAIN, DLOG_WARN, LOG_TAG, format, ##arg)
#define SECURE_LOGE(format, arg...) SECURE_LOG_(LOG_ID_MAIN, DLOG_ERROR, LOG_TAG, format, ##arg)
#define SECURE_LOGF(format, arg...) SECURE_LOG_(LOG_ID_MAIN, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * For Framework and system etc.
 * Simplified macro to send a system log message using the current LOG_TAG.
 * Example:
 *  SECURE_SLOGD("system debug %d", num);
 *  SECURE_SLOGE("system error %d", num);
 */
#define SECURE_SLOGD(format, arg...) SECURE_LOG_(LOG_ID_SYSTEM, DLOG_DEBUG, LOG_TAG, format, ##arg)
#define SECURE_SLOGI(format, arg...) SECURE_LOG_(LOG_ID_SYSTEM, DLOG_INFO, LOG_TAG, format, ##arg)
#define SECURE_SLOGW(format, arg...) SECURE_LOG_(LOG_ID_SYSTEM, DLOG_WARN, LOG_TAG, format, ##arg)
#define SECURE_SLOGE(format, arg...) SECURE_LOG_(LOG_ID_SYSTEM, DLOG_ERROR, LOG_TAG, format, ##arg)
#define SECURE_SLOGF(format, arg...) SECURE_LOG_(LOG_ID_SYSTEM, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * For Modem and radio etc.
 * Simplified macro to send a radio log message using the current LOG_TAG.
 * Example:
 *  SECURE_RLOGD("radio debug %d", num);
 *  SECURE_RLOGE("radio error %d", num);
 */
#define SECURE_RLOGD(format, arg...) SECURE_LOG_(LOG_ID_RADIO, DLOG_DEBUG, LOG_TAG, format, ##arg)
#define SECURE_RLOGI(format, arg...) SECURE_LOG_(LOG_ID_RADIO, DLOG_INFO, LOG_TAG, format, ##arg)
#define SECURE_RLOGW(format, arg...) SECURE_LOG_(LOG_ID_RADIO, DLOG_WARN, LOG_TAG, format, ##arg)
#define SECURE_RLOGE(format, arg...) SECURE_LOG_(LOG_ID_RADIO, DLOG_ERROR, LOG_TAG, format, ##arg)
#define SECURE_RLOGF(format, arg...) SECURE_LOG_(LOG_ID_RADIO, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * For Tizen OSP Application macro.
 */
#define SECURE_ALOGD(format, arg...) SECURE_LOG_(LOG_ID_APPS, DLOG_DEBUG, LOG_TAG, format, ##arg)
#define SECURE_ALOGI(format, arg...) SECURE_LOG_(LOG_ID_APPS, DLOG_INFO, LOG_TAG, format, ##arg)
#define SECURE_ALOGW(format, arg...) SECURE_LOG_(LOG_ID_APPS, DLOG_WARN, LOG_TAG, format, ##arg)
#define SECURE_ALOGE(format, arg...) SECURE_LOG_(LOG_ID_APPS, DLOG_ERROR, LOG_TAG, format, ##arg)
#define SECURE_ALOGF(format, arg...) SECURE_LOG_(LOG_ID_APPS, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * If you want use redefined macro.
 * You can use this macro.
 * This macro need priority and tag arguments.
 */
#define SECURE_LOG(priority, tag, format, arg...) SECURE_LOG_(LOG_ID_MAIN, D##priority, tag, format, ##arg)
#define SECURE_SLOG(priority, tag, format, arg...) SECURE_LOG_(LOG_ID_SYSTEM, D##priority, tag, format, ##arg)
#define SECURE_RLOG(priority, tag, format, arg...) SECURE_LOG_(LOG_ID_RADIO, D##priority, tag, format, ##arg)
#define SECURE_ALOG(priority, tag, format, arg...) SECURE_LOG_(LOG_ID_APPS, D##priority, tag, format, ##arg)

/**
 * For Application and etc.
 * Simplified macro to send a main log message using the current LOG_TAG.
 * Example:
 *  LOGD("app debug %d", num);
 *  LOGE("app error %d", num);
 */
#ifdef TIZEN_DEBUG_ENABLE
#define LOGD(format, arg...) LOG_(LOG_ID_MAIN, DLOG_DEBUG, LOG_TAG, format, ##arg)
#else
#define LOGD(format, arg...) NOP(format, ##arg)
#endif
#define LOGI(format, arg...) LOG_(LOG_ID_MAIN, DLOG_INFO, LOG_TAG, format, ##arg)
#define LOGW(format, arg...) LOG_(LOG_ID_MAIN, DLOG_WARN, LOG_TAG, format, ##arg)
#define LOGE(format, arg...) LOG_(LOG_ID_MAIN, DLOG_ERROR, LOG_TAG, format, ##arg)
#define LOGF(format, arg...) LOG_(LOG_ID_MAIN, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * For Framework and system etc.
 * Simplified macro to send a system log message using the current LOG_TAG.
 * Example:
 *  SLOGD("system debug %d", num);
 *  SLOGE("system error %d", num);
 */
#ifdef TIZEN_DEBUG_ENABLE
#define SLOGD(format, arg...) LOG_(LOG_ID_SYSTEM, DLOG_DEBUG, LOG_TAG, format, ##arg)
#else
#define SLOGD(format, arg...) NOP(format, ##arg)
#endif
#define SLOGI(format, arg...) LOG_(LOG_ID_SYSTEM, DLOG_INFO, LOG_TAG, format, ##arg)
#define SLOGW(format, arg...) LOG_(LOG_ID_SYSTEM, DLOG_WARN, LOG_TAG, format, ##arg)
#define SLOGE(format, arg...) LOG_(LOG_ID_SYSTEM, DLOG_ERROR, LOG_TAG, format, ##arg)
#define SLOGF(format, arg...) LOG_(LOG_ID_SYSTEM, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * For Modem and radio etc.
 * Simplified macro to send a radio log message using the current LOG_TAG.
 * Example:
 *  RLOGD("radio debug %d", num);
 *  RLOGE("radio error %d", num);
 */
#ifdef TIZEN_DEBUG_ENABLE
#define RLOGD(format, arg...) LOG_(LOG_ID_RADIO, DLOG_DEBUG, LOG_TAG, format, ##arg)
#else
#define RLOGD(format, arg...) NOP(format, ##arg)
#endif
#define RLOGI(format, arg...) LOG_(LOG_ID_RADIO, DLOG_INFO, LOG_TAG, format, ##arg)
#define RLOGW(format, arg...) LOG_(LOG_ID_RADIO, DLOG_WARN, LOG_TAG, format, ##arg)
#define RLOGE(format, arg...) LOG_(LOG_ID_RADIO, DLOG_ERROR, LOG_TAG, format, ##arg)
#define RLOGF(format, arg...) LOG_(LOG_ID_RADIO, DLOG_FATAL, LOG_TAG, format, ##arg)
/**
 * For Tizen OSP Application macro.
 */
#ifdef TIZEN_DEBUG_ENABLE
#define ALOGD(format, arg...) LOG_(LOG_ID_APPS, DLOG_DEBUG, LOG_TAG, format, ##arg)
#else
#define ALOGD(format, arg...) NOP(format, ##arg)
#endif
#define ALOGI(format, arg...) LOG_(LOG_ID_APPS, DLOG_INFO, LOG_TAG, format, ##arg)
#define ALOGW(format, arg...) LOG_(LOG_ID_APPS, DLOG_WARN, LOG_TAG, format, ##arg)
#define ALOGE(format, arg...) LOG_(LOG_ID_APPS, DLOG_ERROR, LOG_TAG, format, ##arg)
#define ALOGF(format, arg...) LOG_(LOG_ID_APPS, DLOG_FATAL, LOG_TAG, format, ##arg)

/**
 * Basic log message macro that allows you to specify a priority and a tag
 * if you want to use this macro directly, you must add this messages for unity of messages.
 * (LOG(prio, tag, "%s: %s(%d) > " format, __MODULE__, __func__, __LINE__, ##arg))
 *
 * Example:
 *  #define MYMACRO(prio, tag, format, arg...) \
 *          LOG(prio, tag, format, ##arg)
 *
 *  MYMACRO(LOG_DEBUG, MYTAG, "test mymacro %d", num);
 *
 */
#ifndef LOG
#define LOG(priority, tag, format, arg...) LOG_(LOG_ID_MAIN, D##priority, tag, format, ##arg)
#endif
#define SLOG(priority, tag, format, arg...) LOG_(LOG_ID_SYSTEM, D##priority, tag, format, ##arg)
#define RLOG(priority, tag, format, arg...) LOG_(LOG_ID_RADIO, D##priority, tag, format, ##arg)
#define ALOG(priority, tag, format, arg...) LOG_(LOG_ID_APPS, D##priority, tag, format, ##arg)

#define LOG_VA(priority, tag, fmt, args) \
	vprint_log(D##priority, tag, fmt, args)
#define ALOG_VA(priority, tag, fmt, args) \
	vprint_apps_log(D##priority, tag, fmt, args)
#define RLOG_VA(priority, tag, fmt, args) \
	vprint_radio_log(D##priority, tag, fmt, args)
#define SLOG_VA(priority, tag, fmt, args) \
	vprint_system_log(D##priority, tag, fmt, args)
#define print_apps_log(prio, tag, fmt...) \
	__dlog_print(LOG_ID_APPS, prio, tag, fmt)
#define vprint_apps_log(prio, tag, fmt...) \
	__dlog_vprint(LOG_ID_APPS, prio, tag, fmt)
#define print_log(prio, tag, fmt...) \
	__dlog_print(LOG_ID_MAIN, prio, tag, fmt)
#define vprint_log(prio, tag, fmt...) \
	__dlog_vprint(LOG_ID_MAIN, prio, tag, fmt)
#define print_radio_log(prio, tag, fmt...)\
	__dlog_print(LOG_ID_RADIO, prio, tag, fmt)
#define vprint_radio_log(prio, tag, fmt...) \
	__dlog_vprint(LOG_ID_RADIO, prio, tag, fmt)
#define print_system_log(prio, tag, fmt...)\
	__dlog_print(LOG_ID_SYSTEM, prio, tag, fmt)
#define vprint_system_log(prio, tag, fmt...) \
	__dlog_vprint(LOG_ID_SYSTEM, prio, tag, fmt)

// ---------------------------------------------------------------------
// Don't use below macro no more!! It will be removed -- Verbose and Fatal priority macro will be removed --
#define COMPATIBILITY_ON
#ifdef COMPATIBILITY_ON
/**
 * Conditional Macro.
 * Don't use this macro. It's just compatibility.
 * It will be deprecated.
 */
#define LOGD_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			LOGD(format, ##arg); \
		} \
	} while (0); })
#define LOGI_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			LOGI(format, ##arg); \
		} \
	} while (0); })
#define LOGW_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			LOGW(format, ##arg); \
		} \
	} while (0); })
#define LOGE_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			LOGE(format, ##arg); \
		} \
	} while (0); })
#define LOGF_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			LOGF(format, ##arg); \
		} \
	} while (0); })
#define SLOGD_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			SLOGD(format, ##arg); \
		} \
	} while (0); })
#define SLOGI_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			SLOGI(format, ##arg); \
		} \
	} while (0); })
#define SLOGW_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			SLOGW(format, ##arg); \
		} \
	} while (0); })
#define SLOGE_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			SLOGE(format, ##arg); \
		} \
	} while (0); })
#define SLOGF_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			SLOGF(format, ##arg); \
		} \
	} while (0); })
#define RLOGD_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			RLOGD(format, ##arg); \
		} \
	} while (0); })
#define RLOGI_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			RLOGI(format, ##arg); \
		} \
	} while (0); })
#define RLOGW_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			RLOGW(format, ##arg); \
		} \
	} while (0); })
#define RLOGE_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			RLOGE(format, ##arg); \
		} \
	} while (0); })
#define RLOGF_IF(cond, format, arg...) \
	({ do { \
		if (CONDITION(cond)) { \
			RLOGF(format, ##arg); \
		} \
	} while (0); })
#define LOG_ON() ({ do { } while (0); })
#define LOGV(format, arg...) NOP(format, ##arg)
#define SLOGV(format, arg...) NOP(format, ##arg)
#define RLOGV(format, arg...) NOP(format, ##arg)
#define ALOGV(format, arg...) NOP(format, ##arg)
#define LOGV_IF(cond, format, arg...) NOP(format, ##arg)
#define SLOGV_IF(cond, format, arg...) NOP(format, ##arg)
#define RLOGV_IF(cond, format, arg...) NOP(format, ##arg)
#define SECLOG(...) ({ do { } while (0); })
#endif
// Don't use above macro no more!! It will be removed -Verbose, Warning and Fatal priority macro.
// ---------------------------------------------------------------------
/*
 * The stuff in the rest of this file should not be used directly.
 */
/**
 * @brief		send log. must specify log_id ,priority, tag and format string.
 * @pre		none
 * @post		none
 * @see		__dlog_print
 * @remarks	you must not use this API directly. use macros instead.
 * @param[in]	log_id	log device id
 * @param[in]	prio	priority
 * @param[in]	tag	tag
 * @param[in]	fmt	format string
 * @return			Operation result
 * @retval		0>=	Success
 * @retval              -1	Error
 * @code
// you have to use LOG(), SLOG(), RLOG() family not to use __dlog_print() directly
// so below example is just for passing Documentation Verification !!!
#define LOG_TAG USR_TAG
#include<dlog.h>
 __dlog_print(LOG_ID_MAIN, DLOG_INFO, USR_TAG, "you must not use this API directly");
 * @endcode
 */
int __dlog_print(log_id_t log_id, int prio, const char *tag, const char *fmt, ...);

/**
 * @brief		send log with va_list. must specify log_id ,priority, tag and format string.
 * @pre		none
 * @post		none
 * @see		__dlog_print
 * @remarks	you must not use this API directly. use macros instead.
 * @param[in]	log_id	log device id
 * @param[in]	prio	priority
 * @param[in]	tag	tag
 * @param[in]	fmt	format string
 * @param[in]	ap	va_list
 * @return			Operation result
 * @retval		0>=	Success
 * @retval              -1	Error
 * @code
 // you have to use LOG_VA(), SLOG_VA(), RLOG_VA() family not to use __dlog_print() directly
 // so below example is just for passing Documentation Verification !!!
#define LOG_TAG USR_TAG
#include<dlog.h>
  __dlog_vprint(LOG_ID_MAIN, DLOG_INFO, USR_TAG, "you must not use this API directly", ap);
 * @endcode
  */
int __dlog_vprint(log_id_t log_id, int prio, const char *tag, const char *fmt, va_list ap);
#ifdef __cplusplus
}
#endif /* __cplusplus */
/** @} */
#endif /* _DLOG_H_*/
