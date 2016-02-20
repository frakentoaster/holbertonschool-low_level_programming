#include <stdio.h>
#include "my_functions.h"

int main(void)
{
  int n;
  int temp;
  temp = 0;
  /* Check for multiples of 3 and 5 under 1024
   summing multiples and saving to var "temp" */
  for (n = 0; n < 1024; n++)
    {
      if (n % 3 == 0 || n % 5 == 0)
	{
	  temp += n;
	}
    }
  printf("%d \n", temp);
  return 0;
}
