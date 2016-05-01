#include <stdio.h>
int string_alpha(char *s);

int main(void)
{
	int p;

	p = string_alpha("level");
	printf("%d\n", p);
	p = string_alpha("12345");
	printf("%d\n", p);
	p = string_alpha("level12345");
	printf("%d\n", p);
	p = string_alpha("level lev");
	printf("%d\n", p);
	p = string_alpha(" ");
	printf("%d\n", p);
	p = string_alpha("");
	printf("%d\n", p);
	p = string_alpha("level's");
	printf("%d\n", p);
	p = string_alpha("lafdfkajhsdkfjahAFDAWRGA");
	printf("%d\n", p);
	p = string_alpha("AFDAWRGA");
	printf("%d\n", p);
	return (0);
}
