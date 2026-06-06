CC = gcc
CFLAGS = -Wall -Iinclude

SRC = src/header.h src/main.c src/parsing.c src/MOV_converter.c src/arthmetic.c
OUT = build/assembler

all:
	$(CC) $(CFLAGS) $(SRC) -o $(OUT)

run:
	./$(OUT)

clean:
	rm -f $(OUT)