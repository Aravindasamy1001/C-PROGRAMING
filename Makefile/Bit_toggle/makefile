bittoggle:main.o toggle.o
	gcc $^ -o $@
main.o:main.c toggle.h
	gcc -c $<
toggle.o:toggle.c 
	gcc -c $<

clean:
	rm -f *.o bittoggle
