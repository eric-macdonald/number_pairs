## A simple makefile

CC = gcc
CFLAGS = -g -Wall 
#LDFLAGS = -L/usr/class/cs107/lib -lgraph
LDFLAGS = 

PROG = program
HDRS = gcd.h prime.h 
SRCS = main.c gcd.c prime.c

## This incantation says that the object files
## have the same name as the .c files, but with .o

OBJS = $(SRCS:.c=.o)
ASM  = $(SRCS:.c=.s)

## This is the first rule (the default)
## Build the program from the three .o's

$(PROG) : $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $(PROG)

## Rules for the source files -- these do not have
## second build rule lines, so they will use the
## default build rule to compile X.c to make X.o

main.o : main.c gcd.h prime.h 
gcd.o : gcd.c gcd.h
prime.o : prime.c prime.h

## Remove all the compilation and debugging files
clean :
	rm -f core $(PROG) $(OBJS) $(ASM)

## Build tags for these sources
TAGS : $(SRCS) $(HDRS)
	etags -t $(SRCS) $(HDRS)
