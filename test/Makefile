CC := gcc
CFLAGS := -MMD -MP

TEST = $(wildcard *.c)
OBJS = $(TEST:.c=.o)
DEPS = $(TEST:.c=.d)
-include ${DEPS}

all: ${OBJS}
	${CC} ${CFLAGS} -o test.exe ${OBJS} ../src/libtestfunctions.a
