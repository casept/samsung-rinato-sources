/****************************************************
*
*			SoundAlive_VSP_buf.h
*
*		Input Buffer Managing
*  for Variable Speed Playback (VSP)
*
*****************************************************
*
*   Modifiied:                  Date:
*
*****************************************************/

// Initialization
extern void SoundAlive_VSP_BufInit(void);

// Buffered processing
extern int SoundAlive_VSP_buffered(short (*out)[2], const short (*in)[2], int n);
// Input:
// out - interleaved output PCM buffer  (lr/lr/lr/...)
// in  - interleaved input  PCM buffer  (lr/lr/lr/...)
// n   - number of stereosamples (pair of samples)
// Return:
//       number of stereosamples in 'out' buffer (pair of samples)

/****************************************************/
//// Example of processing
//
//  // Initialization
//  SoundAlive_VSP_BufInit();
//  SoundAlive_VSP_Init(Fs);
//
//  // Setting desired speed
//  SoundAlive_VSP_SetPar(speed);
//
//  // Processing PCM data
//  {
//      // Processing 'n' (stereo)samples
//          outnum=SoundAlive_VSP_buffered(out, in, n);
//      // returning 'outnum' (stereo)samples in time-modified PCM stream
//  }

