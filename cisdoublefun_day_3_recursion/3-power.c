/* recursive function to calculate powers */
int power(int x, int y) {

	/* handles negative values */
	if (y < 0 || x < 0) {
		return (-1);
	}
	/* handle power of 0 */
	else if (x > 0 && y == 0) {
		return (1);
	}
	/* check for int overflow */
	else if (x > 2147483647 / power(x, y - 1)) {
		return (-1);
	}
	return x * power(x, y - 1);
}
