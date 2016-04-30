/* iterative function to calculate powers */
int power(int x, int y) {
	int i;
	int res;
	i = 1;
	res = 1;

	/* handles negative values */
	if (y < 0 || x < 0) {
		return (-1);
	}
	/* handle power of 0 */
	else if (x > 0 && y == 0) {
		return (1);
	}
	while (i <= y) {
		/* check for int overflow */
		if (res > 2147483647 / x) {
			return (-1);
		}
		res *= x;
		i++;
	}
	return(res);
}
