
/*--------------------------------------------------------------------
		COPYRIGHT NOTICE
----------------------------------------------------------------------
	
Copyright (C) 2009, Samsung Electronics, co. ltd,
All rights reserved.
----------------------------------------------------------------------

----------------------------------------------------------------------
		AUTHORITY
----------------------------------------------------------------------

		Nam-Woog Lee

----------------------------------------------------------------------


----------------------------------------------------------------------

   File Name:      SamsungSB.h
   Purpose:        Header file for Samsung SB

----------------------------------------------------------------------


----------------------------------------------------------------------
		Revision History
----------------------------------------------------------------------

	/03/2009 : Created		by Nam-Woog Lee

			  
----------------------------------------------------------------------


----------------------------------------------------------------------
		Description
----------------------------------------------------------------------


----------------------------------------------------------------------*/



/* SB. Mode */
#define SAMSUNGSB_BYPASS					0
#define SAMSUNGSB_MONO						1
#define SAMSUNGSB_INTERLEAVING_STEREO				2
#define SAMSUNGSB_NON_INTERLEAVING_STEREO			3


/* Sampling rate */
#define SAMSUNGSB_48000Hz		0
#define SAMSUNGSB_44100Hz		1
#define SAMSUNGSB_32000Hz		2
#define SAMSUNGSB_24000Hz		3
#define SAMSUNGSB_22050Hz		4
#define SAMSUNGSB_16000Hz		5
#define SAMSUNGSB_11025Hz		6
#define SAMSUNGSB_8000Hz		7


/*	Low Cut Off Frequency		*/


/*	Boosting Gain		*/
#define SAMSUNGSB_GAIN_LV0				0
#define SAMSUNGSB_GAIN_LV1				1
#define SAMSUNGSB_GAIN_LV2				2
#define SAMSUNGSB_GAIN_LV3				3
#define SAMSUNGSB_GAIN_LV4				4
#define SAMSUNGSB_GAIN_LV5				5
#define SAMSUNGSB_GAIN_LV6				6




/*	CLARITY Level		*/
#define SAMSUNGSB_CLARITY_LV0			0
#define SAMSUNGSB_CLARITY_LV1			1
#define SAMSUNGSB_CLARITY_LV2			2
#define SAMSUNGSB_CLARITY_LV3			3
#define SAMSUNGSB_CLARITY_LV4			4
#define SAMSUNGSB_CLARITY_LV5			5
#define SAMSUNGSB_CLARITY_LV6			6



#ifndef	__COMPST
#define	__COMPST
typedef struct
{
	long  l_gain;					// comp. long type gain history
	short env;						// envelope history

	short compBoostCut;				// customized compressor boosting or cutting gain
	short attEnvDetFactor;			// envelope detection attack weight
	short decEnvDetFactor;			// envelope detection decay weight
	short attCompGainFactor;		// comp. gain smoothing attack weight
	short decCompGainFactor;		// comp. gain smoothing decay weight

	short* spEnvBasedDRCCurve;		// degined drc gain curve
} sCompParameter;

typedef struct {
	short *CompInOutBuf;
	short CompFrameLength;
	short CompSamplingrate;
	short CompOutGain;
	sCompParameter stCompParameter;
} CompMemStruct;
#endif




#ifndef	__RMSCOMPST
#define	__RMSCOMPST

typedef struct
{

	long  l_gain;					// comp. long type gain history
	short compTilt;					// compressor tilt option

	short compBoostCut;				// customized compressor boosting or cutting gain
	short compThreshold;			// copressor threshold = comp cutting gain

	short attCompGainFactor;		// comp. gain smoothing attack weight
	short decCompGainFactor;		// comp. gain smoothing decay weight

	short normalized;				// rms power normalizing factor

} sRMSParameter;


typedef struct {
	short *RMSInOutBuf;
	short RMSFrameLength;
	short RMSSamplingrate;
	short RMSOutGain;
	short RMSMode;
	sRMSParameter stRMSParameter;
} RMSMemStruct;
#endif


#ifndef	__SB_ST
#define	__SB_ST

typedef struct _stDynamicCompressorConfig{
	short UpDetect;
	short DownDetect;

	short UpSmoothing;
	short DownSmoothing;

	short gEnv1;
	short gSBgain;

	short* CompPattern;
	short* CompPatternLinear;


} stDynamicCompressorConfig;



typedef struct 
{
	int b0;
	int b1; 
	int b2;
	int a1; 
	int a2;
} sEqFilterCoefficients_fixed2;

// Coefficient history for the IIR filter 
typedef struct
{
	short x[2];		// x[n], x[n-1], x[n-2]	
	short y_hi[2];		// y[n], y[n-1], y[n-2] 
	int roundErr;
} sEqBuffer_fixed2;

#define  __SB40__
#ifdef __SB40__
typedef struct {
	sEqBuffer_fixed2					psEQ8DataHistory_fixed[2][8];
	sEqFilterCoefficients_fixed2		pEQ8FilterCoeff_fixed[8];
	int state_left[2][5];
	int state_right[2][5];
}EQintStruct2;
typedef struct 
{
	int stateL[5];
	int stateR[5];
	int coeff[5];
} DNSe_IIR32_Struct;

typedef struct _SamsungSBBandStruct {
	
	DNSe_IIR32_Struct BandIIRstr[2];
	short	SamsungSBGain;
	short	BandBuffer[4096*2];
	CompMemStruct CompBandSB;

} SamsungSBBandStruct;


/* SB parameters for operation */
typedef struct _SamsungSBMemStruct{
   short	*SamsungSBInBuf ;
   short	*SamsungSBOutBuf ;
   short	SamsungSBFrameLength ;
   short	SamsungSBSamplingRate;
   short	SamsungSBMode;
   short	SamsungSBGain;
   short	SamsungSBLowCut;
   short	SamsungSBClarityLevel;
   stDynamicCompressorConfig stDynamicCompressorConfigMem;
   __attribute__((aligned(4))) EQintStruct2 stEQinternal;   
   __attribute__((aligned(4))) short MidBuf_SB[4096*2] ;   
   CompMemStruct CompMem_SB;   
   CompMemStruct CompMem_SB2;
   RMSMemStruct stRMSMem;
   short Att ;   
   SamsungSBBandStruct SamsungSBBand[3];   
   DNSe_IIR32_Struct AMIIRstr[3];
} SamsungSBMemStruct;

int SamsungSBExe(SamsungSBMemStruct *SamsungSBstr,short SBOnOff, short AMOnOff,short OnOff_Band01,short OnOff_Band02,short OnOff_Band03,int *AM_Lite_Band01_Coeff,int *AM_Lite_Band02_Coeff,int *AM_Lite_Band03_Coeff, short Vol, short StreamGain,float GainStep);

#else

typedef struct {
	sEqBuffer_fixed2					psEQ8DataHistory_fixed[2][8];
	sEqFilterCoefficients_fixed2		pEQ8FilterCoeff_fixed[8];
	int state_left[5];
	int state_right[5];
}EQintStruct2;


/* SB parameters for operation */
typedef struct _SamsungSBMemStruct{
   short	*SamsungSBInBuf ;
   short	*SamsungSBOutBuf ;
   short	SamsungSBFrameLength ;
   short	SamsungSBSamplingRate;
   short	SamsungSBMode;
   short	SamsungSBGain;
   short	SamsungSBLowCut;
   short	SamsungSBClarityLevel;
   stDynamicCompressorConfig stDynamicCompressorConfigMem;
   __attribute__((aligned(4))) EQintStruct2 stEQinternal;   
   __attribute__((aligned(4))) short MidBuf_SB[4096*2] ;   
   CompMemStruct CompMem_SB;   
   RMSMemStruct stRMSMem;
   short Att ;   
} SamsungSBMemStruct;


int SamsungSBExe(SamsungSBMemStruct *SamsungSBstr,short SBOnOff, short AMOnOff,short OnOff_Band01,short OnOff_Band02,short OnOff_Band03,short *AM_Lite_Band01_Coeff,short *AM_Lite_Band02_Coeff,short *AM_Lite_Band03_Coeff, short Vol, short StreamGain,float GainStep);

#endif

#endif

/* API prototype */

int SamsungSBInit(SamsungSBMemStruct *SamsungSBstr);

int SamsungSBSamplingRateConfig(SamsungSBMemStruct *SamsungSBstr,short SamplingRate);
           
int SamsungSBFrameLengthConfig(SamsungSBMemStruct *SamsungSBstr,short FrameLength);
           
int SamsungSBInOutConfig(SamsungSBMemStruct *SamsungSBstr,short *InBuf, short *OutBuf);
           
int SamsungSBModeConfig (SamsungSBMemStruct *SamsungSBstr, short Mode );

int SamsungSBLowCutConfig(SamsungSBMemStruct *SamsungSBstr,short LowCut);

int SamsungSBGainConfig(SamsungSBMemStruct *SamsungSBstr,short Gain);

int SamsungSBClarityLevelConfig(SamsungSBMemStruct *SamsungSBstr,short ClarityLevel);

int SamsungSBConfigAll(SamsungSBMemStruct *SamsungSBstr,short *InBuf, short *OutBuf, short SamplingRate, short FrameLength, short Mode, short LowCut,short Gain,short ClarityLevel);


