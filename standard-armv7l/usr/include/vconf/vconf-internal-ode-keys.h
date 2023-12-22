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

#ifndef __VCONF_INTERNAL_ODE_KEYS_H__
#define __VCONF_INTERNAL_ODE_KEYS_H__

/**
 * This file defines keys and values.
 *
 * @file        vconf-internal-ode-keys.h
 * @defgroup    vconf_internal_ode_key Definitions of internal shared Keys for ODE
 * @ingroup     vconf_internal_key
 * @author      sivakumar.kk@samsung.com
 * @version     0.1
 * @brief       This file has the definitions of shared keys for ODE(Device Encryption/Decryption) \n
 */

/* ========================== ODE Keys & Values ============================ */
/**
 * @addtogroup vconf_internal_ode_key
 * @{
 * @brief ode Keys & Values\n
 *        Maintainer : sivakumar.kk@samsung.com
 */

/**
 * @brief ODE Encryption/Decryption state
 * @type :String
 *
 * "encrypted":  partition encrypted \n
 * "unencrypted": partition is normal \n
 * "error_partially_encrypted" : Error during encryption need wipe \n.
 */
#define VCONFKEY_ODE_CRYPTO_STATE		"db/ode/crypto_state"


/**
 * @brief ODE Crypto type
 * @type :String
 *
 * "encrypt": Encryption in progress
 * "decrypt": Decryption in progress
 * "none" :	No function
 */
#define VCONFKEY_ODE_CRYPTO_TYPE		"db/ode/crypto_type"


/**
 * @brief Encryption/Decryption progress(String values in percentage).
 * @type :String
 *
 * 0 to 100: As a String
 */
#define VCONFKEY_ODE_ENCRYPT_PROGRESS	"db/ode/encrypt_progress"


/**
 * @brief Crypto block dev used to map the real block dev.
 * @type :String
 *
 * /dev/dm-0 - crypto block dev as an example.
 */
#define VCONFKEY_ODE_CRYPTO_BLKDEV		"db/ode/crypto_blkdev"


/**
 * @brief ODE Fast Encryption Mode Selection (boot).
 * @type :bool
 *
 * 0 - Fast Encryption Disable (Default).
 * 1 - Fast Encryption Enable.
 */
#define VCONFKEY_ODE_FAST_ENCRYPTION	"db/ode/fast_encryption"


/**
 * @brief SDcard Encryption/Decryption state
 * @type :String
 *
 * "encrypted":  partition encrypted \n
 * "unencrypted": partition is normal \n
 * "error_partially_encrypted" : Error during encryption need wipe \n.
 */
#define VCONFKEY_SDE_CRYPTO_STATE	"db/sde/crypto_state"


/**
 * @brief SDcard Crypto type
 * @type :String
 *
 * "encrypt": Encryption in progress
 * "decrypt": Decryption in progress
 * "none" :	No function
 */
#define VCONFKEY_SDE_CRYPTO_TYPE	"db/sde/crypto_type"


/**
 * @brief Encryption/Decryption progress(String values in percentage).
 * @type :String
 *
 * 0 to 100: As a String
 */
#define VCONFKEY_SDE_ENCRYPT_PROGRESS	"db/sde/encrypt_progress"

/**
 * @brief Disable / Enable new file in SD card Encryption (bool).
 * @type :bool
 *
 * 0 - New file encryption Disable (Default).
 * 1 - New file encryption Enable.
 */
#define VCONFKEY_SDE_ENCRYPT_NEWFILE    "db/sde/encrypt_newfile"

/**
 * @brief Disable / Enable excluding media file in SD card Encryption (bool).
 * @type :bool
 *
 * 0 - Include media file Disable (Default).
 * 1 - Exclude media file Enable.
 */
#define VCONFKEY_SDE_EXCLUDE_MEDIAFILE    "db/sde/exclude_mediafile"

#endif	/* __VCONF_INTERNAL_ODE_KEYS_H__ */
