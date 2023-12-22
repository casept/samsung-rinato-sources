/**
  * @file DNSe_NRSS.h
  * @brief Noise reduction header file, external usage
  *
  * 2006 Samsung Electronics,
  * Digital Media Business,
  * Digital AV Division
  *
  * All rigths reserved
  *
  * This document is the property of SEC, Ltd
  * It is considered confidential and proprietary.
  *
  * This document may not be reproduced or transmitted in any form,
  * in whole or in part, without the express written permission of
  * SEC, Ltd
  *
  *
  * @b Target:
  *     ARM946E-S
  * @version 1.0
  * @author Denis Kutuzov denis.kutuzov@samsung.com
  * @date 08/11/2006 09:00:00
  */



#ifndef _DNSe_NRSS_

#define _DNSe_NRSS_



extern void DNSe_NRSS_Init(short mode, int Fs);
// mode - 0..9 (0 - bypass, 9 - max noise suppression)
// Fs - samplerate [8000..48000]

// void DNSe_NRSS(short* left, short* right, int n);
//extern void DNSe_NRSS(short (*readbuf)[2], int n);
extern void DNSe_NRSS_EXE (short *readbuf, int n, int ch);
// readbuf - pointer to interleaved buffer
// n - number of samples in each buffer
// ch - number of channel

#endif // _DNSe_NRSS_

