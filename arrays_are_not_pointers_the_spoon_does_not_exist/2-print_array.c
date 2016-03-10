int print_char(char c);
void print_number(int n);

 /* print_array takes an array and prints each element */
void print_array(int *a, int n)
{
  int i;

  for (i = 0; i < n; i++) {
    print_number(a[i]);

    if (i != n-1) {
      print_char(',');
      print_char(' ');
    }
    
    else {
      print_char('\n');
    }
  }
}

void int_min() { /* int_min to handle int min */
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

int my_pow(int power) { /* my_pow to calculate exponents */
  int i;
  int result;
  result = 1;

  for (i = 0; i < power; i++) {
    result *= 10;
  }
  return result;
}

void print_number(int n) { /* print_number outputs ascii chars */
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
    num = n / my_pow(power);
    n = n - num * my_pow(power);
    print_char(num + 48);
    power--; }
}
