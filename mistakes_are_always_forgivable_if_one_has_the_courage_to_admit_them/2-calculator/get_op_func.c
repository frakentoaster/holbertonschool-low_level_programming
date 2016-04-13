#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


int (*get_op_func(char c))(int, int){
  int a;
  int b;
  if ((c) == ('+')) {
    op_add(a, b);
  }
  else if ((c)  == ('-')) {
    op_sub(a, b);
  }
  else if ((c)  == ('*')) {
    op_mul(a, b);
  }
  else if ((c)  == ('/')) {
    op_div(a, b);
  }
  else if ((c)  == ('%')) {
    op_mod(a, b);
  }
  return NULL;
}
