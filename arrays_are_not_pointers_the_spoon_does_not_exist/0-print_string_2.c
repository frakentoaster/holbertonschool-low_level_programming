int print_char(char c);

void print_string_2(char *str)
{
  while (*str >= '\n')
  {
      print_char(*str);
      str+=2;
  }
}
