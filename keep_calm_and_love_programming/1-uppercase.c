char uppercase(char c)
{
  if (c < 123 && c > 96)
    {
      c = (c - 32);
    }
  return c;
}
