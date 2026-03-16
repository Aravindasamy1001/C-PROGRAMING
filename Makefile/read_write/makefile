CC = gcc
CFLAGS = -Iinclude

SRC = src/main.c src/file_ops.c
OBJ = obj/main.o obj/file_ops.o

TARGET = bin/choice_of_file

$(TARGET): $(OBJ)
	$(CC) $^ -o $(TARGET)
obj/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f obj/*.o bin/choice_of_file

debug: CFLAGGS += -g
debug: clean $(TARGET)
