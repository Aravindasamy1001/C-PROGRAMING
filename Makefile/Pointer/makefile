onec : main.o pointer.o
	gcc $^ -o $@

main.o : main.c pointer.h
	gcc $< -c

pointer.o : pointer.c
	gcc $< -c

clean :
	rm -f *.o onec
