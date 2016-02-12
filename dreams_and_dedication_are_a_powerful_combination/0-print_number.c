#include "my_functions.h"

void print_number(int n)
{
	int l=1;
	int x, p;
	if (n < 0)
	{
		print_char(45);
		n = (-n*-n);
	}

	while (n > 9)
	{
		l++;
		n/=10;
	}
	
	while (n > 9)
	{
		p = l-1;
		x = n / 10**p;
		n = n - x * 10**p;
		print_char(x + 48);
		p--;
	}

	if (n > 0 && n < 10) 
	{
		print_char(n + 48);
	}

	if (n == 0)
	{
		print_char(48);
	}
}

int myPow(int a, int b)
{
	int a;
	int 
}
