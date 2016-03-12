char lowercase(char c)
{
  /* If char is within range of uppercase on ascii table */
  if (c < 91 && c > 64)
    {
      c = (c + 32); /* convert to lower in ascii table */
    }
  return c;
}
