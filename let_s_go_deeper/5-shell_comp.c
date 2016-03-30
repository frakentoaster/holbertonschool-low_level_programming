/* Function returns 1 if strings a and b are same, otherwise 0.
It recursively increases a and b pointers.
Using ternary operator, if *a is not equal to *b then 1 is returned.
If we reach end of both strings at the same time then 1 is returned. */
int shell_comp(char *a, char *b)
{
  return ((*a==*b&&*b=='\0')||*b=='*')?1:(*a==*b)?shell_comp(++a,++b):0;
}
