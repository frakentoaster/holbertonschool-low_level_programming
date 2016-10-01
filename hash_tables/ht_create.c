#include <stdlib.h>
#include "hashtable.h"

HashTable *ht_create(unsigned int size) {
	/* Initialize */
	HashTable *ht_new;
	unsigned int i;

	/* NULL if invalid table size */
	if (size < 1)
		return NULL;

	/* Allocate memory for table structure */
	if ((ht_new = malloc(sizeof(HashTable))) == NULL)
		return NULL;

	/* Allocate memory for list */
	ht_new->array = malloc(sizeof(List *) * size);
	if (ht_new->array == NULL) {
		return NULL;
	} else {
		for (i = 0; i < size; i++) {
			ht_new->array[i] = NULL;
		}
	}
	/* Set table size */
	ht_new->size = size;
	return ht_new;
}
