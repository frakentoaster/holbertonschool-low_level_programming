#include "my_functions.h"

void print_last_digit(int n)
{
  if (n < 0)
    {
      n = (n * -1);
    }
  if (n > 9)
    {
      n = (n % 10);
    }
  print_char(n + 48);
}
