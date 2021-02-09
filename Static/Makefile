# Specify compiler
CC=gcc
 
# Specify linker
LINK=gcc
 
.PHONY : all
all : app
 
# Link the object files into a binary
app : matrix_static.o test_static.o
    $(LINK) -o app test_static.o matrix_static.o -o run
 
# Compile the source files into object files
test_static.o : test_static.c matrix_static.h
    $(CC) -c test_static.c -o test_static

matrix_static.o : matrix_static.cpp matrix_static.hpp
	$(CC) -c test_static.c -o test_static
 
# Clean target
.PHONY : clean
clean :
    rm *.o app 
	rm run