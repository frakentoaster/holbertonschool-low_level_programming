#include <stdlib.h>
#include "str_struct.h"

struct String *string_to_struct(char *str)
{
	struct String *new_str;
	int i;

	new_str = malloc(sizeof(struct String));
	if (new_str == NULL) {
		return NULL;
	}

	i = 0;
	while(str[i] != '\0') {
		i++;
	}

	new_str->str = str;
	new_str->length = i;
	return new_str;
}
