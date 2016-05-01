#include <stdio.h>
int string_lower(char *s);

int main(void)
{
	int p;

	p = string_lower("level");
	printf("%d\n", p);
	p = string_lower("12345");
	printf("%d\n", p);
	p = string_lower("level12345");
	printf("%d\n", p);
	p = string_lower("level lev");
	printf("%d\n", p);
	p = string_lower(" ");
	printf("%d\n", p);
	p = string_lower("");
	printf("%d\n", p);
	p = string_lower("level's");
	printf("%d\n", p);
	p = string_lower("lafdfkajhsdkfjahAFDAWRGA");
	printf("%d\n", p);
	p = string_lower("AFDAWRGA");
	printf("%d\n", p);
	return (0);
}
