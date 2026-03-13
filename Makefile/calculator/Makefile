call:main.o calc.o
	gcc $^ -o $@
main.o:main.c 
	gcc -c $<
clac.o:calc.c
	gcc -c $<
clean:
	rm -f *.o call
