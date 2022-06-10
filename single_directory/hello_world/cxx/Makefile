# Makefile

RM = rm -f
CXX = g++
CXXFLAGS = -Wall -g
INCLUDE = 
LDFLAGS = 
LDPATH = 

PROGS =	hello_world

.PHONY: all
all: $(PROGS)
	@echo "build OK!"

clean:
	@$(RM) $(PROGS) *.o
	@echo "clean OK!"

hello_world: hello_world.cpp
	$(CXX) -o $@ $^ $(CXXFLAGS) $(INCLUDE) $(LDFLAGS) $(LDPATH)


