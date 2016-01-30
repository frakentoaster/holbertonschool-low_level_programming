#include<unistd.h>

int main(void)
{
  write(0, "Hello, C\n",9);
  return(0);
}
