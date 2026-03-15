CC = gcc
CFLAGS = -Wall -g

prime_number:main.o prime.o
	$(CC) $^ -o $@
%.o: %.c
	$(CC) -c $<
clean:
	rm -f *.o prime_number
