int print_char(char c);

char *concat_strings(char *dest, const char *src)
{
  char *rdest = dest;
  /* iterate to end of dest */
  while(*dest)
    dest++;
  while(*src)
  {
    /* append location to dest */
    *dest = *src;
    src++;
    dest++;
  }
  return rdest;
}
