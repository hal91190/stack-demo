EXE = stack-demo

CC = gcc
CFLAGS = -Wall -Wextra -g

$(EXE): main.o stack.o linkedlist.o
	$(CC) -o $@ $^

main.o: stack.h
stack.o: stack.h linkedlist.h
linkedlist.o: linkedlist.h

.PHONY: valgrind clean distclean

valgrind: $(EXE)
	valgrind $(realpath $(EXE))

clean:
	-rm *.o

distclean: clean
	-rm $(EXE)
