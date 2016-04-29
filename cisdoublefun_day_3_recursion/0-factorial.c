/* recursive function to calculate factorial */
int factorial(int n) {
	/* handle negative & INT_MAX/MIN edge cases */
	if (n < 0 || n > 2147483647) {
		return (-1);
	}
	else if (n == 0) {
		return (1);
	}
	else {
		return (n * factorial(n - 1));
	}
}
