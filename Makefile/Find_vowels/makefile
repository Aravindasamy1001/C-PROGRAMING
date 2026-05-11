vowels : main.o vowel.o
	gcc $^ -o $@

main.o : main.c
	gcc $< -c

vowel.o : vowel.c
	gcc $< -c

clean:
	rm -f *.o vowels
