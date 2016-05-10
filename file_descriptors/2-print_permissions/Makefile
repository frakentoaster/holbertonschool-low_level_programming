CC = gcc
CFLAGS = -Wall -Werror -Wextra -pedantic
SRC = 2-print_permissions.c
OBJ = 2-print_permissions

# Compile any .c file into .o file with corresponding OBJ name
all: $(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(OBJ)

# Ignore phony filenames such as files with name of "clean"
.PHONY: clean

clean:
	rm $(OBJ)
