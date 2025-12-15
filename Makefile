CC = gcc

CFLAGS = -Iinclude -Wall -Wextra -g

SRC = src/main.c src/menus.c src/rig.c

OUT = build/crypto-rig

all: $(OUT)

$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

clean:
	rm -f $(OUT)
