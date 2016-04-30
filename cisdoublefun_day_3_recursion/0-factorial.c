/* iterative function to calculate factorial */
int factorial(int n) {
	int i;
	int res;
	i = 1;

	/* handles n being 0 and INT_MAX (integer overflow) */
	if (n < 0) {
		return (-1);
	}
	else if (n == 0) {
		return (1);
	}
	else {
		res = 1;
		while (i <= n) {
			/* avoid exceeding INT_MIN value */
			if (res * i < -2147483647) {
				return (-1);
			}
			res *= i;
			i++;
		}
		return (res);
	}
}
