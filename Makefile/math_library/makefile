CC = gcc
LIBS = -lm

mathprog: main.o math.o
	$(CC) $^ -o $@ $(LIBS)
%.o:%.c
	$(CC) -c $<

clean:
	rm -f *.o mathprog
