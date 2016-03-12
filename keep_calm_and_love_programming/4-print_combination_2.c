#include "my_functions.h"

void print_combination_2(void)
{
  /* Using inner loop as ones place
     and outer loop as tens place
     outputs ints form 00 - 99 */
  int i;
  for (i = 0; i < 10; i++)
  {
    int j;
    for (j = i + 1; j < 10; j++)
    {
      printf("%d",i);
      printf("%d",j);
      /* Skips printing comma for
	 last integer(89) */
      if (i != 8 && j != 9)
      {
	printf(", ");
      }
    }
  }
}
