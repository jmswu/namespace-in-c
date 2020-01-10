CC := gcc
FLAGS := -Wall -std=c99

namespace: namespace.o interface.o
	${CC} ${FLAGS} -o $@ $^

phony: clean
clean:
	del *.o
	del namespace.exe
