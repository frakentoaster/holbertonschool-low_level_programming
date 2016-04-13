#include <stdio.h>
#include <stdlib.h>
int (*get_op_func(char c))(int, int);

int main(int ac, char **av) {
  int i;
  int a;
  int b;
  char op;
  if (ac > 1) {
    for (i = 0; i < ac; i++) {
       op = *av[2];
       a = atoi(av[3]);
       b = atoi(av[4]);
      get_op_func(op)(a,b);
    }
  }
  return 0;
}
