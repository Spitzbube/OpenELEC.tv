SRC = $(wildcard *.c)
OTHERSRC=$(COMMON_FILES)
OTHERSRC += ../../common/egl/src/hi_egl.c         \
            ../../common/egl/src/egl_native.c   \
            ../../common/texture/src/hi_texture.c \
            ../../common/key/src/hi_engine_key.c  \
	    ../../common/key/src/hi_input_dfb.c   \
	    ../../common/key/src/hi_ir_remote.c

LOCALLIB=-lEGL -lGLESv1_CM
APP=coverflow_vertical
all:$(APP)


OBJ=$(patsubst %.c,%.o,$(SRC))
$(OBJ): %.o: %.c
	$(AT)$(CC) -c  $^ -o $@ $(CFG_INC) $(LIBPATH) $(LIB) $(LOCALLIB)

OBJ2=$(patsubst %.c,%.o,$(OTHERSRC))

$(OBJ2): %.o: %.c
	$(AT)$(CC) -c $^ -o $@ $(CFG_INC) $(LIBPATH) $(LIB) $(LOCALLIB)

$(APP):$(OBJ2) $(OBJ)
	$(AT)$(CC) -o $@ $^ $(CFG_INC) $(LIBPATH) $(LIB) $(LOCALLIB)

clean:
	-@rm -f $(APP)
	-@rm -f $(OBJ)
	-@rm -f $(OBJ2)
