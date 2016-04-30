#include <limits.h>

/* recursive function to calculate factorial */
int factorial(int n) {
	/* handles integer overflow (MAX & MIN) */
	if (n < 0 || n > 12) {
		return (-1);
	}
	else if (n == 0) {
		return (1);
	}
	return (n * factorial(n - 1));
}
