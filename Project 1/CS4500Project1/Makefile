CC=gcc
CFLAGS=-I. -Wall
DEPS = list.h

list_test: list_test.o list.o
	$(CC) -o list_test list_test.o list.o

list_test.o: list_test.c $(DEPS)
	$(CC) -c list_test.c $(CFLAGS)

list.o: list.c $(DEPS)
	$(CC) -c list.c $(CFLAGS)

clean:
	rm -f *.o list_test
