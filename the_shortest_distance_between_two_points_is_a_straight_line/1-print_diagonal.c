int print_char(char c);

int i,j;
void print_diagonal(int n)
{
  /* prints new line char if n <= 0 */
  if (n <= 0)
  {
    print_char(10);
  }
  else
  {
    /* print "\" for every index less than n
    and end with a new line */
    for (i = 0; i < n; i++)
    {
      /* print empty space for every index less than i */
      for (j = 0; j < i; j++)
      {
        print_char(32);
      }
      print_char(92);
      print_char(10);
    }
  }
}
