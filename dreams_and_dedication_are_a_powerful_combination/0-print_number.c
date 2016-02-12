#include "my_functions.h"

int myPow(int power)
{
  int i;
  int result;
  result = 1;

  for (i = 0; i < power; i++)
  {
    result *= 10;
  }
  return result;
}

void print_number(int n)
{
  int len;
  int power;
  int num;
  int temp;

  len = 1;
  if (n < 0)
  {
      print_char(45);
      n = (n * -1);
  }
  temp = n;

  while (temp > 9)
  {
      len++; 
      temp /= 10;
  }
  power = len-1;

  while (power >= 0)
  {
    num = n / myPow(power);
    n = n - num * myPow(power);
    print_char(num + 48);
    power--;
  }
}
