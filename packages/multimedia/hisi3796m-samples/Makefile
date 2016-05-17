
#===============================================================================
# export variable
#===============================================================================
include $(SDK_DIR)/base.mak 
include $(SAMPLE_DIR)/base.mak

#===============================================================================
# local variable
#=============================================================================== 
objects := fb

ifeq ($(CFG_HI_GPU),y)
objects += gpu
endif 

objects += common

ifeq (${obj},)
depends:=${objects}
else
depends:=${obj}
endif 

#===============================================================================
# rules
#===============================================================================
.PHONY: prepare unprepare all clean install uninstall ${objects} ${objects_clean} ${objects_install} ${objects_uninstall} test

all: ${depends} 

${objects}:
	make -C $@


 
