/* Takes struct String and prints it */
#include "str_struct.h"
int print_char(char c);

void print_string_struct(struct String *str) {
	int i;
	i = 0;

	while (str->str[i] != '\0') {
		print_char(str->str[i]);
		i++;
	}
	print_char(',');
	print_char(' ');
	print_char(i + '0'); /* print digit via ascii */
	print_char('\n');
}
