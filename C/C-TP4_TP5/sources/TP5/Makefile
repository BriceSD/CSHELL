
CC=gcc
CFLAGS=-Wall
LDFLAGS=
EXEC=hello

all: $(EXEC)

hello:  hellomake.o hellofunc.o
	gcc -o hello hellomake.o hellofunc.o $(LDFLAGS)

hellofunc.o: hellofunc.c 
	gcc -c hellofunc.c $(CFLAGS)

hellomake.o: hellomake.c hellomake.h
	gcc -c hellomake.c hellomake.h $(CFLAGS)

clean:
	rm -rf *.o

cleanall: clean
	rm -rf $(EXEC)
				
