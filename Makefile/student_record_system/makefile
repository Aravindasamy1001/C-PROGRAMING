CC = gcc
SRC =src/main.c src/student.c
OBJ =obj/main.o obj/student.o

TARGET = bin/student_app

$(TARGET): $(OBJ)
	$(CC) $^ -o $@
obj/%.o: src/%.c
	$(CC) -c $< -o $@

clean:
	rm -f obj/*.o bin/student_app
	

