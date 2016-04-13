#include <stdlib.h>

/*concatenates a string and n chars of a second string*/
char *string_nconcat(char *s1, char *s2, int n) {
  int i,j,k,l;
	i,j = 0;
  char *dest;

  while (s1[i] != '\0') {
    i++;
  }

  while (s2[j] != '\0') {
    j++;
  }
  dest = malloc((sizeof(char)) * (i + n));

	if (dest == NULL) {
    return NULL;
  }

	for (k = 0 ; k < i ; k++){
  	dest[k] = s1[k];
  }

	for (l = 0 ; l < n ; l++){
  	dest[i + l] = s2[l];
  }
  return(dest);
}
