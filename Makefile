# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Iinclude -Wall -Wextra -g

# Source files
SRC = src/main.c src/menus.c src/rig.c

# Output executable
OUT = build/crypto-rig

# Default target
all: $(OUT)

# Compile the executable
$(OUT): $(SRC)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC)

# Clean compiled files
clean:
	rm -f $(OUT)
