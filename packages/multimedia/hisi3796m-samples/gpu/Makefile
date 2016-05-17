
#===============================================================================
# export variable
#===============================================================================
include $(SDK_DIR)/base.mak
include $(SAMPLE_DIR)/base.mak
 
#===============================================================================
# local variable
#===============================================================================  
CFLAGS += $(CFG_HI_SAMPLE_CFLAGS) 
 
CFLAGS += -I$(SAMPLE_DIR)/common \
			-I$(SAMPLE_DIR)/gpu/src/common/inc \
			-I$(SAMPLE_DIR)/gpu/src/common/egl/inc \
            -I$(SAMPLE_DIR)/gpu/src/common/key/inc \
            -I$(SAMPLE_DIR)/gpu/src/common/texture/inc 
                               
ifeq ($(CFG_HI_EGL_TYPE), fb)
CFLAGS += -DHI3D_DEBUG -DLINUX -DEGL_API_FB
endif
                                  
DEP_LIBS += $(HI_LIBS) -lMali

LIB = -Wl,--start-group $(SYS_LIBS) $(DEP_LIBS) -Wl,--end-group 
                         
CFG_INC := $(CFLAGS)

export LIB CFG_INC COMMON_FILES

#===============================================================================
# rules
#===============================================================================

all:
ifeq ($(CFG_HI_GPU), y)
	make -C src/es11/coverflow
endif 

 