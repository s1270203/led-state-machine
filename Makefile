CC = gcc
CFLAGS = -Wall

SRCS = main.c led.c
OBJS = $(SRCS:.c=.o)

all: led-state-machine

led-state-machine: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o led-state-machine