EXE = stack-demo

CC = gcc
CFLAGS = -Wall -Wextra -g

$(EXE): main.o stack.o
	$(CC) -o $@ $^

main.o: stack.h
stack.o: stack.h

.PHONY: valgrind clean distclean

valgrind: $(EXE)
	valgrind $(realpath $(EXE))

clean:
	-rm *.o

distclean: clean
	-rm $(EXE)
