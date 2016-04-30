int i,temp;
/* script calculates math powers */
int power(int x, int y){
/* if negative or above max int size return -1 or exponent is 0 */
  if (y < 0 || y > 2147483647 || x < 0) {
    return -1;
  }
  else if (y == 0) {
    return 1;
  }
  else {
    /* initialize temp to value of x */
    temp = x;
		i = 1;
    /* loop exponent (y) number of times multiplying temp by value of x */
    while (i < y) {
      temp *= x;
			i++;
    }
    return temp;
  }
}
