#include "my_functions.h"
/* Function iterates 1-100 looking for multiples of 3 and 5 */
int main() {
  int i;
  for (i = 1; i < 101; i++){
    if (i % 3 == 0 && i % 5 == 0){ /* Checks for mult of 3 & 5*/
      printf("FizzBuzz "); /* Prints "FizzBuzz" if found */
	}
    else if (i % 3 == 0){ /* Checks for just mult of 3 */
	  printf("Fizz ");
	}
    else if (i % 5 == 0){ /* Checks for just mult of 5 */
	  printf("Buzz");
	  if (i != 100){ /* If last number, skips adding space */
              printf(" ");
            }
	}
    else{ /* Prints each decimal not mult of 3 or 5 */
	printf("%d ", i);
	}
    }
  return 0;
}
