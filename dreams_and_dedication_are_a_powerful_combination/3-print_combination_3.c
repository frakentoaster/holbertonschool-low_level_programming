#include "my_functions.h"

void print_combination_3(void)
{
  int h;
  for (h = 48; h < 58; h++)/* Outer loop to print 100s place */
    {
      int i;
      for (i = h + 1; i < 58; i++) /* Middle loop to print tens place */
	{
	  int j;
	  /* Inner loop to print ones place */
	  for (j = i + 1; j < 58; j++)
	    {
		print_char(h);
		print_char(i);
		print_char(j);
		/* Skip printing "," and space if last char (789) */
		if (h == 55 && i == 56 && j == 57) {}
		else {
		  print_char(44);
		  print_char(32);
		}
	    }
	}
    }
}
