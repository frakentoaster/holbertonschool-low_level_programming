#include <stdio.h>
#include "my_functions.h"

int main(void)
{
  /* Use unsigned long to hold fibo values */
  unsigned long int f, g, h;
  int i, sum;
  f = 1;
  g = 2;
  /* initialize sum to 2 (first even fibo num) */
  sum = 2;
  /* Iterate and calculate first 50 fibonacci nums */
  for (i = 0; i <= 50; i++) {
      h = f + g;
      f = g;
      g = h;
      /* sum up even fib nums below 4 mil */
      if (h % 2 == 0 && h < 4000000) {
	  sum += h;
        }
      else {
          continue;
        }
    }
  printf("%d \n", sum);
  return 0;
}
