#include <stdio.h>
int string_upper(char *s);

int main(void)
{
	int p;

	p = string_upper("level");
	printf("%d\n", p);
	p = string_upper("12345");
	printf("%d\n", p);
	p = string_upper("level12345");
	printf("%d\n", p);
	p = string_upper("level lev");
	printf("%d\n", p);
	p = string_upper(" ");
	printf("%d\n", p);
	p = string_upper("");
	printf("%d\n", p);
	p = string_upper("level's");
	printf("%d\n", p);
	p = string_upper("lafdfkajhsdkfjahAFDAWRGA");
	printf("%d\n", p);
	p = string_upper("AFDAWRGA");
	printf("%d\n", p);
	return (0);
}
