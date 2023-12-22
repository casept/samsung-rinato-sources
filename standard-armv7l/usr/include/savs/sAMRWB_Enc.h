#ifndef _SAMRWB_ENC_H_
#define  _SAMRWB_ENC_H_

/* return values */ 
#define SAMRWB_OK			(0)
#define SAMRWB_ERROR        (-1)

#define  MODE_7k_BPS	0
#define  MODE_9k_BPS	1
#define  MODE_12k_BPS	2
#define  MODE_14k_BPS	3
#define  MODE_16k_BPS	4
#define  MODE_18k_BPS	5
#define  MODE_20k_BPS	6
#define  MODE_23k_BPS	7
#define  MODE_24k_BPS	8
#define  MODE_SID_BPS	9

#define bitstreamformat_3GPP	0
#define bitstreamformat_ITU	1
#define bitstreamformat_MIME	2

typedef struct{
    short *p_in;
    unsigned char *p_out;
    void *st;
    short mode;
    short nb_bits;
    short allow_dtx;
    short bitstreamformat;
    short bufsize;
    void *tx_state;
} sAMRWE_INFO;

#if 0
typedef struct {
    short AMRWB_global_value;
} sAMR_WB_Global;
#endif

void *sAMRWBCreateEnc(sAMRWE_INFO* sAMRWEnc);
short sAMRWBEncFrame(void*, sAMRWE_INFO* sAMRWEnc);
short sAMRWBDeleteEnc(void*, sAMRWE_INFO* sAMRWEnc);

#endif	/* _SAMRWB_ENC_H_ */
