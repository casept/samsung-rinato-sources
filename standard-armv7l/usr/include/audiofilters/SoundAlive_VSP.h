/***************************************************
                SoundAlive_VSP.c
****************************************************/

// Processing
extern int SoundAlive_VSP(short (*out)[2], const short (*in)[2], int n);
// Input:
// out - interleaved output PCM buffer  (lr/lr/lr/...)
// in  - interleaved input  PCM buffer  (lr/lr/lr/...)
// n   - number of stereosamples (pair of samples)
// Return:
//       number of stereosamples in 'out' buffer (pair of samples)

// Setting parameters
extern void SoundAlive_VSP_SetPar(float speed);
// speed = [0.5f ... 2.0f]

// Initialization
extern void SoundAlive_VSP_Init(int Fs);
// Fs = {8000, 11025, 12000, 16000, 22050, 24000, 32000, 44100, 48000}

