/******************************************************************************
 *                       Samsung Electronics Co., Ltd.                        *
 *                                                                            *
 *                           Copyright (C) 2010                               *
 *                          All rights reserved.                              *
 *                                                                            *
 *                       Mobile Media Lab. R&D Center                         *
 *                 Digital Media & Communications Business                    *
 *                                                                            *
 * This software is the confidential and proprietary information of Samsung   *
 * Electronics Co., Ltd. ("Confidential Information"). You shall not disclose *
 * such Confidential Information and shall use it only in accordance with the *
 * terms of the license agreement you entered into with Samsung Electronics   *
 * Co., Ltd.                                                                  *
 *                                                                            *
 * Removing or modifying of the above copyright notice or the following       *
 * descriptions will terminate the right of using this software.              *
 *                                                                            *
 * As a matter of courtesy, the authors request to be informed about uses of  *
 * this software and about bugs in this software.                             *
 ******************************************************************************/

/******************************************************************************
 * Definitions for Bitstream Buffer for Media Data                            *
 *                                                                            *
 ******************************************************************************/

#ifndef __SCMN_BITB_H__93024738294683924783920473829473829__
#define __SCMN_BITB_H__93024738294683924783920473829473829__

#ifdef __cplusplus
extern "C"
{
#endif

/* bitstream buffer definition ***********************************************/
typedef struct
{
	/* user space address indicating buffer */
	void   * addr;
	/* physical address indicating buffer, if any */
	void   * pddr;
	/* byte size of buffer */
	int      size;
	/* bitstream has an error? */
	int      err;
	/* media type, if any */
	int      mt;
	/* to align memory */
	int      __dummy0;
	/* arbitrary data */
	int      data[16];
} SCMN_BITB;

#ifdef __cplusplus
}
#endif

#endif /* __SCMN_BITB_H__93024738294683924783920473829473829__ */

