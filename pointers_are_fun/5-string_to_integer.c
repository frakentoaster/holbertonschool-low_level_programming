#include <limits.h>
/* finds numbers in strings */
int string_to_integer(char *s) {
  int i,j;
  long k;
  i = 0;
  j = 1;
  k = 0;
 
  while (*(s + i) != '\0' ) {
    int l = *(s + i) + 0;
    int m = *(s + i + 1) + 0;

    if (l == 45) {
      j *= (-1);
    }
    if (l > 47 && l < 58) {
      int t = l - '0' ;
      k =  k + t ;
      if ((k > 2147483647 && j == 1) || (k > 2147483648 && j == -1)){
        return 0 ;
      }
      if (m < 47 || m > 58) {
	break;
      }
      k *= 10;
    }
    i += 1;
  }
  return k * j;
}
