CC = gcc

SOURCE = $(wildcard *.c)
OBJS = $(SOURCE:.c=.o)
DEPS = $(SOURCE:.c=.d)
-include ${DEPS}

lib: ${OBJS}
	ar cr libtestfunctions.a ${OBJS}
