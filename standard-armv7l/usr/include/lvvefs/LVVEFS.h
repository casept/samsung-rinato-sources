/****************************************************************************************/
/*  Copyright (c) 2004-2011 NXP Software. All rights are reserved.                      */
/*  Reproduction in whole or in part is prohibited without the prior                    */
/*  written consent of the copyright owner.                                             */
/*                                                                                      */
/*  This software and any compilation or derivative thereof is and                      */
/*  shall remain the proprietary information of NXP Software and is                     */
/*  highly confidential in nature. Any and all use hereof is restricted                 */
/*  and is subject to the terms and conditions set forth in the                         */
/*  software license agreement concluded with NXP Software.                             */
/*                                                                                      */
/*  Under no circumstances is this software or any derivative thereof                   */
/*  to be combined with any Open Source Software in any way or                          */
/*  licensed under any Open License Terms without the express prior                     */
/*  written  permission of NXP Software.                                                */
/*                                                                                      */
/*  For the purpose of this clause, the term Open Source Software means                 */
/*  any software that is licensed under Open License Terms. Open                        */
/*  License Terms means terms in any license that require as a                          */
/*  condition of use, modification and/or distribution of a work                        */
/*                                                                                      */
/*           1. the making available of source code or other materials                  */
/*              preferred for modification, or                                          */
/*                                                                                      */
/*           2. the granting of permission for creating derivative                      */
/*              works, or                                                               */
/*                                                                                      */
/*           3. the reproduction of certain notices or license terms                    */
/*              in derivative works or accompanying documentation, or                   */
/*                                                                                      */
/*           4. the granting of a royalty-free license to any party                     */
/*              under Intellectual Property Rights                                      */
/*                                                                                      */
/*  regarding the work and/or any work that contains, is combined with,                 */
/*  requires or otherwise is based on the work.                                         */
/*                                                                                      */
/*  This software is provided for ease of recompilation only.                           */
/*  Modification and reverse engineering of this software are strictly                  */
/*  prohibited.                                                                         */
/*                                                                                      */
/****************************************************************************************/

/****************************************************************************************/
/*                                                                                      */
/*     Project::                                                                        */
/*     $Author: beq06145 $*/
/*     $Revision: 32004 $*/
/*     $Date: 2012-11-14 10:09:43 +0100 (Wed, 14 Nov 2012) $*/
/*                                                                                      */
/****************************************************************************************/

/****************************************************************************************/
/*                                                                                      */
/*  Header file for the application layer interface of the LVVEFS module                 */
/*                                                                                      */
/*  This files includes all definitions, types, structures and function prototypes      */
/*  required by the calling layer. All other types, structures and functions are        */
/*  private.                                                                            */
/*                                                                                      */
/****************************************************************************************/

#ifndef __LVVEFS_H__
#define __LVVEFS_H__

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/****************************************************************************************/
/*                                                                                      */
/*  Includes                                                                            */
/*                                                                                      */
/****************************************************************************************/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "LVC_Types.h"


/****************************************************************************************/
/*                                                                                      */
/*  Definitions                                                                         */
/*                                                                                      */
/****************************************************************************************/
#define LVVEFS_MAX_STRING_LENGTH             256
#define LVVEFS_RELATIVE_PATH                 0
#define LVVEFS_ABSOLUTE_PATH                 1
#define LVVEFS_RX_CONFIGURATION_FILENAME     "LVVEFS_Rx_Configuration.txt"
#define LVVEFS_TX_CONFIGURATION_FILENAME     "LVVEFS_Tx_Configuration.txt"

/* Tx I/O ports */
#define LVVEFS_TX_PORT_IN    0                         /* Input port number */
#define LVVEFS_TX_PORT_OUT   1                         /* Output port number*/
#define LVVEFS_TX_PORT_REF   2                         /* Reference port number */
#define LVVEFS_TX_NUM_PORTS  3                         /* Number of ports */

/* Rx I/O ports */
#define LVVEFS_RX_PORT_IN    0                         /* Input port number */
#define LVVEFS_RX_PORT_OUT   1                         /* Output port number*/
#define LVVEFS_RX_NUM_PORTS  2                         /* Number of ports */

/****************************************************************************************/
/*                                                                                      */
/*  Types                                                                               */
/*                                                                                      */
/****************************************************************************************/

/* Instance handle */
typedef void *LVVEFS_Handle_t;

/* Status return values */
typedef enum
{
    LVVEFS_SUCCESS                   = 0,                        /* Successful return from a routine                     */
    LVVEFS_ALIGNMENTERROR            = 1,                        /* Memory alignment error                               */
    LVVEFS_NULLADDRESS               = 2,                        /* NULL allocation address                              */
    LVVEFS_OUTOFRANGE                = 3,                        /* Out of range parameter                               */
    LVVEFS_INVALIDNUMSAMPLES         = 4,                        /* Invalid number of samples                            */
    LVVEFS_FILE_IO_ERROR             = 5,                        /* Cant open/close/access fileio                        */
    LVVEFS_MEMORY_ERROR              = 6,                        /* Memory access error                                  */
    LVVEFS_PARSER_INVALIDLENGTH      = 7,                        /* Parser file is wrong length                          */
    LVVEFS_PARSER_INVALIDVERSION     = 8,                        /* Parser version is wrong                              */
    LVVEFS_PARSER_INVALIDTYPE        = 9,                        /* Parser type is wrong                                 */
    LVVEFS_PARSER_INVALIDVALUE       = 10,                       /* Parser element is wrong                              */
    LVVEFS_FIFO_UNDERRUN             = 11,                       /* FIFO Buffer has under run                            */
    LVVEFS_FIFO_INSUFFICENT_REF_DATA = 12,                       /* FIFO Buffer has more data in Mic than Ref            */
    LVVEFS_INVALID_IO_PORT           = 13,                       /* Invalid port                                         */
    LVVEFS_INVALID_INSTANCE_STATE    = 14,                       /* Invalid instance state                               */
    LVVEFS_INVALID_STATIC_STATE      = 15,                       /* Invalid static/global state                          */
    LVVEFS_RETURNSTATUS_DUMMY        = LVM_MAXENUM
} LVVEFS_ReturnStatus_en;

/* Commands */
typedef enum
{
   LVVEFS_COMMAND_CONFIGURE          = 0,        // Configure effect engine
   LVVEFS_COMMAND_RESET              = 1,        // Reset effect engine
   LVVEFS_COMMAND_SET_CAPABILITIES   = 2,        // Enable the acoustic capabilities
   LVVEFS_COMMAND_SET_PARAM          = 3,        // Set parameter
   LVVEFS_COMMAND_GET_PARAM          = 4,        // Get parameter
   LVVEFS_COMMAND_SET_DEVICE         = 5,        // Set audio device
   LVVEFS_COMMAND_SET_VOLUME         = 6,        // Set volume level
   LVVEFS_COMMAND_SET_AUDIOMODE      = 7,        // Set audio mode
   LVVEFS_COMMAND_SET_DEBUGMODE      = 8,        // Set debug mode
   LVVEFS_COMMAND_SET_REFDELAY       = 9,        // Set reference delay in samples
   LVVEFS_COMMAND_DUMMY              = LVM_MAXENUM
} LVVEFS_Command_en;

//
// LVVEFS_COMMAND_CONFIGURE: Apply new configuration for input and output buffers
// Command data: LVVEFS_Rx/Tx_Config_st
//
// LVVEFS_COMMAND_RESET: Reset the effect engine.
// Command data: N/A
//
// LVVEFS_COMMAND_SET_CAPABILITIES: Enable specific processing capabilities
// Command data: LVM_UINT16, containing values from LVVEFS_Rx/Tx_Capabilities_en
//
// LVVEFS_COMMAND_SET_PARAM: Set engine parameters
// Command data: LVVEFS_Rx/Tx_Params_st
//
// LVVEFS_COMMAND_GET_PARAM: Get engine parameters
// Command data: LVVEFS_Rx/Tx_Params_st
//
// LVVEFS_COMMAND_SET_DEVICE: Set the device ID
// Command data: LVM_UINT32, containing a device ID available in the tuning parameter files
//
// LVVEFS_COMMAND_SET_VOLUME: Set the volume to be applied on Rx output
// Command data: LVM_UINT32, volume for Rx output, expressed as 8.24 fixed point format
//
// LVVEFS_COMMAND_SET_AUDIOMODE: Not implemented
// Command data: N/A
//
// LVVEFS_COMMAND_SET_DEBUGMODE: Not implemented
// Command data: N/A
//
// LVVEFS_COMMAND_SET_REFDELAY: Set delay to be applied on the Tx reference input
// Command data: LVM_UINT32, delay for Tx reference input, expressed in number of 16-bit words
//
// LVVEFS_COMMAND_SET_SENSOR_DATA: Set sensor data
// Command data: LVVEFS_SensorData_st, sensor data structure
//


/* Voice Mode */
typedef enum
{
    LVVEFS_VOICEMODE_NARROWBAND  =  0,
    LVVEFS_VOICEMODE_WIDEBAND    =  1,
    LVVEFS_VOICEMODE_DUMMY       =  LVM_MAXENUM
}LVVEFS_VoiceMode_en;

/* Rx Capabilities */
typedef enum
{
    LVVEFS_RX_CAPABILITIES_ALL_OFF   = 0x0000,       // All capabilities are disabled
    LVVEFS_RX_CAPABILITIES_AGC       = 0x0001,       // Automatic gain control
    LVVEFS_RX_CAPABILITIES_NS        = 0x0002,       // Noise suppression
    LVVEFS_RX_CAPABILITIES_IIR       = 0x0004,       // Filter
    LVVEFS_RX_CAPABILITIES_EQ        = 0x0008,       // Equalizer
    LVVEFS_RX_CAPABILITIES_AIE       = 0x0010,       // Automatic intelligibility enhancer
    LVVEFS_RX_CAPABILITIES_VOL       = 0x0020,       // Volume
    LVVEFS_RX_CAPABILITIES_DRC       = 0x0040,       // Dynamic Range Control
    LVVEFS_RX_CAPABILITIES_CNG       = 0x0080,       // Comfort Noise Generator
    LVVEFS_RX_CAPABILITIES_NG        = 0x0100,       // Noise Gate
    LVVEFS_RX_CAPABILITIES_NF        = 0x0200,       // Notch Filter
    LVVEFS_RX_CAPABILITIES_HS        = 0x0400,       // Horn Suppression
    LVVEFS_RX_CAPABILITIES_ALL_ON    = 0xffff,       // All capabilities are enabled
    LVVEFS_RX_CAPABILITIES_DUMMY     = LVM_MAXENUM
} LVVEFS_Rx_Capabilities_en;

/* Tx Capabilities */
typedef enum
{
    LVVEFS_TX_CAPABILITIES_ALL_OFF   = 0x0000,       // All capabilities are disabled
    LVVEFS_TX_CAPABILITIES_AGC       = 0x0001,       // Automatic gain control
    LVVEFS_TX_CAPABILITIES_NS        = 0x0002,       // Noise suppression
    LVVEFS_TX_CAPABILITIES_IIR       = 0x0004,       // Filter
    LVVEFS_TX_CAPABILITIES_EQ        = 0x0008,       // Equalizer
    LVVEFS_TX_CAPABILITIES_AEC       = 0x0010,       // Adaptive echo canceller
    LVVEFS_TX_CAPABILITIES_VOL       = 0x0020,       // Volume
    LVVEFS_TX_CAPABILITIES_DRC       = 0x0040,       // Dynamic Range Control
    LVVEFS_TX_CAPABILITIES_HS        = 0x0080,       // Horn Suppression
    LVVEFS_TX_CAPABILITIES_ALL_ON    = 0xffff,       // All capabilities are enabled
    LVVEFS_TX_CAPABILITIES_DUMMY     = LVM_MAXENUM
} LVVEFS_Tx_Capabilities_en;

/* Trace function */
typedef void (*LVVEFS_Debug_t)( LVM_INT32   line,
                                LVM_INT8*   fileName,
                                LVM_INT32   level,
                                LVM_INT8*   stringCondition,
                                LVM_INT8*   message,
                                LVM_INT32   error);

/* Debug function */
typedef void (*LVVEFS_Trace_t)( LVM_INT32   line,
                                LVM_INT8*   fileName,
                                LVM_INT32   level,
                                LVM_INT8*   message );


/****************************************************************************************/
/*                                                                                      */
/*  Structures                                                                          */
/*                                                                                      */
/****************************************************************************************/

/* LVVEFS Buffer Structure */
typedef struct
{
    LVM_UINT32                  Size;
    LVM_INT16*                  pBuffer;
} LVVEFS_Buffer_st;

/* LVVEFS Buffer Configuration */
typedef struct
{
    LVM_Fs_en                   SampleRate;
    LVM_UINT32                  Channels;
    LVM_UINT16                  Format;
    LVVEFS_Buffer_st             Buffer;
}LVVEFS_BufferConfig_st;


/* LVVEFS Configuration */
typedef struct
{
    LVVEFS_BufferConfig_st       BufferConfig[LVVEFS_RX_NUM_PORTS];
}LVVEFS_Rx_Config_st;

typedef struct
{
    LVVEFS_BufferConfig_st       BufferConfig[LVVEFS_TX_NUM_PORTS];
}LVVEFS_Tx_Config_st;


/* LVVEFS Setup */
typedef struct
{
    LVM_CHAR*                   PathConfigurationFile;
    LVM_INT32                   Id;
}LVVEFS_InstanceParams_st;


/* LVVEFS Run-time Control */
typedef struct
{
    LVM_Mode_en                 Mute;
    LVVEFS_VoiceMode_en         VoiceMode;
} LVVEFS_Rx_Params_st;

/* LVVEFS Run-time Control */
typedef struct
{
    LVM_Mode_en                 Mute;
    LVVEFS_VoiceMode_en         VoiceMode;
} LVVEFS_Tx_Params_st;




/****************************************************************************************/
/*                                                                                      */
/*  LVVEFS Function Prototypes                                                          */
/*                                                                                      */
/****************************************************************************************/

LVVEFS_ReturnStatus_en LVVEFS_AssignTrace( LVVEFS_Trace_t  traceFun,
                                           LVM_INT16       traceLevel );

LVVEFS_ReturnStatus_en LVVEFS_AssignDebug( LVVEFS_Debug_t  debugFun );


LVVEFS_ReturnStatus_en LVVEFS_Create (        LVVEFS_Handle_t*             phVEFS,
                                              LVVEFS_InstanceParams_st*    pParams );

LVVEFS_ReturnStatus_en LVVEFS_Destroy (       LVVEFS_Handle_t      hVEFS );


LVVEFS_ReturnStatus_en LVVEFS_Rx_Command (    LVVEFS_Handle_t      hVEFS,
                                            LVVEFS_Command_en    CmdCode,
                                            void*               pCmdData );


LVVEFS_ReturnStatus_en LVVEFS_Rx_Process (    LVVEFS_Handle_t      hVEFS,
                                            LVVEFS_Buffer_st*    pInBuffer,
                                            LVVEFS_Buffer_st*    pOutBuffer);


LVVEFS_ReturnStatus_en LVVEFS_Tx_Command (    LVVEFS_Handle_t      hVEFS,
                                            LVVEFS_Command_en    CmdCode,
                                            void*               pCmdData);


LVVEFS_ReturnStatus_en LVVEFS_Tx_Process (    LVVEFS_Handle_t      hVEFS,
                                            LVVEFS_Buffer_st*    pInBuffer,
                                            LVVEFS_Buffer_st*    pOutBuffer);


LVVEFS_ReturnStatus_en LVVEFS_Tx_pushReference (  LVVEFS_Handle_t      hVEFS,
                                                LVM_INT16           PortNumber,
                                                LVVEFS_Buffer_st*    pBuffer );

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif      /* __LVVEFS_H__ */

/* End of file */
