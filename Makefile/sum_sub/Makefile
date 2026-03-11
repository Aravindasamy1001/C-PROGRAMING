.PHONY:all clean
all:sum_program sub_program 
sum_program:main.o sum.o	
	gcc main.o sum.o -o sum_program
sub_program:main1.o sub.o
	gcc main1.o sub.o -o sub_program
main1.o:main1.c sub.h
	gcc -c main1.c
sub.o:sub.c
	gcc -c sub.c
main.o:main.c sum.h
	gcc -c main.c
sum.o:	sum.c 
	gcc -c sum.c
clean: 
	rm -f *.o
