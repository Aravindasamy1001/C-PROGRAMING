CC=gcc
CFLAGS = -wall -g

fibonacci:main.o fibo.o
	$(CC) $^ -o $@
%.o:%.c
	$(CC) -c $<
clean:
	rm -f *.o fibonacci
