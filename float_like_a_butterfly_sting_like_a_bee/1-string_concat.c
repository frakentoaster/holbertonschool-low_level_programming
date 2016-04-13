#include <stdlib.h>

/* string concat function */
char *string_concat(char *s1, char *s2)
{
  int i,j,k,l;
	i,j = 0;
  char *dest;

  while (s1[i] != '\0') {
    i++;
  }

  while (s2[j] != '\0') {
    j++;
  }
  dest = malloc((sizeof(char)) * (i + j));

	if (dest == NULL) {
    return NULL;
  }

  for (k = 0; k < i; k++) {
  	dest[k] = s1[k];
  }

  for (l = 0 ; l < j; l++) {
  	dest[i + l] = s2[l];
  }

  return dest;
}
