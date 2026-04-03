.PHONY: all clean

CC = gcc

TARGET = countones

SRC = main.c one.c
OBJ = main.o one.o

$(TARGET): $(OBJ)
	$(CC) $^ -o $(TARGET)

%.o: %.c
	$(CC) -c $< -o $@

clean:
	rm -f *.o countones
