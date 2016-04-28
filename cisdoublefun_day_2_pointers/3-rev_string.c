/* finds length of string */
int str_len(char *str)
{
  int c = 0;
  while(*(str+c))
    {
      c++;
    }
  return c;
}

/* reverses string outputting result */
void *rev_string(char *s)
{
  int i,length;
  char temp;
  length = str_len(s);
  i = 0;

  while (i < length/2)
    {
      temp = *(s + i);
      *(s + i) = *(s + length - 1 - i);
      *(s + length - 1 - i) = temp;
      i++;
    }
  return s;
}
