all:
	gcc -Wall -g 1.1.c 1.2.c 1.3.c 1.4.c 1.5.c tests.c -o test

clean:
	rm -f *.o
