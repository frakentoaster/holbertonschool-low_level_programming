int print_char(char c);

void print_string_half(char *str)
{
  int c = 0;
  int i;
  /* finds length of string */
  while (*(str + c)){
    c++;
  } /* starting after first half */
  for (i = (c - 1) / 2 + 1; i <= c; i++)
  {
    print_char(str[i]);
  }
}
