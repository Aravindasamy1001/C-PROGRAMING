
max_max2 : main.o max.o
	gcc $^ -o $@

main.o : main.c
	gcc $< -c 

max.o : max.c
	gcc $< -c 

clean:
	rm -f *.o max_max2
