
class AudioDHA_Interface
{
    public:
        virtual void Init( int sampling_rate, short (*gt_init)[6]) = 0;
//sampling_rate={ 16000, 22050, 24000, 32000, 44100, 48000}
// gt_init - gain data

        virtual int Exe(short *InBuf, short *OutBuf, int n, int on_off, float volume ) = 0;
// Input:
// InBuf  - interleaved input  PCM buffer  (lr/lr/lr/...)
// OutBuf - interleaved output PCM buffer  (lr/lr/lr/...)
// n - number of stereosamples (pair of samples)
// on_off - On/off switch
// volume - volume 
// Return:
//       number of stereosamples in 'out' buffer (pair of samples)

        virtual ~AudioDHA_Interface(void) {};
};

class AudioDHA_Factory
{
    public:
        static AudioDHA_Interface * Create(void);
        static void Destroy(AudioDHA_Interface * );
};




