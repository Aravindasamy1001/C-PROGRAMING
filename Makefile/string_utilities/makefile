CC = gcc
CFLAGS = -Wall -g

TARGET = program
all: $(TARGET)

SRC = main.c string_utils.c

OBJ = main.o string_utils.o

$(TARGET): $(OBJ)
	$(CC) $(OBJ) $(CFLAGS)  -o $(TARGET)
%.O: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)

.PHONY: all clean
