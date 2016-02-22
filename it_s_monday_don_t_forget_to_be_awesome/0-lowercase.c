char lowercase(char c)
{
  /* If char is within range of lowercase on ascii table */
  if (c < 91 && c > 64)
    {
      c = (c + 32); /* conver to cap in ascii table */
    }
  return c;
}
