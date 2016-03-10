int print_char(char c);

void print_array(int *a, int n)
{
  int i;
  for (i = 0; i <= n; i++)
  {
    print_char(a[i]);
  }
}
