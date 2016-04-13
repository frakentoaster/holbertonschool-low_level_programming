#include <stdlib.h>

/* function that returns string given as arg */
char *string_dup(char *str) {
  char *dest;
  int i;
  i = 0;

  /* get length */
  while (str[i] != '\0') {
    i++;
  }
  dest = malloc(sizeof(char) * i);

  if (dest == NULL) {
    return (NULL);
  }

  for (i = 0; str[i] != '\0'; i++) {
    dest[i] = str[i];
  }
  dest[i] = '\0';
  return (dest);
}
