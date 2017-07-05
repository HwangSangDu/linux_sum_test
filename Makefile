sum : main.o sum.o 
	gcc -o sum main.o sum.o
sum.o: sum.h
	gcc -o sum.o sum.c
main.o: sum.h 
	gcc -o main.o main.c
clean:
	rm *.o