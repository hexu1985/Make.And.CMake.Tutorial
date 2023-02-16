CC = gcc
CFLAGS = -g3 -Wall -Wextra -fPIC

INCLUDES = -Ilib
LDFLAGS = -Wl,-rpath,'$$ORIGIN/lib' -Wl,--enable-new-dtags -lhello
LDPATH = -Llib

OBJECTS = main.o
TARGET = hello-world

all: $(TARGET)
	@echo "TARGET = $(TARGET)" 

$(TARGET): $(OBJECTS)
	$(MAKE) --directory=lib
	$(CC) -o $@ $^ $(LDFLAGS) $(LDPATH)

%.o:%.c
	$(CC) -o $@ -c $< $(CFLAGS) $(INCLUDES)

.PHONY:
clean:
	$(MAKE) clean --directory=lib
	$(RM) $(TARGET) a.out core *.o
	@echo "clean OK!"
