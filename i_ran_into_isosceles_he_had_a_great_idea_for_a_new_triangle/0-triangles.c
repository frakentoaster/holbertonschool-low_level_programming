#include <stdio.h>

void triangles_in_the_term(int h, int n)
{
  /* Declare variables */
  int spaces, stars, row, i;

  /* Execute code only if height > 0 */
  if (h > 0 && n > 0)
    {
      for (i = 0; i < n; i++)
	{
	  /* Build pyramid */
	  for (row = 0; row <= h-1; row++)
	    {
	      /* Print spaces */
	      for (spaces = 0; spaces < (h-row-1); spaces++)
		{ 
		  printf(" ");
		}
	      
	      /* Print asterisks */
	      for (stars = 1; stars < (h-spaces)*2; stars++)
		{
		  printf("*");
		}
	      
	      printf("\n");
	    }
	}
    }
}
