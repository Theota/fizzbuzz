fizzbuzz: main.o
	gcc -o fizzbuzz main.o

main.o: main.c
	gcc -c -Wall main.c

clean:
	rm *.o *.out fizzbuzz