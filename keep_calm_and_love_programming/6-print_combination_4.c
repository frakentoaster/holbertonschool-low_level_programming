#include "my_functions.h"

void print_combination_4(void)
{
  int n;
  /* Use two loops to handle two seperate
     sets of digits up to 99 99*/
  for (n = 0; n <= 99; n++)
    {
      int o;
      for (o = n + 1; o <= 99; o++)
	{
	  /* "/ 10" to find the digit in 10s place,
	     "% 10" to find the digit in ones place,
	     and "+ '0'" outputs the ascii char */
	  print_char((n / 10) + '0');
	  print_char((n % 10) + '0');
	  print_char(' ');
	  print_char((o / 10) + '0');
	  print_char((o % 10) + '0');
	  /* Skips space and comma for last digit set(98 99) */
	  if (n == 98 && o == 99){
	    continue;
	  }
	    print_char(',');
	    print_char(' ');
	}
    }
}
