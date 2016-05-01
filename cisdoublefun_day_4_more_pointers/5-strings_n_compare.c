#include <stdlib.h>
/* compares n chars of two strings */
int strings_n_compare(char *s1, const char *s, size_t n) {
	size_t i;
	i = 0;

	while (*s1 && *s && *s1 == *s && i < n) {
		++s1; ++s;
		i++;
	}
  return *s1 - *s;
}
