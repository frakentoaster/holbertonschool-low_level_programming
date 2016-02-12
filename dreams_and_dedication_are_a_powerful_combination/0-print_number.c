#include "my_functions.h"
#include <stdio.h>

int myPow(int power)
{
  int result;
  int i;

  for (i = 0; i < power; i++)
  {
    result *= 10;
  }
  return result;
}

void print_number(int n)
{
  int len = 1;
  int p;
  int x;
  p = len-1;

  if (n < 0)
    {
      print_char(45);
      n = (n*-1);
    }
  
  while (n > 9)
    {
      len++;
      n/=10;
    }
  
  while (p >= 0)
    {
      x = n / myPow(p);
      n = n - x * myPow(p);
      print_char(x + 48);
      p--;
    }
}
