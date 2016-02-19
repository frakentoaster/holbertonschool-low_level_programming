#include "my_functions.h"

#include <stdio.h>

void print_combination_4(void)
{
  int n;
  for (n = 0; n <= 99; n++)
    {
      int o;
      for (o = n + 1; o <= 99; o++)
	{
	  print_char((n / 10) + '0');
	  print_char((n % 10) + '0');
	  print_char(' ');
	  print_char((o / 10) + '0');
	  print_char((o % 10) + '0');
	  if (n == 98 && o == 99){
	    continue;
	  }
	    print_char(',');
	    print_char(' ');
	}
    }
}
