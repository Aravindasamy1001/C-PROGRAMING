bitset:main.o set.o
	gcc $^ -o $@
main.o:main.c set.h
	gcc -c $<
set.o:set.c 
	gcc -c $<

clean:
	rm -f *.o bitset
