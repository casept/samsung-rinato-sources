#define SAMSUNGREC_BYPASS		0
#define SAMSUNGREC_MONO		1
#define SAMSUNGREC_STEREO		2


/* Sampling rate */
#define SAMSUNGREC_48000Hz		0
#define SAMSUNGREC_44100Hz		1
#define SAMSUNGREC_32000Hz		2
#define SAMSUNGREC_24000Hz		3
#define SAMSUNGREC_22050Hz		4
#define SAMSUNGREC_16000Hz		5
#define SAMSUNGREC_8000Hz		6



/* API prototype */
int SamsungRecInit(void);

int SamsungRecFrameLengthConfig(short FrameLength);

int SamsungRecInOutConfig(short *InBuf, short *OutBuf);

int SamsungRecModeConfig(short Mode);

int SamsungRecSamplingRateConfig(short SamplingRate);

int SamsungRecConfigAll(short SamplingRate, short FrameLength, short *InBuf, short *OutBuf,short Mode);

int SamsungRecExe(short RecOnOff, short AMR_PreGain,short AAC_L_PreGain,short AAC_R_PreGain,short RecFilter01_OnOff,short RecFilter02_OnOff,short *RecFilter01_Coeff,short *RecFilter02_Coeff);

int SamsungRecExeForInterview(short RecOnOff, short AMR_PreGain,short AAC_L_PreGain,short AAC_R_PreGain,short RecFilter01_OnOff,short RecFilter02_OnOff,short *RecFilter01_Coeff,short *RecFilter02_Coeff);
