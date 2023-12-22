/*
 * vconf-internal-keys
 *
 * Copyright (c) 2000 - 2011 Samsung Electronics Co., Ltd. All rights reserved.
 *
 * Contact: Hakjoo Ko <hakjoo.ko@samsung.com>
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

#ifndef __VCONF_INTERNAL_SYSMAN_KEYS_H__
#define __VCONF_INTERNAL_SYSMAN_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-sysman-keys.h
 * @defgroup    vconf_internal_sysman_key Definitions of internal shared Keys for system manager
 * @ingroup     vconf_internal_key
 * @author      jinkun.jang@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for system manager \n
 */

/* ========================== Sysman Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_sysman_key
 * @{
 * @brief System manager Keys & Values\n
 *        Maintainer : jinkun.jang@samsung.com
 */

/**
 * @brief USB-host USB Storage Mount devname (added)
 *
 */
#define VCONFKEY_SYSMAN_ADDED_USB_STORAGE       "memory/sysman/added_usb_storage"

/**
 * @brief USB-host USB Storage Mount devname (removed)
 *
 */
#define VCONFKEY_SYSMAN_REMOVED_USB_STORAGE     "memory/sysman/removed_usb_storage"

/**
 * @brief charger connection status
 *
 * 0 : Disconnected \n
 * 1 : Connected \n
 */
#define VCONFKEY_SYSMAN_CHARGER_STATUS                  "memory/sysman/charger_status"
enum {
	VCONFKEY_SYSMAN_CHARGER_DISCONNECTED = 0,
	VCONFKEY_SYSMAN_CHARGER_CONNECTED
};

/**
 * @brief charge status
 *
 * 0 : Not charging \n
 * 1 : Charging \n
 */
#define VCONFKEY_SYSMAN_BATTERY_CHARGE_NOW          "memory/sysman/charge_now"

/**
 * @brief current battery status
 *
 * 1 : 1% and under \n
 * 2 : 5% and under \n
 * 3 : 15% and under \n
 * 4 : over 15% \n
 * 5 : full \n
 */
#define VCONFKEY_SYSMAN_BATTERY_STATUS_LOW          "memory/sysman/battery_status_low"
enum {
	/** 1% and under */
	VCONFKEY_SYSMAN_BAT_POWER_OFF = 1,
	/** 5% and under */
	VCONFKEY_SYSMAN_BAT_CRITICAL_LOW,
	/** 15% and under */
	VCONFKEY_SYSMAN_BAT_WARNING_LOW,
	/** over 15% */
	VCONFKEY_SYSMAN_BAT_NORMAL,
	/** full */
	VCONFKEY_SYSMAN_BAT_FULL,
	/** power off */
	VCONFKEY_SYSMAN_BAT_REAL_POWER_OFF
};

/**
 * @brief battery capacity
 *
 * 0-100 : battery capacity \n
 */
#define VCONFKEY_SYSMAN_BATTERY_CAPACITY            "memory/sysman/battery_capacity"

/**
 * @brief current battery status
 *
 * 0 : empty(0%~1%) \n
 * 1 : critical(2%~5%) \n
 * 2 : low(6%~15%) \n
 * 3 : high(16%~95%) \n
 * 4 : full(96%~100%) \n
 */
#define VCONFKEY_SYSMAN_BATTERY_LEVEL_STATUS          "memory/sysman/battery_level_status"
enum {
	/** empty(0%~1%) */
	VCONFKEY_SYSMAN_BAT_LEVEL_EMPTY = 0,
	/** critical(2%~5%) */
	VCONFKEY_SYSMAN_BAT_LEVEL_CRITICAL,
	/** low(6%~15%)*/
	VCONFKEY_SYSMAN_BAT_LEVEL_LOW,
	/** high(16%~95%) */
	VCONFKEY_SYSMAN_BAT_LEVEL_HIGH,
	/** full(96%~100%) */
	VCONFKEY_SYSMAN_BAT_LEVEL_FULL
};


/**
 * @brief USB connection status
 *
 * 0 : Disconnected \n
 * 1 : Connected \n
 * 2 : Available \n
 */
#define VCONFKEY_SYSMAN_USB_STATUS                  "memory/sysman/usb_status"
enum {
	VCONFKEY_SYSMAN_USB_DISCONNECTED = 0,
	VCONFKEY_SYSMAN_USB_CONNECTED,
	VCONFKEY_SYSMAN_USB_AVAILABLE
};

/**
 * @brief Earjack connection status & type
 *
 */
#define VCONFKEY_SYSMAN_EARJACK                     "memory/sysman/earjack"
enum {
	VCONFKEY_SYSMAN_EARJACK_REMOVED = 0,
	VCONFKEY_SYSMAN_EARJACK_3WIRE = 0x1,
	VCONFKEY_SYSMAN_EARJACK_4WIRE = 0x3,
	VCONFKEY_SYSMAN_EARJACK_TVOUT = 0x10
};

/**
 * @brief low-memory status
 *
 * 0 : normal \n
 * 1 : 60M and under \n
 * 2 : 40M and under \n
 */
#define VCONFKEY_SYSMAN_LOW_MEMORY                  "memory/sysman/low_memory"
enum {
	/** Normal */
	VCONFKEY_SYSMAN_LOW_MEMORY_NORMAL = 0x01,
	/** 60M and under */
	VCONFKEY_SYSMAN_LOW_MEMORY_SOFT_WARNING = 0x02,
	/** 40M and under */
	VCONFKEY_SYSMAN_LOW_MEMORY_HARD_WARNING = 0x04
};

#define VCONFKEY_SYSMAN_SLIDING_KEYBOARD            "memory/sysman/sliding_keyboard"
enum {
	/** not support */
	VCONFKEY_SYSMAN_SLIDING_KEYBOARD_NOT_SUPPORTED = -1,
	/** sliding keyboard close */
	VCONFKEY_SYSMAN_SLIDING_KEYBOARD_NOT_AVAILABE = 0,
	/** sliding keyboaed open */
	VCONFKEY_SYSMAN_SLIDING_KEYBOAED_AVAILABLE
};

/**
 * @brief mmc mount status
 *
 * 0 : mount completed \n
 * 1 : already mounted \n
 * 2 : mount failed \n
 */
#define VCONFKEY_SYSMAN_MMC_MOUNT					"memory/sysman/mmc_mount"
enum {
	VCONFKEY_SYSMAN_MMC_MOUNT_COMPLETED = 0,
	VCONFKEY_SYSMAN_MMC_MOUNT_ALREADY,
	VCONFKEY_SYSMAN_MMC_MOUNT_FAILED
};

/**
 * @brief mmc umount status
 *
 * 0 : umount completed \n
 * 1 : umount failed \n
 */
#define VCONFKEY_SYSMAN_MMC_UNMOUNT					"memory/sysman/mmc_unmount"
enum {
	VCONFKEY_SYSMAN_MMC_UNMOUNT_COMPLETED = 0,
	VCONFKEY_SYSMAN_MMC_UNMOUNT_FAILED
};

/**
 * @brief mmc format status
 *
 * 0 : mmc format completed \n
 * 1 : mmc format failed \n
 */
#define VCONFKEY_SYSMAN_MMC_FORMAT					"memory/sysman/mmc_format"
enum {
	VCONFKEY_SYSMAN_MMC_FORMAT_COMPLETED = 0,
	VCONFKEY_SYSMAN_MMC_FORMAT_FAILED
};

/**
 * @brief mmc error status
 *
 * 1 : operation not permmitted \n
 * 2 : no such file or directory \n
 * 6 : no such device or address \n
 * 11 : try again \n
 * 12 : out of memory \n
 * 13 : A component of a path was not searchable \n
 * 14 : bad address \n
 * 15 : block device is requested \n
 * 16 : device or resource busy \n
 * 19 : filesystemtype not configured in the kernel \n
 * 20 : target, or a prefix of source, is not a directory \n
 * 22 : point does not exist \n
 * 24 : table of dummy devices is full \n
 * 36 : requested name is too long \n
 * 40 : Too many links encountered during pathname resolution. \n
           Or, a move was attempted, while target is a descendant of source \n
 */
#define VCONFKEY_SYSMAN_MMC_ERR_STATUS					"memory/sysman/mmc_err_status"
enum {
	VCONFKEY_SYSMAN_MMC_EPERM = 1,
	VCONFKEY_SYSMAN_MMC_ENOENT = 2,
	VCONFKEY_SYSMAN_MMC_ENXIO = 6,
	VCONFKEY_SYSMAN_MMC_EAGAIN = 11,
	VCONFKEY_SYSMAN_MMC_ENOMEM = 12,
	VCONFKEY_SYSMAN_MMC_EACCESS = 13,
	VCONFKEY_SYSMAN_MMC_EFAULT = 14,
	VCONFKEY_SYSMAN_MMC_ENOTBLK = 15,
	VCONFKEY_SYSMAN_MMC_EBUSY = 16,
	VCONFKEY_SYSMAN_MMC_ENODEV = 19,
	VCONFKEY_SYSMAN_MMC_ENOTDIR = 20,
	VCONFKEY_SYSMAN_MMC_EINVAL = 22,
	VCONFKEY_SYSMAN_MMC_EMFILE = 24,
	VCONFKEY_SYSMAN_MMC_ENAMETOOLONG = 36,
	VCONFKEY_SYSMAN_MMC_ELOOP = 40
};

/**
 * @brief mmc device changed status
 *
 * 0 : not changed \n
 * 1 : changed \n
 */
#define VCONFKEY_SYSMAN_MMC_DEVICE_CHANGED					"db/sysman/mmc_dev_changed"
enum {
	VCONFKEY_SYSMAN_MMC_NOT_CHANGED = 0,
	VCONFKEY_SYSMAN_MMC_CHANGED
};

/**
 * @brief hdmi status
 *
 * 0 : hdmi disconnected \n
 * 1 : hdmi connected \n
 */
#define VCONFKEY_SYSMAN_HDMI					"memory/sysman/hdmi"
enum {
	VCONFKEY_SYSMAN_HDMI_DISCONNECTED = 0,
	VCONFKEY_SYSMAN_HDMI_CONNECTED
};


/**
 * @brief system time changed status
 *
 * 0 : not changed \n
 * 1 : changed \n
 */
#define VCONFKEY_SYSMAN_STIME				"memory/sysman/stime_changed"
enum {
	VCONFKEY_SYSMAN_STIME_NOT_CHANGED = 0,
	VCONFKEY_SYSMAN_STIME_CHANGED
};

/**
 * @brief system power off status
 *
 * 0 : none \n
 * 1 : poweroff popup \n
 * 2 : direct power off \n
 * 3 : restart target\n
 */
#define VCONFKEY_SYSMAN_POWER_OFF_STATUS			"memory/sysman/power_off"
enum {
	VCONFKEY_SYSMAN_POWER_OFF_NONE = 0,
	VCONFKEY_SYSMAN_POWER_OFF_POPUP = 1,
	VCONFKEY_SYSMAN_POWER_OFF_DIRECT = 2,
	VCONFKEY_SYSMAN_POWER_OFF_RESTART = 3
};

/**
 * @brief mmc format progress check status
 *
 * 0 : none \n
 * 1 : mmc format is prgressing \n
 */
#define VCONFKEY_SYSMAN_MMC_FORMAT_PROGRESS			"memory/sysman/mmc_format_progress"
enum {
	VCONFKEY_SYSMAN_MMC_FORMAT_PROGRESS_NONE = 0,
	VCONFKEY_SYSMAN_MMC_FORMAT_PROGRESS_NOW
};

/**
 * @brief string option
 *
 */
#define VCONFKEY_DEVICED_STRING_OPTION				"db/deviced/string_option"
enum {
	VCONFKEY_DEVICED_STRING_OPTION1,
	VCONFKEY_DEVICED_STRING_OPTION2,  /* reserved */
	VCONFKEY_DEVICED_STRING_OPTION3   /* reserved */
};

/**
 * @brief mount path option
 *
 */
#define VCONFKEY_DEVICED_MOUNT_PATH_OPTION			"db/deviced/mount_path_option"
enum {
	VCONFKEY_DEVICED_MOUNT_PATH_OPTION1,
	VCONFKEY_DEVICED_MOUNT_PATH_OPTION2,   /* reserved */
	VCONFKEY_DEVICED_MOUNT_PATH_OPTION3    /* reserved */
};

/**
 * @brief system boot power on status
 *
 * 0 : none \n
 * 1 : poweron done \n
 */
#define VCONFKEY_DEVICED_BOOT_POWER_ON_STATUS			"memory/deviced/boot_power_on"
enum {
	VCONFKEY_DEVICED_BOOT_POWER_ON_NONE,
	VCONFKEY_DEVICED_BOOT_POWER_ON_DONE
};

/**
 * @}
 */

#endif	/* __VCONF_INTERNAL_SYSMAN_KEYS_H__ */

