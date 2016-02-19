#include "my_functions.h"

void int_min(){ /* Function to handle int min */
  print_char('-');
  print_char('2');
  print_char('1');
  print_char('4');
  print_char('7');
  print_char('4');
  print_char('8');
  print_char('3');
  print_char('6');
  print_char('4');
  print_char('8');
}

int myPow(int power){ /* Function to calculate exponents */
  int i;
  int result;
  result = 1;

  for (i = 0; i < power; i++) {
    result *= 10;
  }
  return result;
}

void print_number(int n) { /* Func that outputs ascii chars */
  int len, power, num, temp;
  len = 1;
 
  if (n == -2147483648) { /* Call int_min function */
    int_min(); }
  /* Prepend "-" char and convert neg to pos */
  if (n < 0 && n !=-2147483648) {
    print_char(45); 
    n = (n * -1); 
  }
  temp = n;

  while (temp > 9){ /* Calculate length of numbers */
    len++; 
    temp /= 10;
  }
  power = len-1;

  while (power >= 0 && n !=-2147483648){ /* Print each ascii char */
    num = n / myPow(power); 
    n = n - num * myPow(power);
    print_char(num + 48); 
    power--; }
}
