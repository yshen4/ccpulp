CC=g++
CCFlag=-g -Wall -fPIC -std=c++11
LDFLAGS = -shared

OS := $(shell uname)
ifeq ($(OS), Darwin)
    LIBPATH=
else
    LIBPATH=-pthread -Wl,-R. 
endif

all: fib

fib: fib.cpp
	$(CC) $(CCFlag) -o fib fib.cpp

clean:
	rm -f  fib *.o *.so *.gch
	rm -rf *.dSYM

test:
	./fib
