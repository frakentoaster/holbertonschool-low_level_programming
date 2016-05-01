#include <stdio.h>
int string_printable(char *s);

int main(void)
{
	int p;

	p = string_printable("level");
	printf("%d\n", p);
	p = string_printable("12345");
	printf("%d\n", p);
	p = string_printable("level12345");
	printf("%d\n", p);
	p = string_printable("level lev");
	printf("%d\n", p);
	p = string_printable(" ");
	printf("%d\n", p);
	p = string_printable("");
	printf("%d\n", p);
	p = string_printable("level's");
	printf("%d\n", p);
	p = string_printable("lafdfkajhsdkfjahAFDAWRGA");
	printf("%d\n", p);
	p = string_printable("AFDAWRGA");
	printf("%d\n", p);
	return (0);
}
