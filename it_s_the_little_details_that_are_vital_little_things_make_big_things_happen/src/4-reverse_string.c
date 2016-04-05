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
void reverse_string(char *s)
{
  int i,length;
  char temp;
  length = str_len(s);
  
  for (i = 0; i < length/2; i++) 
    {
      temp = *(s + i);
      *(s + i) = *(s + length - 1 - i);
      *(s + length - 1 - i) = temp;
    }
}
