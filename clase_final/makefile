CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
OUT = build/programa

SRC = main.c \
      src/menu.c \
      src/cuenta.c \
      src/io.c

all:
	mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run: all
	./$(OUT)

clean:
	rm -rf build