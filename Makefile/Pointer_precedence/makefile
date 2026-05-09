point : main.o precedence.o
	gcc $^ -o $@

main.o : main.c
	gcc $< -c 

precedence.o : precedence.c
	gcc $< -c 

clean :
	rm -f *.o point
