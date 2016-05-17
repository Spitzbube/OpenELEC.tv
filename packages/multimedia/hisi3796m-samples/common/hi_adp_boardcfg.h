#ifndef __BOARDCFG_H__
#define __BOARDCFG_H__

#ifdef __cplusplus
extern "C" {
#endif

#define TUNER_USE    HI_TUNER0_ID

#if (HI_TUNER_SIGNAL_TYPE == 2)
#define GET_SAT_TUNER_CONFIG(u32TunerId,stSatTunerAttr) \
{ \
	if (0 == u32TunerId) \
	{ \
	    stSatTunerAttr.u32DemodClk       = HI_DEMOD_REF_CLOCK; \
	    stSatTunerAttr.u16TunerMaxLPF    = HI_TUNER_MAX_LPF; \
	    stSatTunerAttr.u16TunerI2CClk    = HI_TUNER_I2C_CLOCK; \
	    stSatTunerAttr.enRFAGC           = HI_TUNER_RFAGC; \
	    stSatTunerAttr.enIQSpectrum      = HI_TUNER_IQSPECTRUM; \
	    stSatTunerAttr.enTSClkPolar      = HI_TUNER_TSCLK_POLAR; \
	    stSatTunerAttr.enTSFormat        = HI_TUNER_TS_FORMAT; \
	    stSatTunerAttr.enTSSerialPIN     = HI_TUNER_TS_SERIAL_PIN; \
	    stSatTunerAttr.enDiSEqCWave      = HI_TUNER_DISEQCWAVE; \
	    stSatTunerAttr.enLNBCtrlDev      = HI_LNBCTRL_DEV_TYPE; \
	    stSatTunerAttr.u16LNBDevAddress  = HI_LNBCTRL_DEV_ADDR; \
	} \
}
#endif

#if (HI_TUNER1_SIGNAL_TYPE == 2)
#define GET_SAT_TUNER1_CONFIG(u32TunerId,stSatTunerAttr) \
{ \
	if (1 == u32TunerId)\
    { \
        stSatTunerAttr.u32DemodClk       = HI_DEMOD1_REF_CLOCK; \
	    stSatTunerAttr.u16TunerMaxLPF    = HI_TUNER1_MAX_LPF; \
	    stSatTunerAttr.u16TunerI2CClk    = HI_TUNER1_I2C_CLOCK; \
	    stSatTunerAttr.enRFAGC           = HI_TUNER1_RFAGC; \
	    stSatTunerAttr.enIQSpectrum      = HI_TUNER1_IQSPECTRUM; \
	    stSatTunerAttr.enTSClkPolar      = HI_TUNER1_TSCLK_POLAR; \
	    stSatTunerAttr.enTSFormat        = HI_TUNER1_TS_FORMAT; \
	    stSatTunerAttr.enTSSerialPIN     = HI_TUNER1_TS_SERIAL_PIN; \
	    stSatTunerAttr.enDiSEqCWave      = HI_TUNER1_DISEQCWAVE; \
	    stSatTunerAttr.enLNBCtrlDev      = HI_LNBCTRL1_DEV_TYPE; \
	    stSatTunerAttr.u16LNBDevAddress  = HI_LNBCTRL1_DEV_ADDR; \
    } \
}
#endif

#if (HI_TUNER2_SIGNAL_TYPE == 2)
#define GET_SAT_TUNER2_CONFIG(u32TunerId,stSatTunerAttr) \
{ \
	if (2 == u32TunerId)\
    { \
        stSatTunerAttr.u32DemodClk       = HI_DEMOD2_REF_CLOCK; \
	    stSatTunerAttr.u16TunerMaxLPF    = HI_TUNER2_MAX_LPF; \
	    stSatTunerAttr.u16TunerI2CClk    = HI_TUNER2_I2C_CLOCK; \
	    stSatTunerAttr.enRFAGC           = HI_TUNER2_RFAGC; \
	    stSatTunerAttr.enIQSpectrum      = HI_TUNER2_IQSPECTRUM; \
	    stSatTunerAttr.enTSClkPolar      = HI_TUNER2_TSCLK_POLAR; \
	    stSatTunerAttr.enTSFormat        = HI_TUNER2_TS_FORMAT; \
	    stSatTunerAttr.enTSSerialPIN     = HI_TUNER2_TS_SERIAL_PIN; \
	    stSatTunerAttr.enDiSEqCWave      = HI_TUNER2_DISEQCWAVE; \
	    stSatTunerAttr.enLNBCtrlDev      = HI_LNBCTRL2_DEV_TYPE; \
	    stSatTunerAttr.u16LNBDevAddress  = HI_LNBCTRL2_DEV_ADDR; \
    } \
}
#endif

#if (HI_TUNER3_SIGNAL_TYPE == 2)
#define GET_SAT_TUNER3_CONFIG(u32TunerId,stSatTunerAttr) \
{ \
	if (3 == u32TunerId)\
    { \
        stSatTunerAttr.u32DemodClk       = HI_DEMOD3_REF_CLOCK; \
	    stSatTunerAttr.u16TunerMaxLPF    = HI_TUNER3_MAX_LPF; \
	    stSatTunerAttr.u16TunerI2CClk    = HI_TUNER3_I2C_CLOCK; \
	    stSatTunerAttr.enRFAGC           = HI_TUNER3_RFAGC; \
	    stSatTunerAttr.enIQSpectrum      = HI_TUNER3_IQSPECTRUM; \
	    stSatTunerAttr.enTSClkPolar      = HI_TUNER3_TSCLK_POLAR; \
	    stSatTunerAttr.enTSFormat        = HI_TUNER3_TS_FORMAT; \
	    stSatTunerAttr.enTSSerialPIN     = HI_TUNER3_TS_SERIAL_PIN; \
	    stSatTunerAttr.enDiSEqCWave      = HI_TUNER3_DISEQCWAVE; \
	    stSatTunerAttr.enLNBCtrlDev      = HI_LNBCTRL3_DEV_TYPE; \
	    stSatTunerAttr.u16LNBDevAddress  = HI_LNBCTRL3_DEV_ADDR; \
    } \
}
#endif

#if (HI_TUNER_SIGNAL_TYPE == 4) || (HI_TUNER_SIGNAL_TYPE == 8)
#define GET_TER_TUNER_CONFIG(u32TunerId,stTerTunerAttr) \
{ \
	if (0 == u32TunerId) \
	{ \
	    stTerTunerAttr.u32DemodClk       = HI_TER_DEMOD_REF_CLOCK; \
	    stTerTunerAttr.u32ResetGpioNo    = HI_DEMOD_RESET_GPIO; \
	    stTerTunerAttr.u16TunerMaxLPF    = HI_TER_TUNER_MAX_LPF; \
	    stTerTunerAttr.u16TunerI2CClk    = HI_TER_TUNER_I2C_CLOCK; \
	    stTerTunerAttr.enRFAGC           = HI_TER_TUNER_RFAGC; \
	    stTerTunerAttr.enIQSpectrum      = HI_TER_TUNER_IQSPECTRUM; \
	    stTerTunerAttr.enTSClkPolar      = HI_TER_TUNER_TSCLK_POLAR; \
	    stTerTunerAttr.enTSFormat        = HI_TER_TUNER_TS_FORMAT; \
	    stTerTunerAttr.enTSSerialPIN     = HI_TER_TUNER_TS_SERIAL_PIN; \
	    stTerTunerAttr.enTSSyncHead      = HI_TER_TUNER_TS_SYNC_HEAD; \
	} \
}
#endif

#if (HI_TUNER1_SIGNAL_TYPE == 4) || (HI_TUNER1_SIGNAL_TYPE == 8)
#define GET_TER_TUNER1_CONFIG(u32TunerId,stTerTunerAttr) \
{ \
	if (1 == u32TunerId)\
    { \
	    stTerTunerAttr.u32DemodClk       = HI_TER_DEMOD1_REF_CLOCK; \
	    stTerTunerAttr.u32ResetGpioNo    = HI_DEMOD1_RESET_GPIO; \
	    stTerTunerAttr.u16TunerMaxLPF    = HI_TER_TUNER1_MAX_LPF; \
	    stTerTunerAttr.u16TunerI2CClk    = HI_TER_TUNER1_I2C_CLOCK; \
	    stTerTunerAttr.enRFAGC           = HI_TER_TUNER1_RFAGC; \
	    stTerTunerAttr.enIQSpectrum      = HI_TER_TUNER1_IQSPECTRUM; \
	    stTerTunerAttr.enTSClkPolar      = HI_TER_TUNER1_TSCLK_POLAR; \
	    stTerTunerAttr.enTSFormat        = HI_TER_TUNER1_TS_FORMAT; \
	    stTerTunerAttr.enTSSerialPIN     = HI_TER_TUNER1_TS_SERIAL_PIN; \
	    stTerTunerAttr.enTSSyncHead      = HI_TER_TUNER1_TS_SYNC_HEAD; \
    } \
}
#endif

#if (HI_TUNER2_SIGNAL_TYPE == 4) || (HI_TUNER2_SIGNAL_TYPE == 8)
#define GET_TER_TUNER2_CONFIG(u32TunerId,stTerTunerAttr) \
{ \
	if (2 == u32TunerId)\
    { \
	    stTerTunerAttr.u32DemodClk       = HI_TER_DEMOD2_REF_CLOCK; \
	    stTerTunerAttr.u32ResetGpioNo    = HI_DEMOD2_RESET_GPIO; \
	    stTerTunerAttr.u16TunerMaxLPF    = HI_TER_TUNER2_MAX_LPF; \
	    stTerTunerAttr.u16TunerI2CClk    = HI_TER_TUNER2_I2C_CLOCK; \
	    stTerTunerAttr.enRFAGC           = HI_TER_TUNER2_RFAGC; \
	    stTerTunerAttr.enIQSpectrum      = HI_TER_TUNER2_IQSPECTRUM; \
	    stTerTunerAttr.enTSClkPolar      = HI_TER_TUNER2_TSCLK_POLAR; \
	    stTerTunerAttr.enTSFormat        = HI_TER_TUNER2_TS_FORMAT; \
	    stTerTunerAttr.enTSSerialPIN     = HI_TER_TUNER2_TS_SERIAL_PIN; \
	    stTerTunerAttr.enTSSyncHead      = HI_TER_TUNER2_TS_SYNC_HEAD; \
    } \
}
#endif

#if (HI_TUNER3_SIGNAL_TYPE == 4) || (HI_TUNER3_SIGNAL_TYPE == 8)
#define GET_TER_TUNER3_CONFIG(u32TunerId,stTerTunerAttr) \
{ \
	if (3 == u32TunerId)\
    { \
	    stTerTunerAttr.u32DemodClk       = HI_TER_DEMOD3_REF_CLOCK; \
	    stTerTunerAttr.u32ResetGpioNo    = HI_DEMOD3_RESET_GPIO; \
	    stTerTunerAttr.u16TunerMaxLPF    = HI_TER_TUNER3_MAX_LPF; \
	    stTerTunerAttr.u16TunerI2CClk    = HI_TER_TUNER3_I2C_CLOCK; \
	    stTerTunerAttr.enRFAGC           = HI_TER_TUNER3_RFAGC; \
	    stTerTunerAttr.enIQSpectrum      = HI_TER_TUNER3_IQSPECTRUM; \
	    stTerTunerAttr.enTSClkPolar      = HI_TER_TUNER3_TSCLK_POLAR; \
	    stTerTunerAttr.enTSFormat        = HI_TER_TUNER3_TS_FORMAT; \
	    stTerTunerAttr.enTSSerialPIN     = HI_TER_TUNER3_TS_SERIAL_PIN; \
	    stTerTunerAttr.enTSSyncHead      = HI_TER_TUNER3_TS_SYNC_HEAD; \
    } \
}
#endif

/********
例如TS_OUT0管脚输出data7信号，则stTSOut.enTSOutput[0] = HI_UNF_TUNER_OUTPUT_TSDAT7
********/
#ifdef HI_TUNER_OUTPUT_PIN0
#define GET_TUNER0_TSOUT_CONFIG(stTSOut) \
{ \
	    stTSOut.enTSOutput[0] = HI_TUNER_OUTPUT_PIN0; \
	    stTSOut.enTSOutput[1] = HI_TUNER_OUTPUT_PIN1; \
	    stTSOut.enTSOutput[2] = HI_TUNER_OUTPUT_PIN2; \
	    stTSOut.enTSOutput[3] = HI_TUNER_OUTPUT_PIN3; \
	    stTSOut.enTSOutput[4] = HI_TUNER_OUTPUT_PIN4; \
	    stTSOut.enTSOutput[5] = HI_TUNER_OUTPUT_PIN5; \
	    stTSOut.enTSOutput[6] = HI_TUNER_OUTPUT_PIN6; \
	    stTSOut.enTSOutput[7] = HI_TUNER_OUTPUT_PIN7; \
	    stTSOut.enTSOutput[8] = HI_TUNER_OUTPUT_PIN8; \
	    stTSOut.enTSOutput[9] = HI_TUNER_OUTPUT_PIN9; \
	    stTSOut.enTSOutput[10] = HI_TUNER_OUTPUT_PIN10; \
}
#endif

#ifdef HI_TUNER1_OUTPUT_PIN0
#define GET_TUNER1_TSOUT_CONFIG(stTSOut) \
{ \
        stTSOut.enTSOutput[0] = HI_TUNER1_OUTPUT_PIN0; \
	    stTSOut.enTSOutput[1] = HI_TUNER1_OUTPUT_PIN1; \
	    stTSOut.enTSOutput[2] = HI_TUNER1_OUTPUT_PIN2; \
	    stTSOut.enTSOutput[3] = HI_TUNER1_OUTPUT_PIN3; \
	    stTSOut.enTSOutput[4] = HI_TUNER1_OUTPUT_PIN4; \
	    stTSOut.enTSOutput[5] = HI_TUNER1_OUTPUT_PIN5; \
	    stTSOut.enTSOutput[6] = HI_TUNER1_OUTPUT_PIN6; \
	    stTSOut.enTSOutput[7] = HI_TUNER1_OUTPUT_PIN7; \
	    stTSOut.enTSOutput[8] = HI_TUNER1_OUTPUT_PIN8; \
	    stTSOut.enTSOutput[9] = HI_TUNER1_OUTPUT_PIN9; \
	    stTSOut.enTSOutput[10] = HI_TUNER1_OUTPUT_PIN10; \
}
#endif

#ifdef HI_TUNER2_OUTPUT_PIN0
#define GET_TUNER2_TSOUT_CONFIG(stTSOut) \
{ \
        stTSOut.enTSOutput[0] = HI_TUNER2_OUTPUT_PIN0; \
	    stTSOut.enTSOutput[1] = HI_TUNER2_OUTPUT_PIN1; \
	    stTSOut.enTSOutput[2] = HI_TUNER2_OUTPUT_PIN2; \
	    stTSOut.enTSOutput[3] = HI_TUNER2_OUTPUT_PIN3; \
	    stTSOut.enTSOutput[4] = HI_TUNER2_OUTPUT_PIN4; \
	    stTSOut.enTSOutput[5] = HI_TUNER2_OUTPUT_PIN5; \
	    stTSOut.enTSOutput[6] = HI_TUNER2_OUTPUT_PIN6; \
	    stTSOut.enTSOutput[7] = HI_TUNER2_OUTPUT_PIN7; \
	    stTSOut.enTSOutput[8] = HI_TUNER2_OUTPUT_PIN8; \
	    stTSOut.enTSOutput[9] = HI_TUNER2_OUTPUT_PIN9; \
	    stTSOut.enTSOutput[10] = HI_TUNER2_OUTPUT_PIN10; \
}
#endif
#ifdef HI_TUNER3_OUTPUT_PIN0
#define GET_TUNER3_TSOUT_CONFIG(stTSOut) \
{ \
        stTSOut.enTSOutput[0] = HI_TUNER3_OUTPUT_PIN0; \
	    stTSOut.enTSOutput[1] = HI_TUNER3_OUTPUT_PIN1; \
	    stTSOut.enTSOutput[2] = HI_TUNER3_OUTPUT_PIN2; \
	    stTSOut.enTSOutput[3] = HI_TUNER3_OUTPUT_PIN3; \
	    stTSOut.enTSOutput[4] = HI_TUNER3_OUTPUT_PIN4; \
	    stTSOut.enTSOutput[5] = HI_TUNER3_OUTPUT_PIN5; \
	    stTSOut.enTSOutput[6] = HI_TUNER3_OUTPUT_PIN6; \
	    stTSOut.enTSOutput[7] = HI_TUNER3_OUTPUT_PIN7; \
	    stTSOut.enTSOutput[8] = HI_TUNER3_OUTPUT_PIN8; \
	    stTSOut.enTSOutput[9] = HI_TUNER3_OUTPUT_PIN9; \
	    stTSOut.enTSOutput[10] = HI_TUNER3_OUTPUT_PIN10; \
}
#endif

//#endif

#define DEFAULT_DVB_PORT (HI_DEMUX_PORT)

/* DAC */
#define DAC_CVBS         HI_DAC_CVBS
#define DAC_YPBPR_Y      HI_DAC_YPBPR_Y
#define DAC_YPBPR_PB     HI_DAC_YPBPR_PB
#define DAC_YPBPR_PR     HI_DAC_YPBPR_PR

#ifdef __cplusplus
}
#endif
#endif

