
/* Function returns 1 if strings a and b are same, otherwise 0.
It recursively increases a and b pointers.
Using ternary operator, if *a is not equal to *b then 1 is returned.
If we reach end of both strings at the same time then 1 is returned. */
int shell_comp(char *a, char *b)
{
  if ((*b == '*' && *b + 1 == '*') || (*a == *b + 1)) {
      return shell_comp(a, ++b);
  }
  if (*a != '\0' && *b == '\0'){
    return shell_comp(++a, b);
  }
  if ((*a == *b && *b == '\0') || *b == '*'){
    return 1;
  }
  if (*a == *b) {
    return shell_comp(++a,++b);
  }
  return 0;
}
