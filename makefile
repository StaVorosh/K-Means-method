CC = gcc
CFLAGS = -c -g

res: main.o
	${CC} main.o -fopenmp -o res
main.o: main.c
	${CC} ${CFLAGS} main.c
clean:
	del *.o