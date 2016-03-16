int print_char(char c);

char *concat_strings(char *dest, const char *src)
{
  char *rdest = dest;
  while(*dest)
    dest++;
  while(*src)
  {
    *dest = *src;
    src++;
    dest++;
  }
  return rdest;
}
