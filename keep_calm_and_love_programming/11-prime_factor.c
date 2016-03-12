#include <stdio.h>

int main(void)
{
  unsigned long int num, i, prime;
  num = 612852475143;
  prime = 1;
  for (i = 3; i * i <= num; i+=2)
    { /* Search for divisors */
      if (num % i == 0)
	{ /* Update var prime with each new divisor */
	  prime = i;
	  while (num % i == 0)
	    { /* divide num by divisor */
	      num /= i;
	    }
	}
    } /* If remaining number is positive, save to var prime */
  if (num > 1)
    {
      prime = num;
    } /* Print latest (largest) prime */
  printf("%ld", prime);
  return 0;
}
