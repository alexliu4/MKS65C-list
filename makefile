run: all
	./linkedlist
	make clean

all: linkedlist.o test.o
	gcc linkedlist.o test.o -o linkedlist

linkedlist.o: linkedlist.c linkedlist.h
	gcc -c linkedlist.c

test.o: test.c linkedlist.h
	gcc -c test.c

clean:
	rm *.o
	rm linkedlist
