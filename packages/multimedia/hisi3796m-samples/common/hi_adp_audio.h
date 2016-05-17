/**
 \file
 \brief common head file or PVR
 \copyright Shenzhen Hisilicon Co., Ltd.
 \version draft
 \author z40717
 \date 2010-6-12
 */

#ifndef __COMMON_AUDIO_H__
#define __COMMON_AUDIO_H__

#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>
#include "hi_type.h"
#include "hi_adp_boardcfg.h"

#ifdef __cplusplus
extern "C" {
#endif


/******************************* API declaration *****************************/

HI_S32 AudioSIOPinSharedEnable();

HI_VOID AudioSlicTlv320RST();

HI_VOID AudioSPIPinSharedEnable();


#ifdef __cplusplus
}
#endif
#endif /* __SAMPLE_AUDIO_PUB_H__ */
