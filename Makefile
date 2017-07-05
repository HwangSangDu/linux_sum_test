sum : main.o sum.o 
	gcc -o sum main.o sum.o
sum.o: sum.h sum.c
	gcc -c -o sum.o sum.c
main.o: sum.h main.c
	gcc -c -o main.o main.c
clean:
	rm *.o