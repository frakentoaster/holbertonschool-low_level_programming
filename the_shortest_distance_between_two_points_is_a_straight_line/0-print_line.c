int print_char(char c);

int i;
void print_line(int n)
{
  /* prints new line char if n <= 0 */
  if (n <= 0)
  {
    print_char(10);
  }
  else
  {
    /* print "_" for every index less than n
    and end with a new line */
    for (i = 0; i < n; i++)
    {
      print_char(95);
    }
    print_char(10);
  }
}
