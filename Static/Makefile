CC=gcc
CFLAGS= -g -Wall

all : matrix_static.o main.o
	$(CC) $(CFLAGS) matrix_static.o main.o -o run
 
main.o : main.c matrix_static.h
	$(CC) $(CFLAGS) -c main.c

matrix_static.o : matrix_static.c matrix_static.h
	$(CC) $(CFLAGS) -c matrix_static.c

 
clean:
	$(RM)  *.o $(objects)
	$(RM) run	
