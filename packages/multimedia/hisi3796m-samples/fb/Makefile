
#===============================================================================
# export variable
#===============================================================================
include $(SDK_DIR)/base.mak
include $(SAMPLE_DIR)/base.mak
 
#===============================================================================
# local variable
#===============================================================================
CFLAGS += $(CFG_HI_SAMPLE_CFLAGS)

CFLAGS += -I$(SAMPLE_DIR)/common 
            
LIB = -Wl,--start-group $(SYS_LIBS) $(HI_LIBS) -Wl,--end-group 

APP     := sample_fb

OBJS    := sample_fb.o $(COMMON_FILES)

#===============================================================================
# rules
#===============================================================================
.PHONY: all clean install uninstall

all: $(APP)
	
$(APP): $(OBJS)
	$(CC) -o $@ $^ $(LDFLAGS) $(LIBPATH) $(LIB) 

 
 
 