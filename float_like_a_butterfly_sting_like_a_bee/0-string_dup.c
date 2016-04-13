#include <stdlib.h>
char *string_dup(char *str) {

  char *dest;
  int i;
  dest = 
  str = malloc(sizeof(*str) * 3);
  if (str == NULL) {
    return NULL;
  }
  for (i = 0; str[i] != '\0'; i++) {
    dest[i] = str[i];
  }
  dest[i] = '\0';

  return dest;

}
