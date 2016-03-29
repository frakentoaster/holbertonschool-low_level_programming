/* script calculates factorial of n or returns -1 for invalid values */
int i;

int factorial(int n){
  if (n == 0) {
    return 1;
  }
  /* if negative or above max int size return -1 */
  else if (n < 0 || n > 2147483647) {
    return -1;
  }
  /* iterate to 0 while calculating factorial of n */
  else {
    for (i = n; i > 1; i--) {
      n *= i - 1;
    }
    return n;
  }
}
