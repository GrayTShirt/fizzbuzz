ifndef CC
	CC=gcc
endif

CFLAGS=-Wall -Wextra -g

all: fizzbuzz

clean:
	git clean -xfd
