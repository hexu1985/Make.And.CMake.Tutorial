CXX = g++
CXXFLAGS = -g3 -Wall -Wextra -fPIC

INCLUDES = -Ilib
LDFLAGS = -Wl,-rpath,'$$ORIGIN/lib' -Wl,--enable-new-dtags -lmessage
LDPATH = -Llib

OBJECTS = hello-world.o
TARGET = hello-world

LIB_NAME = lib/libmessage.so

all: $(TARGET)
	@echo "TARGET = $(TARGET)" 

$(TARGET): $(OBJECTS) $(LIB_NAME)
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

%.o:%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCLUDES)

.PHONY:
$(LIB_NAME):
	$(MAKE) --directory=lib

.PHONY:
clean:
	$(MAKE) clean --directory=lib
	$(RM) $(TARGET) a.out core *.o
	@echo "clean OK!"
