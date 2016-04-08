IDIR =inc
CC=gcc
CFLAGS=-I -Wall -pedantic -Werror -Wextra -c -o$(IDIR)
ODIR=src
LDIR =.
LIBS=-lm

_DEPS = holbertonschool.h
# replace wildcard "%" with variable following ","
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))
# list of object files to be included
_OBJ = 0-absolute.o	0-print_number.o 1-power.o 2-square_root.o \
	3-print_string.o 4-strings_compare.o 0-contact_strings.o \
	0-uppercase_string.o 1-swap_int.o	2-str_len.o	3-string_ncopy.o \
	5-reverse_array.o 0-first_digit.o	1-cap_string.o 1-uppercase.o \
	2-string_copy.o 4-positive_or_not.o 5-string_to_integer.o 0-lowercase.o \
	1-nconcat_strings.o	2-print_array.o	3-is_prime_number.o	4-reverse_string.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))
# compile object files using gcc and flags saved to variables
$(ODIR)/%.o: %.c $(DEPS)
	$(CC) $(CFLAGS)
# create library 
all: $(OBJ)
	ar -rc libholbertonschool.a $(OBJ)

edit: $(_OBJ)
	cc -o edit $(_OBJ)
# ignore phony filenames such as files with name of "clean"
.PHONY: clean

clean:
	-rm libholbertonschool.a $(OBJ)

re: all
