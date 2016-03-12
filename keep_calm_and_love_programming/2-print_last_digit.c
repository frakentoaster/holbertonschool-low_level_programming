#include "my_functions.h"

void print_last_digit(int n)
{
  /* If negative int, convert to positive */
  if (n < 0) 
    {
      n = (n * -1);
    }
  /* If int is 10 and above, 
     get remainder(last digit) */
  if (n > 9)
    {
      n = (n % 10);
    }
  /* Print char using ascii table */
  print_char(n + 48);
}
