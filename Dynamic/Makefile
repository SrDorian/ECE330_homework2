CC=gcc
CFLAGS= -g -Wall

all: matrix_dynamic.o main.o
	$(CC) $(CFLAGS) matrix_dynamic.o main.o -o run

main.o: main.c matrix_dynamic.h
	$(CC) $(CFLAGS) -c main.c

matrix_dynamic.o: matrix_dynamic.c matrix_dynamic.h
	$(CC) $(CFLAGS) -c matrix_dynamic.c

clean:
	$(RM) *.o $(objects)
	$(RM) run
