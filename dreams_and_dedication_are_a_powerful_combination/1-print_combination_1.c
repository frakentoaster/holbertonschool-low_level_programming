#include "my_functions.h"

void print_combination_1(void)
{
  int i;
  /* Iterate through and print ascii 0 - 9 */
  for (i = 48; i < 58; i++)
    {
      print_char(i);
      /* Do not print "," or space after last char(9) */
      if (i != 57)
	{
	  print_char(44);
	  print_char(32);
	}
    }
}
