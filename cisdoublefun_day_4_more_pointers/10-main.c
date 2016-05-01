#include <stdio.h>
int string_digit(char *s);

int main(void)
{
	int p;

	p = string_digit("level");
	printf("%d\n", p);
	p = string_digit("12345");
	printf("%d\n", p);
	p = string_digit("level12345");
	printf("%d\n", p);
	p = string_digit("level lev");
	printf("%d\n", p);
	p = string_digit(" ");
	printf("%d\n", p);
	p = string_digit("level's");
	printf("%d\n", p);
	p = string_digit("lafdfkajhsdkfjahAFDAWRGA");
	printf("%d\n", p);
	return (0);
}
