CC = gcc

SRC = main.c check.c
OBJ = main.o check.o

TARGET = checkbit

$(TARGET): $(OBJ)
	$(CC) $^ -o $(TARGET)
%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f *.o checkbit
