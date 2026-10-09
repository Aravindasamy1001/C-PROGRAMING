bigg : main.o big.o
	gcc $^ -o $@
main.o: main.c
	gcc $< -c
big.o: big.c
	gcc $< -c

clean:
	rm *.o bigg 
