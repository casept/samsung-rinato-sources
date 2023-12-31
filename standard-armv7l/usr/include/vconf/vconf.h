/*
 * libslp-setting
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

#ifndef __VCONF_H__
#define __VCONF_H__

#include "vconf-keys.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @addtogroup StorageFW_VCONF_MODULE
 * @{
 */

#define VCONF_OK                 	0
#define VCONF_ERROR              	-1

#define VCONF_ERROR_WRONG_PREFIX	-2
#define VCONF_ERROR_WRONG_TYPE		-3
#define VCONF_ERROR_WRONG_VALUE		-4
#define VCONF_ERROR_NOT_INITIALIZED -5
#define VCONF_ERROR_NO_MEM			-6

#define VCONF_ERROR_FILE_PERM		-11
#define VCONF_ERROR_FILE_BUSY		-12
#define VCONF_ERROR_FILE_NO_MEM		-13
#define VCONF_ERROR_FILE_NO_ENT		-14

#define VCONF_ERROR_FILE_OPEN		-21
#define VCONF_ERROR_FILE_FREAD		-22
#define VCONF_ERROR_FILE_FGETS		-23
#define VCONF_ERROR_FILE_WRITE		-24
#define VCONF_ERROR_FILE_SYNC		-25
#define VCONF_ERROR_FILE_CLOSE		-26
#define VCONF_ERROR_FILE_ACCESS		-27
#define VCONF_ERROR_FILE_CHMOD		-28
#define VCONF_ERROR_FILE_LOCK		-29
#define VCONF_ERROR_FILE_REMOVE		-30
#define VCONF_ERROR_FILE_SEEK		-31
#define VCONF_ERROR_FILE_TRUNCATE	-32


/**
 * VCONF_GET_KEY, VCONF_GET_ALL, VCONF_GET_DIR
 * \n Use for vconf_get()
 * @see vconf_get()
 */
enum get_option_t {
	VCONF_GET_KEY = 0,
	    /**< get only keys */
	VCONF_GET_ALL,
	    /**< get keys and directorys */
	VCONF_GET_DIR
	   /**< get only directorys */
};
typedef enum get_option_t get_option_t;

enum vconf_t {
	VCONF_TYPE_NONE = 0,
		   /**< Vconf none type for Error detection */
	VCONF_TYPE_STRING = 40,
		   /**< Vconf string type */
	VCONF_TYPE_INT = 41,
		   /**< Vconf integer type */
	VCONF_TYPE_DOUBLE = 42,
		   /**< Vconf double type */
	VCONF_TYPE_BOOL = 43,
		   /**< Vconf boolean type */
	VCONF_TYPE_DIR
		   /**< Vconf directory type */
};


/**
 * keynode_t is an opaque type, it must be
 * used via accessor functions.
 * @see vconf_keynode_get_name(), vconf_keynode_get_type()
 * @see vconf_keynode_get_bool(), vconf_keynode_get_dbl(), vconf_keynode_get_int(), vconf_keynode_get_str()
 */
typedef struct _keynode_t {
	char *keyname;
	int type;
	union {
		int i;
		int b;
		double d;
		char *s;
	} value;
	struct _keynode_t *next;
} keynode_t;

/**
 * keylist_t is an opaque type, it must be
 * used via accessor functions.
 * @see vconf_keylist_new(), vconf_keylist_free()
 * @see vconf_keylist_add_bool(),vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_int()
 * @see vconf_keylist_del(), vconf_keylist_add_null()
 * @see vconf_keylist_lookup(), vconf_keylist_nextnode(), vconf_keylist_rewind()
 */
typedef struct _keylist_t {
	int num;
	keynode_t *head;
	keynode_t *cursor;
} keylist_t;


/**
 * This is the signature of a callback function added with vconf_notify_key_changed().
 * \n The callback function is invoked when the key is set.
 * @see keynode_t
 */
	typedef void (*vconf_callback_fn) (keynode_t *node, void *user_data);

/************************************************
 * keynode handling APIs                        *
 ************************************************/

/**
 * This function gets Key name of the keynode.
 * @param[in] keynode The Key
 * @return Key Name of the keynode
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed(), vconf_keynode_get_bool, vconf_keynode_get_type, vconf_keynode_get_str, vconf_keynode_get_int, vconf_keynode_get_dbl, keynode_t, vconf_t
 */
	char *vconf_keynode_get_name(keynode_t *keynode);

/**
 * This function gets value type of the keynode.
 * @param[in] keynode The Key
 * @return Type of the keynode
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed(), vconf_keynode_get_name, vconf_keynode_get_bool, vconf_keynode_get_str, vconf_keynode_get_int, vconf_keynode_get_dbl, keynode_t, vconf_t
 */
	int vconf_keynode_get_type(keynode_t *keynode);

/**
 * This function gets Integer value of the keynode.
 * @param[in] keynode The Key
 * @return Integer value, or 0 if no value is obtained
 ** @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed(), vconf_keynode_get_name, vconf_keynode_get_bool, vconf_keynode_get_type, vconf_keynode_get_str, vconf_keynode_get_dbl, keynode_t, vconf_t
 */
	int vconf_keynode_get_int(keynode_t *keynode);

/**
 * This function gets Double value of the keynode.
 * @param[in] keynode The Key
 * @return Double value, or 0.0 if no value is obtained
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed(), vconf_keynode_get_name, vconf_keynode_get_bool, vconf_keynode_get_type, vconf_keynode_get_str, vconf_keynode_get_int, keynode_t, vconf_t
 */
	double vconf_keynode_get_dbl(keynode_t *keynode);

/**
 * This function gets Boolean value of the keynode.
 * @param[in] keynode The Key
 * @return Boolean value, -1 on error (Integer value 1 is 'True', and 0 is 'False')
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed(), vconf_keynode_get_name, vconf_keynode_get_type, vconf_keynode_get_str, vconf_keynode_get_int, vconf_keynode_get_dbl, keynode_t, vconf_t
 */
	int vconf_keynode_get_bool(keynode_t *keynode);

/**
 * This function gets String value of the keynode.
 * @param[in] keynode The Key
 * @return String value, or NULL if no value is obtained
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed(), vconf_keynode_get_name, vconf_keynode_get_bool, vconf_keynode_get_type, vconf_keynode_get_int, vconf_keynode_get_dbl, keynode_t, vconf_t
 */
	char *vconf_keynode_get_str(keynode_t *keynode);


/************************************************
 * keylist handling APIs
 ************************************************/

/**
 * Allocate, initialize and return a new Keylist object.
 * Return value keylist_t* pointer must be relised by calling vconf_keylist_free()
 * @return The pointer of New keylist, NULL on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_new(), vconf_keylist_free()
 */
	keylist_t *vconf_keylist_new(void);

/**
 * This function moves the current Keynode position to the first items.
 * @param[in] keylist Key List
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_nextnode(), vconf_keylist_rewind(), vconf_keylist_nextnode()
 * @par example
 * @code
    int r =0;
    keylist_t* pKeyList = NULL;
    pKeyList = vconf_keylist_new();

    r = vconf_get(pKeyList, KEY_PARENT, VCONF_GET_KEY);
    if (r) {
	tet_infoline("vconf_get() failed in positive test case");
	tet_result(TET_FAIL);
	return;
    }

    vconf_keylist_nextnode(pKeyList);
    vconf_keylist_nextnode(pKeyList);

    // Move first position from KeyList
    r = vconf_keylist_rewind(pKeyList);
    if (r<0) {
	tet_infoline("vconf_keylist_rewind() failed in positive test case");
	tet_result(TET_FAIL);
	return;
    }

    while(vconf_keylist_nextnode(pKeyList)) ;
 * @endcode
 */
	int vconf_keylist_rewind(keylist_t *keylist);

/**
 * A destructor for Keylist objects.<br>
 * After calling vconf_keylist_new(), developer have to call this function for release internal memory.
 * @param[in] keylist Key List
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_new()
 */
	int vconf_keylist_free(keylist_t *keylist);

/**
 * This function looks for a Keynode contained in keylist that matches keyname.
 * @param[in] keylist Key List
 * @param[in] keyname Key to find
 * @param[out] return_node pointer of keynode to set
 * @return Type of the found key that is vconf_t enumeration value
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), keynode_t, vconf_t
 * @par example
 * @code
#include <stdio.h>
#include <vconf.h>

int main()
{
	int r = 0;
	int nResult = 0;
	keylist_t* pKeyList = NULL;
	keynode_t *pKeyNode;

	pKeyList = vconf_keylist_new();
	r = vconf_get(pKeyList, KEY_PARENT, VCONF_GET_KEY);
	if (r<0) {
		printf("vconf_get() failed in positive test case");
		return -1;
	}

	r = vconf_keylist_lookup(pKeyList, KEY_02, &pKeyNode);
	if (r<0) {
		printf("vconf_get() failed in positive test case");
		return -1;
	}

	nResult = vconf_keynode_get_int(pKeyNode);
	if(nResult !=KEY_02_INT_VALUE)
	{
		printf("vconf_get() failed in positive test case");
		return -1;

	}

	vconf_keylist_free(pKeyList);
	return 0;
}
 * @endcode
 */
	int vconf_keylist_lookup(keylist_t *keylist, const char *keyname,
				 keynode_t **return_node);

/**
 * This function returns the next Key in a Keylist.
 * Next key is known by the keylist internal cursor.
 * @param[in] keylist Key List
 * @return The next Keynode, NULL on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_rewind(), vconf_keylist_nextnode(), keynode_t
 */
	keynode_t *vconf_keylist_nextnode(keylist_t *keylist);

/**
 * This function appends a new Keynode included integer value to the keylist.
 * \n If same keyname exist, the keynode will change.
 * @param[in] keylist Key List
 * @param[in] keyname Key
 * @param[in] value The integer value
 * @return Number of keynode included in the keylist, -1 on error
 * @see vconf_set(), vconf_get()
 */
	int vconf_keylist_add_int(keylist_t *keylist, const char *keyname,
				  const int value);

/**
 * This function appends a new Keynode included boolean value to the keylist.
 * \n If same keyname exist, the keynode will change.
 * @param[in] keylist Key List
 * @param[in] keyname Key
 * @param[in] value The boolean value
 * @return Number of keynode included in the keylist, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_add_int(), vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_bool(), vconf_keylist_del(), vconf_keylist_add_null()
 */
	int vconf_keylist_add_bool(keylist_t *keylist, const char *keyname,
				   const int value);

/**
 * This function appends a new Keynode included double value to the keylist.
 * \n If same keyname exist, the keynode will change.
 * @param[in] keylist Key List
 * @param[in] keyname Key
 * @param[in] value The double value
 * @return Number of keynode included in the keylist, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_add_int(), vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_bool(), vconf_keylist_del(), vconf_keylist_add_null()
 */
	int vconf_keylist_add_dbl(keylist_t *keylist, const char *keyname,
				  const double value);

/**
 * This function appends a new Keynode included string value to the keylist.
 * \n If same keyname exist, the keynode will change.
 * @param[in] keylist Key List
 * @param[in] keyname Key
 * @param[in] value The pointer of string value
 * @return Number of keynode included in the keylist, -1 on error
 * @pre None
 * @post None
 * @remarks Size limit of value is 4K
 * @see vconf_set(), vconf_get(), vconf_keylist_add_int(), vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_bool(), vconf_keylist_del(), vconf_keylist_add_null()
 */
	int vconf_keylist_add_str(keylist_t *keylist, const char *keyname,
				  const char *value);

/**
 * This function Appends a new Keynode to the keylist without value.
 * \n Use for vconf_get()
 * @param[in] keylist Key List
 * @param[in] keyname Key
 * @return Number of keynode included in the keylist, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_add_int(), vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_bool(), vconf_keylist_del(), vconf_keylist_add_null()
 */
	int vconf_keylist_add_null(keylist_t *keylist, const char *keyname);

/**
 * This function removes the keynode that matches keyname.
 * @param[in] keylist the keylist included the keyname
 * @param[in] keyname key
 * @return 0 on success, -1(Invalid parameter), -2(Not exist keyname in keylist) on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_add_int(), vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_bool(), vconf_keylist_del(), vconf_keylist_add_null()
 */
	int vconf_keylist_del(keylist_t *keylist, const char *keyname);

/************************************************
 * setting APIs                                 *
 ************************************************/

/**
 * This function sets the keys included in keylist.
 * \n If you use db backend, keylist is handled as one transaction.
 * @param[in] keylist the keylist which should contain changed keys
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set(), vconf_get(), vconf_keylist_add_int(), vconf_keylist_add_str(), vconf_keylist_add_dbl(), vconf_keylist_add_bool(), vconf_keylist_del(), vconf_keylist_add_null()
 * @par example
 * @code
#include <stdio.h>
#include <vconf.h>

int main()
{
   keylist_t *kl=NULL;
   const char *keyname_list[3]={"db/test/key1", "db/test/key2", "db/test/key3"};

   // Transaction Test(all or nothing is written)
   kl = vconf_keylist_new();

   vconf_keylist_add_int(kl, keyname_list[0], 1);
   vconf_keylist_add_str(kl, keyname_list[1], "transaction Test");
   vconf_keylist_add_dbl(kl, keyname_list[2], 0.3);
   if(vconf_set(kl))
      fprintf(stderr, "nothing is written\n");
   else
      printf("everything is written\n");

   vconf_keylist_free(kl);

   // You can set items which have different backend.
   kl = vconf_keylist_new();

   vconf_keylist_add_int(kl, "memory/a/xxx1", 4);
   vconf_keylist_add_str(kl, "file/a/xxx2", "test 3");
   vconf_keylist_add_dbl(kl, "db/a/xxx3", 0.3);
   vconf_set(kl)

   vconf_keylist_free(kl);
   return 0;
}
 * @endcode
 */
	int vconf_set(keylist_t *keylist);

/**
 * This function sets the integer value of given key.
 * @param[in]	in_key	key
 * @param[in]	intval integer value to set (0 is also allowed as a value.)
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set_bool(), vconf_set_dbl(), vconf_set_str()
 */
	int vconf_set_int(const char *in_key, const int intval);

/**
 * This function sets the boolean value of given key.
 * @param[in]	in_key	key
 * @param[in]	boolval boolean value(1 or 0) to set.  (Integer value 1 is 'True', and 0 is 'False')
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set_int(), vconf_set_dbl(), vconf_set_str()
 * @par example
 * @code
#include <stdio.h>
#include <vconf.h>

 const char *key1_name="memory/test/key1";

 int main(int argc, char **argv)
 {
   int key1_value;

   if(vconf_set_bool(key1_name, 1))
      fprintf(stderr, "vconf_set_bool FAIL\n");
   else
      printf("vconf_set_bool OK\n");

   if(vconf_get_bool(key1_name, &key1_value))
      fprintf(stderr, "vconf_get_bool FAIL\n");
   else
      printf("vconf_get_bool OK(key1 value is %d)\n", key1_value);

   return 0;
 }
 * @endcode
 */
	int vconf_set_bool(const char *in_key, const int boolval);

/**
 * This function sets the double value of given key.
 * @param[in]	in_key	key
 * @param[in]	dblval double value to set (0.0 is also allowed as a value.)
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_set_int(), vconf_set_bool(), vconf_set_str()
 */
	int vconf_set_dbl(const char *in_key, const double dblval);

/**
 * This function sets the string value of given key.
 * @param[in]	in_key	key
 * @param[in]	strval string value to set
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks Size limit of value is 4K
 * @see vconf_set_bool(), vconf_set_dbl(), vconf_set_int()
 */
	int vconf_set_str(const char *in_key, const char *strval);

/**
 * This function get the keys or subdirectory in in_parentDIR.<br>
 * If keylist has any key information, vconf only retrieves the keys.<br>
 * This is not recursive.
 * @param[in]	keylist	keylist created by vconf_keylist_new()
 * @param[in]	in_parentDIR parent DIRECTORY of needed keys
 * @param[in]	option VCONF_GET_KEY|VCONF_GET_DIR|VCONF_GET_ALL
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remkar None
 * @par example
 * @code
#include <stdio.h>
#include <vconf.h>

int main()
{
   keylist_t *kl=NULL;
   keynode_t *temp_node;
   const char *vconfkeys1="db/test/key1";
   const char *parent_dir="db/test";

   kl = vconf_keylist_new();
   if(vconf_get(kl, parent_dir, 0))
      fprintf(stderr, "vconf_get FAIL(%s)", vconfkeys1);
   else
      printf("vconf_get OK(%s)", vconfkeys1);

   while((temp_node = vconf_keylist_nextnode(kl))) {
      switch(vconf_keynode_get_type(temp_node)) {
	case VCONF_TYPE_INT:
		printf("key = %s, value = %d\n",
			vconf_keynode_get_name(temp_node), vconf_keynode_get_int(temp_node));
		break;
	case VCONF_TYPE_BOOL:
		printf("key = %s, value = %d\n",
			vconf_keynode_get_name(temp_node), vconf_keynode_get_bool(temp_node));
		break;
	case VCONF_TYPE_DOUBLE:
		printf("key = %s, value = %f\n",
			vconf_keynode_get_name(temp_node), vconf_keynode_get_dbl(temp_node));
		break;
	case VCONF_TYPE_STRING:
		printf("key = %s, value = %s\n",
			vconf_keynode_get_name(temp_node), vconf_keynode_get_str(temp_node));
		break;
	default:
		printf("Unknown Type\n");
      }
   }
   vconf_keylist_free(kl);
}
 * @endcode
 */
	int vconf_get(keylist_t *keylist, const char *in_parentDIR, get_option_t option);

/**
 * This function get the integer value of given key.
 *
 * @param[in]	in_key	key
 * @param[out]	intval output buffer
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remkar None
 * @see vconf_get_bool, vconf_get_dbl, vconf_get_str
 * @par example
 * @code
#include <stdio.h>
#include <vconf.h>

const char *key1_name="db/test/key1";

int main(int argc, char **argv)
{
   int key1_value;

   if(vconf_set_int(key1_name,1))
      fprintf(stderr, "vconf_set_int FAIL\n");
   else
      printf("vconf_set_int OK\n");

   if(vconf_get_int(key1_name, &key1_value))
      fprintf(stderr, "vconf_get_int FAIL\n");
   else
      printf("vconf_get_int OK(key1 value is %d)\n", key1_value);

   return 0;
}
 * @endcode
 */
	int vconf_get_int(const char *in_key, int *intval);

/**
 * This function get the boolean value(1 or 0) of given key.
 * @param[in]	in_key	key
 * @param[out]	boolval output buffer
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_get_int(), vconf_get_dbl(), vconf_get_str()
 */
	int vconf_get_bool(const char *in_key, int *boolval);

/**
 * This function get the double value of given key.
 * @param[in]	in_key	key
 * @param[out]	dblval output buffer
 * @return 0 on success, -1 on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_get_int(), vconf_get_bool(), vconf_get_str()
 */
	int vconf_get_dbl(const char *in_key, double *dblval);

/**
 * This function gets the string value of given key.
 * \n You have to free this returned value.
 * @param[in]	in_key	key
 * @return allocated pointer of key value on success, NULL on error
 * @pre None
 * @post None
 * @remarks None
 * @see vconf_get_int(), vconf_get_dbl(), vconf_get_bool()
 * @par example
 * @code
   #include <stdio.h>
   #include <vconf.h>

   char *get_str=vconf_get_str("db/test/test1");
   if(get_str) {
      printf("vconf_get_str OK(value = %s)", get_str);
      free(get_str);
   }else
      fprintf(stderr, "vconf_get_str FAIL");
 * @endcode
 */
	char *vconf_get_str(const char *in_key);

/**
 * This function deletes given key from backend system.
 * @param[in]	in_key	key
 * @return 0 on success, -1 on error
 */
	int vconf_unset(const char *in_key);

/**
 * This function synchronizes the given key(only file backend) with storage device.
 * @param[in]	in_key	key
 * @return 0 on success, -1 on error
 * @pre Nome
 * @post None
 * @remarks None
 * @par example
 * @code
 if(vconf_set_int("file/test/key1",1))
    fprintf(stderr, "vconf_set_int FAIL\n");
 else {
    printf("vconf_set_int OK\n");
    vconf_sync_key("file/test/key1");
 }
 * @endcode
 */
	int vconf_sync_key(const char *in_key);

/**
 * This function deletes all keys and directories below given Directory from backend system.
 * @param[in]	in_dir	Directory name for removing
 * @return 0 on success, -1 on error
 * @pre Nome
 * @post None
 * @remarks None
 * @par example
 * @code
   vconf_set_int("db/test/key1",1);
   vconf_set_int("db/test/test1/key1",1);
   vconf_set_int("db/test/test2/key1",1);
   vconf_set_int("db/test/key2",1);

   if(vconf_unset_recursive("db/test"))
      fprintf(stderr, "vconf_unset_recursive FAIL\n");
   else
      printf("vconf_unset_recursive OK(deleted db/test\n");

 * @endcode
 */
	int vconf_unset_recursive(const char *in_dir);

/**
 * This function adds a change callback for given key,
 * which is called when the key is set or unset.
 * \n Information(#keynode_t) of the key that changed is delivered to #vconf_callback_fn,
 * or if the key is deleted, the @link #keynode_t keynode @endlink has #VCONF_TYPE_NONE as type.
 * \n Multiple vconf_callback_fn functions may exist for one key.
 * \n The callback is issued in the context of the glib main loop.
 * \n WARNING: This callback mechanism DOES NOT GUARANTEE consistency of data chage. For example,
 * When you have a callback for a certain key, assume that two or more processes are trying to
 * change the value of the key competitively. In this case, your callback function will always
 * get 'CURRENT' value, not the value raised the notify that caused run of the callback.  So,
 * do not use vconf callback when competitive write for a key is happening. In such case, use
 * socket-based IPC(dbus or something else) instead.
 *
 * @param[in]   in_key  key
 * @param[in]   cb      callback function
 * @param[in]   user_data    callback data
 * @return 0 on success, -1 on error
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_ignore_key_changed
 * @par example
 * @code
 void test_cb(keynode_t *key, void* data)
 {
    switch(vconf_keynode_get_type(key))
    {
       case VCONF_TYPE_INT:
	printf("key = %s, value = %d(int)\n",
		vconf_keynode_get_name(key), vconf_keynode_get_int(key));
	break;
       case VCONF_TYPE_BOOL:
	printf("key = %s, value = %d(bool)\n",
		vconf_keynode_get_name(key), vconf_keynode_get_bool(key));
	break;
       case VCONF_TYPE_DOUBLE:
	printf("key = %s, value = %f(double)\n",
		vconf_keynode_get_name(key), vconf_keynode_get_dbl(key));
	break;
       case VCONF_TYPE_STRING:
	printf("key = %s, value = %s(string)\n",
		vconf_keynode_get_name(key), vconf_keynode_get_str(key));
	break;
       default:
	fprintf(stderr, "Unknown Type(%d)\n", vconf_keynode_get_type(key));
	break;
    }
    return;
 }

 int main()
 {
    int i;
    GMainLoop *event_loop;

    g_type_init();

    vconf_notify_key_changed("db/test/test1", test_cb, NULL);

    event_loop = g_main_loop_new(NULL, FALSE);
    g_main_loop_run(event_loop);

    vconf_ignore_key_changed("db/test/test1", test_cb);
    return 0;
 }
 * @endcode
 */
	int vconf_notify_key_changed(const char *in_key, vconf_callback_fn cb,
				     void *user_data);

/**
 * This function removes a change callback for given key,
 * which was added by vconf_notify_key_changed().
 * @param[in]   in_key  key
 * @param[in]   cb      callback function
 * @return 0 on success, -1 on error
 * @pre Nome
 * @post None
 * @remarks None
 * @see vconf_notify_key_changed()
 */
	int vconf_ignore_key_changed(const char *in_key, vconf_callback_fn cb);


/**
 * This function return the most recent error no generated by set,get api.
 * If a prior API call failed but the most recent API call succeeded,
 * the return value from vconf_get_ext_io_errno() is VCONF_OK.
 * @return the most recent error no
 * @pre Nome
 * @post None
 * @remarks None
 * @see None
 */
	int vconf_get_ext_errno(void);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif				/* __VCONF_H__ */
