
#ifndef SAMSUNG_RESAMPLER_H
#define SAMSUNG_RESAMPLER_H


#define 	IN_LEN			4096			// input frame length
#define 	OUT_LEN			IN_LEN*6     	// output frame length


#define 	MONO			1		// mono signal
#define 	STEREO			2		// stereo signal


#define 	SR08k			0		// 8kz
#define 	SR11k			1		// 11.025khz
#define 	SR12k			2		// 12khz
#define 	SR16k			3		// 16khz
#define 	SR22k			4		// 22.05khz
#define 	SR24k			5		// 24khz
#define 	SR32k			6		// 32khz
#define 	SR44k			7		// 44.1khz
#define 	SR48k			8		// 48khz


#define		Q_LOW			0		// Quality low
#define		Q_MID			1		// Quality medium, Default
#define 	Q_HIGH			2		// Quality high




/** SRC state structure variable
 */
struct ResamplerState_Handle;
typedef struct ResamplerState_Handle SamsungSRCState;



/** Create a new SRC with input/output rates.
 * @param channel Number of channels to be processed
 * @param in_rate Input sampling rate
 * @param out_rate Output sampling rate
 * @param quality SRC quality between 0 and 2, where 2 has high quality
 * @return Newly created SRC state
 */
SamsungSRCState *SRC_Init(short channel, short in_rate, short out_rate, short quality);


/** SRC input and output Configuration. 
 * The input and output buffers must *not* overlap.
 * @param st SRC state
 * @param inbuf Input buffer
 * @param outbuf Output buffer
 */
short SRC_InoutConfig(SamsungSRCState *st, short *inbuf, short*outbuf);


/** SRC execution.
 * @param st SRC state
 * @param in_len Number of input samples in the input buffer. 
 * @param out_len Size of the output buffer. 
 * Returns the number of samples written.
 */
short SRC_Exe(SamsungSRCState *st, long in_len, long out_len);


/** Destroy a SRC state.
 * @param st SRC state
 */
short SRC_Reset(SamsungSRCState *st);



#endif
