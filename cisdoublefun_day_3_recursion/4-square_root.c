/* iterative function to calculate sq roots */
int calc_sq(int n, int c) {
	while (c <= n / 2) {
	  /* return sq root when found */
	  if (c * c == n) {
	    return c;
	  }
		c++;
	}
	return (-1);
}
/* calls calc_sq fn passing in 1 as counter */
int square_root(int n) {
  return calc_sq(n, 1);
}
