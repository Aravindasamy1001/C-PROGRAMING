hello:main.o str.o
	gcc $^ -o $@
main.o:main.c str.h
	gcc -c $<
str.o:str.c
	gcc -c $<
clean:
	rm -f *.o hello
