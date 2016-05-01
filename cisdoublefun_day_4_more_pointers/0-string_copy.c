int print_char(char c);
int str_len(char * s);

/* script copies a string */
char *string_copy(char *dest, const char *src)
{
  int i;

  for (i = 0; src[i] != '\0'; i++)
  {
    dest[i] = src[i];
  }
  for ( ; i < src[i]; i++)
  {
    dest[i] = '\0';
  }
  return dest;
}
