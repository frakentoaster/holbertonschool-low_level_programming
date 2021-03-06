#include <stdio.h>
#include "my_functions.h"

int main(void)
{
  /* Use unsigned long to hold fibo values */
  unsigned long int f;
  unsigned long int g;
  unsigned long int h;
  int i;
  f = 1;
  g = 2;
  /* manually print first two fibos start with 1 and 2 */
  printf("1, 2, ");
  for (i = 0; i <= 50; i++)
    {
      h = f + g;
      f = g;
      g = h;
      /* Skip printing comma if last fibo value */
      if (h == 86267571272)
	{
	  printf("%lu \n", h);
	}
      else 
	{
	  printf("%lu, ", h);
	}
    }
  return 0;
}
