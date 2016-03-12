#include "my_functions.h"

void print_combination_2(void)
{
  int i;

  for (i = 48; i < 58; i++) /* Outer loop to print tens place */
    {
      int j;
      /* Inner loop to print ones place */
      for (j = i + 1; j < 58; j++)
	{
          print_char(i);
          print_char(j);
	  /* Skip printing "," and space if last char (89) */
	  if (i == 56 && j == 57)
	    {}
	  else {
	    print_char(44);
	    print_char(32);
	  }
	}
    }
}
