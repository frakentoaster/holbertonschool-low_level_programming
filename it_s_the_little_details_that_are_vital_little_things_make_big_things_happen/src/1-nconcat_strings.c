int print_char(char c);
int str_len(char * s);

/* concatenates two strings */
char *nconcat_strings(char *dest, const char *src, int n)
{
  int dest_len = str_len(dest);
  int i;
  /* loop til end adding each location to dest */
  for (i = 0; i < n && src[i] != '\0'; i++)
  {
    dest[dest_len + i] = src[i];
  }
  dest[dest_len + i] = '\0';

  return dest;
}

int str_len(char * s)
{
  int len = 0;
  while(*s != 0)
  {
    s++;
    len++;
  }
  return len;
}
