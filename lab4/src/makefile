CC = gcc
CFLAGS = -Wall
LIBS = -lm

all: parallel_min_max process_memory parallel_sum

parallel_min_max: parallel_min_max.c find_min_max.c utils.c
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS)

process_memory: process_memory.c
	$(CC) $(CFLAGS) -o $@ $^

parallel_sum: parallel_sum.c find_min_max.c utils.c
	$(CC) $(CFLAGS) -o $@ $^ $(LIBS) -pthread

clean:
	rm -f parallel_min_max process_memory parallel_sum