#include "my_functions.h"

void print_combination_2(void)
{
  int i;
  for (i = 0; i < 10; i++)
  {
    int j;
    for (j = i + 1; j < 10; j++)
    {
      printf("%d",i);
      printf("%d",j);
      if (i != 8 && j != 9)
      {
	printf(", ");
      }
    }
  }
}
