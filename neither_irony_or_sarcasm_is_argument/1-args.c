#include <stdio.h>
/* function prints all command line arguments */
int main (int ac, char **av) {
  int i;

  if (ac > 1) {
    for (i = 1; i < ac; i++) {
      printf("%s\n", av[i]);
    }
  }
  return 0;
}
