CXX = g++
CXXFLAGS = -g3 -Wall -Wextra

INCLUDES = -Ilib
LDFLAGS = -lmessage
LDPATH = -Llib

OBJECTS = hello-world.o
TARGET = hello-world

all: $(TARGET)
	@echo "TARGET = $(TARGET)" 

$(TARGET): $(OBJECTS)
	$(MAKE) --directory=lib
	$(CXX) -o $@ $^ $(LDFLAGS) $(LDPATH)

%.o:%.cpp
	$(CXX) -o $@ -c $< $(CXXFLAGS) $(INCLUDES)

.PHONY:
clean:
	$(MAKE) clean --directory=lib
	$(RM) $(TARGET) $(LIB_NAME) a.out core *.o
	@echo "clean OK!"
