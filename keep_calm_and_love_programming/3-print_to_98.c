#include <stdio.h>

void print_to_98(int n)
{
  /* If integer less than 98,
   increase until reach 98 */
  while (n < 98)
    {
      printf("%d, ",n);
      n++;
    }
  /* If integer greater than 98
   decrease until reach 98 */
  while (n > 98)
    {
      printf("%d, ",n);
      n--;
    }
  /* Handles edge case if int is 98 */
  printf("%d\n",n);
}
