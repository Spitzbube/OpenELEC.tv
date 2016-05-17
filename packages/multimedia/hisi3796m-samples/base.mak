 

CFG_HI_SAMPLE_CFLAGS :=
 
CFG_HI_SAMPLE_CFLAGS+= ${CFG_HI_BOARD_CONFIGS} 

SYS_LIBS := -lpthread -lrt -lm -ldl 

HI_LIBS :=  -lhi_common -lhigo -lhigoadp -lpng -lz -lfreetype -ljpeg6b #-ljpeg -lhi_resampler 

HI_LIBS += -lhi_msp 

ifeq ($(CFG_HI_CAPTION_SO_SUPPORT),y)
HI_LIBS += -lhi_so
endif 

ifeq ($(CFG_HI_PLAYER_SUPPORT),y)
HI_LIBS += -lsubdec -lplayer #-lhi_charsetMgr -lsubdec -lplayer
endif 

#COMMON_FILES := $(SAMPLE_DIR)/common/hi_adp_demux.o     \
                $(SAMPLE_DIR)/common/hi_psi_si.o        \
                $(SAMPLE_DIR)/common/hi_adp_data.o      \
                $(SAMPLE_DIR)/common/hi_adp_hdmi.o      \
                $(SAMPLE_DIR)/common/hi_adp_mpi.o       \
                $(SAMPLE_DIR)/common/hi_adp_search.o    \
                $(SAMPLE_DIR)/common/hi_filter.o        \
                $(SAMPLE_DIR)/common/search.o 

COMMON_FILES := $(SAMPLE_DIR)/common/hi_adp_mpi.o
COMMON_FILES += $(SAMPLE_DIR)/common/hi_adp_hdmi.o


