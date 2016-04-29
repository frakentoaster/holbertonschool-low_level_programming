/* iterative function to calculate factorial */
int factorial(int n) {
	int i;
	int res;
	i = 1;

	if (n < 0) {
		return (-1);
	}
	else if (n == 0) {
		return (1);
	}
	else {
		res = 1;
		while (i < n) {
			res *= i;
			i++;
		}
		return (res);
	}
}
