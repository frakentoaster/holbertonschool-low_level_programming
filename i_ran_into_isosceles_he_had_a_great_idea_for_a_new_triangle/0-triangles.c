#include <stdio.h>

void triangles_in_the_term(int h, int n)
{
  /* Declare variables */
  int spaces, stars, row;

  /* Execute code only if height > 0 */
  if (h > 0 && n > 0)
    {
      /* Build pyramid */
      for (row = 0; row <= h-1; row++)
        {
          /* Print spaces */
          for (spaces = 0; spaces < (h-row); spaces++)
            {
              printf(" ");
            }

          /* Print asterisks */
          for (stars = 0; stars < (h*2-spaces); stars++)
            {
              printf("*");
            }

          printf("\n");
        }
    }
}
