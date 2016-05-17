#ifndef  _COMMON_MPI_H
#define  _COMMON_MPI_H

#include "hi_type.h"
#include "hi_unf_common.h"
#include "hi_unf_avplay.h"
#include "hi_unf_vo.h"
#include "hi_adp.h"
#include "hi_adp_search.h"
#include "hi_adp_boardcfg.h"
#include "hi_unf_ai.h"

#define DOLBYPLUS_HACODEC_SUPPORT
#if  defined (CHIP_TYPE_hi3716mv300_fpga)
 #define TLV320_AUDIO_DEVICE_ENABLE
#else
 #define SLIC_AUDIO_DEVICE_ENABLE
#endif


#if 0
HI_S32	MPI_VoInit();
HI_S32	MPI_VoDeInit();
HI_S32	MPI_SndInit(HI_VOID);
HI_S32	MPI_SndDeInit(HI_VOID);
HI_S32	MPI_DispInit(HI_VOID);
HI_S32	MPI_DispDeInit(HI_VOID);
HI_S32	MPI_AVPlayInit(HI_VOID);
HI_S32	MPI_AVPlayDeInit(HI_VOID);
HI_S32	MPI_AVPlayStart(HI_HANDLE hAvplay, DB_PROGRAM_S *psProg);
HI_S32	MPI_VoDestroyWin(HI_HANDLE hWin);
HI_S32	MPI_VoCreateWin(HI_HANDLE *phWin, HI_U8 u8WinNum);
HI_S32   MPI_SetVideoAttr(HI_HANDLE hAvplay, HI_U32 pid, HI_UNF_VCODEC_TYPE_E videotype);
HI_S32   MPI_SetAudioAttr(HI_HANDLE hAvplay, HI_U32 pid, HI_U32 audiotype);
#else
/* **********************************Demux  Common Interface********************************/
HI_S32 HIADP_Demux_Init(HI_U32 DmxPortID,HI_U32 TsPortID);
    
HI_S32 HIADP_Demux_DeInit(HI_U32 DmxPortID);

/************************************DISPLAY  Common Interface*******************************/
HI_S32 HIADP_Disp_StrToFmt(HI_CHAR *pszFmt);

HI_S32 HIADP_Disp_Init(HI_UNF_ENC_FMT_E enFormat);

HI_S32 HIADP_Disp_DeInit(HI_VOID);


/****************************VO  Common Interface********************************************/
HI_S32 HIADP_VO_Init(HI_UNF_VO_DEV_MODE_E enDevMode);

HI_S32 HIADP_VO_CreatWin(HI_RECT_S * pstWinRect, HI_HANDLE * phWin);

HI_S32 HIADP_VO_CreatWinExt(HI_RECT_S * pstWinRect, HI_HANDLE * phWin, HI_BOOL bVirtScreen);

HI_S32 HIADP_VO_DeInit();

/*****************************************SOUND  Common Interface************************************/
HI_S32 HIADP_Snd_Init(HI_VOID);


HI_S32 HIADP_Snd_DeInit(HI_VOID);

/*Only Support Single AI Chn*/
HI_S32 HIADP_AI_Init(HI_UNF_AI_E enAISrc, HI_HANDLE *pAIHandle, HI_HANDLE *pTrackSlave, HI_HANDLE *pATrackVir);

HI_S32 HIADP_AI_DeInit(HI_HANDLE hAI, HI_HANDLE hAISlave, HI_HANDLE hAIVir);

/*****************************************AIAO  Common Interface************************************/
HI_S32 HIADP_AIAO_Init(HI_S32 DevId, HI_S32 AI_Ch, HI_S32 AO_Ch, HI_UNF_SAMPLE_RATE_E enSamplerate, HI_U32 u32SamplePerFrame);


HI_S32 HIADP_AIAO_DeInit(HI_VOID);

HI_S32 HIADP_SLIC_Open(HI_VOID);
HI_S32 HIADP_SLIC_Close(HI_VOID);
HI_S32 HIADP_SLIC_GetHookOff(HI_BOOL *pbEnable);
HI_S32 HIADP_SLIC_GetHookOn(HI_BOOL *pbEnable);
HI_S32 HIADP_SLIC_SetRinging(HI_BOOL bEnable);


/**************************************AVPLAY  Common Interface***************************************/
HI_S32 HIADP_AVPlay_RegADecLib();

HI_S32 HIADP_AVPlay_Init();

HI_S32 HIADP_AVPlay_Create(HI_HANDLE *avplay,HI_U32 u32DemuxId,
                                 HI_UNF_AVPLAY_STREAM_TYPE_E streamtype,
                                 HI_UNF_VCODEC_CAP_LEVEL_E vdeccap,
                                 HI_U32 channelflag);

HI_S32 HIADP_AVPlay_SetVdecAttr(HI_HANDLE hAvplay,HI_UNF_VCODEC_TYPE_E enType,HI_UNF_VCODEC_MODE_E enMode);

HI_S32 HIADP_AVPlay_SetAdecAttr(HI_HANDLE hAvplay,HI_U32 enADecType,HI_HA_DECODEMODE_E enMode, HI_S32 isCoreOnly);

HI_S32 HIADP_AVPlay_PlayProg(HI_HANDLE hAvplay,PMT_COMPACT_TBL *pProgTbl,HI_U32 ProgNum,HI_BOOL bAudPlay);

HI_S32 HIADP_AVPlay_PlayAud(HI_HANDLE hAvplay,PMT_COMPACT_TBL *pProgTbl,HI_U32 ProgNum);

HI_S32 HIADP_AVPlay_SwitchAud(HI_HANDLE hAvplay,HI_U32 AudPid, HI_U32 u32AudType);


HI_S32 HIADP_AENC_GetAttr(HI_UNF_AENC_ATTR_S *pAencAttr, HI_VOID *pstConfig);

HI_S32 HIADP_MCE_Exit(HI_VOID);

HI_S32 HIADP_DMX_AttachTSPort(HI_U32 Dmxid, HI_U32 TunerID);
#endif

#endif
