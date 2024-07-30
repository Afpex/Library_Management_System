CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

all: main

main: src/main.o src/library.o src/book.o src/user.o
	$(CC) $(CFLAGS)	-o main src/main.o src/library.o src/book.o src/user.o

src/main.o: src/main.c
	$(CC) $(CFLAGS) -c src/main.c -o src/main.o

src/library.o: src/library.c
	$(CC) $(CFLAGS) -c src/library.c -o src/library.o

src/book.o: src/book.c
	$(CC) $(CFLAGS) -c src/book.c -o src/book.o

src/user.o: src/user.c
	$(CC) $(CFLAGS) -c src/user.c -o src/user.o

clean:
	del /Q main.exe
  del /Q src\*.o