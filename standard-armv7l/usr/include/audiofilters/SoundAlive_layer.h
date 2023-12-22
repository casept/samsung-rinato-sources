/*********************************************************************
                    SoundAlive_layer.h

SA116o + MM / 2011.03.24, Change History
SA118       / 2012.11.20, modified for wrapping CPP based API
SA118g      / 2013.04.27, added a preset (SA_TUBE)
**********************************************************************/

// mode definition
enum{
    SA_EAR=0,
    SA_SPK
};

// Preset definition
enum{

    SA_NORMAL=0,            // COMMON    : Music & Video & DMB

    SA_POP,                 // MM        : Music
    SA_ROCK,                // MM        : Music
    SA_DANCE,               // MM        : Music
    SA_JAZZ,                // MM        : Music
    SA_CLASSIC,             // MM        : Music

    SA_VOCAL,               // MID        : Music
    SA_BASS_BOOST,          // MID        : Music
    SA_TREBLE_BOOST,        // MID        : Music
    SA_MTHEATER,            // MM        : Music
    SA_EXTERNALIZATION,     // MM        : Music
    SA_CAFE,                // MID        : Music
    SA_CONCERT_HALL,        // MID        : Music

    SA_VOICE,               // MM        : Video & DMB
    SA_MOVIE,               // MID        : Video & DMB
    SA_VIRT51,              // MM        : Video & DMB

    SA_HIPHOP,              // Docomo        : Music
    SA_RNB,                 // Docomo        : Music
    SA_FLAT,                // Docomo        : Music

    SA_TUBE,                // MID        : Music

    SA_PRESET_NUM,          // max number of tabulated presets

    SA_USER,                // indicates using User UI

    SA_AUTOPRESET           // indicates Auto preset setting

};


#define SA_EQ_BAND_NUM 7
#define SA_EQ_MAX_GAIN 15


#define SA_M3D_SLPOSNUM           4
#define SA_BE_SLPOSNUM            4
#define SA_CHROOMSIZE_SLPOSNUM    4
#define SA_CHLEVEL_SLPOSNUM       4
#define SA_CLA_SLPOSNUM           4
// Channel configuration
#ifndef SA_CHANNEL_DEFINED
typedef enum {ChnL=0, ChnC, ChnR, ChnSL, ChnSR, ChnSW, ChnMAX} SA_Channel;
#define SA_CHANNEL_DEFINED
#endif


struct _SoundAlive_Handle;
typedef struct _SoundAlive_Handle SA_Handle;

/* wrapper API */
SA_Handle *SoundAlive_Init(void);

int SoundAlive_Set_SamplingRate(SA_Handle *sa_handle, int SamplingRate);

int SoundAlive_Exe(SA_Handle *sa_handle, short (*outbuf)[2], const short (*inbuf)[2], int n, int vol);

int SoundAlive_Set_OutDev(SA_Handle *sa_handle, short outdev);

int SoundAlive_Set_Preset(SA_Handle *sa_handle, int preset);
int SoundAlive_Set_AutoPreset(SA_Handle *sa_handle, int preset);

int SoundAlive_Set_User_EQ(SA_Handle *sa_handle, int *lev_list);
int SoundAlive_Set_User_3D(SA_Handle *sa_handle, int lev);
int SoundAlive_Set_User_BE(SA_Handle *sa_handle, int lev);
int SoundAlive_Set_User_CHlevel(SA_Handle *sa_handle, int lev);
int SoundAlive_Set_User_CHroomsize(SA_Handle *sa_handle, int lev);
int SoundAlive_Set_User_SetCla(SA_Handle *sa_handle, int lev);

int SoundAlive_Get_EQ_BandNum(SA_Handle *sa_handle);
int SoundAlive_Get_EQ_BandFc(SA_Handle *sa_handle, int band_num);
int SoundAlive_Get_EQ_BandWidth(SA_Handle *sa_handle, int band_num);

int SoundAlive_Navigation_Button_Pressed(SA_Handle *sa_handle);

char* SoundAlive_Get_Version(SA_Handle *sa_handle);

int SoundAlive_Reset(SA_Handle *sa_handle);

