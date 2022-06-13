
RM = rm -f
CC = gcc
CFLAGS = -Wall -g -DNDEBUG
INCLUDES = 
LDFLAGS =
LDPATH =
VPATH = 

SOURCES = $(shell ls *.c)
PROGS = test_md5

all: $(PROGS)
	@echo "PROGS = $(PROGS)" 

clean:
	$(RM) $(PROGS)

$(PROGS): $(SOURCES)
	$(CC) -o $@ $(CFLAGS) $(INCLUDES) $^ $(LDFLAGS) $(LDPATH)
