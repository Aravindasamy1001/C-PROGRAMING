factorial:main.o fact.o
	gcc $^ -o $@
main.o:main.c fact.h
	gcc -c $<
fact.o:fact.c
	gcc -c $<
clean:
	rm -f *.o factorial
