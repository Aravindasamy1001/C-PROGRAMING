CC = gcc

TARGET = patternw

$(TARGET): main.o pattern.o
	$(CC) $^ -o $(TARGET)

%.o: %.c 
	$(CC) -c $< -o $@

clean:
	rm -f *.o patternw
