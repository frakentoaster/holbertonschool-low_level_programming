char uppercase(char c)
{
  /* If char is within range of lowercase on ascii table */
  if (c < 123 && c > 96)
    {
      c = (c - 32); /* conver to cap in ascii table */ 
    }
  return c;
}
