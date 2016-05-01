int print_char(char c);
int str_len(char * s);

/* script copies a string */
char *string_copy(char *dest, const char *src)
{
  int i;
	i = 0;

  while (src[i] != '\0')
  {
    dest[i] = src[i];
		i++;
  }
  while (i < src[i])
  {
    dest[i] = '\0';
		i++;
  }
  return dest;
}
