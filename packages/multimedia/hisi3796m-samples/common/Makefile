
include $(SDK_DIR)/base.mak
include $(SAMPLE_DIR)/base.mak

CFLAGS += $(CFG_HI_SAMPLE_CFLAGS) 

LIBS := libhi_sample_common

all: $(LIBS)

$(LIBS): $(COMMON_FILES)
	$(AR) -rsv $@.a $^ 


