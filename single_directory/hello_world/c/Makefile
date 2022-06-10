# Makefile

RM = rm -f
CC = gcc
CFLAGS = -Wall -g
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

hello_world: hello_world.c
	$(CC) -o $@ $^ $(CFLAGS) $(INCLUDE) $(LDFLAGS) $(LDPATH)


