bitclear:main.o clearb.o
	gcc $^ -o $@
main.o:main.c clearb.h
	gcc -c $<
clearb.o:clearb.c
	gcc -c $<

clean:
	rm -f *.o bitclear
