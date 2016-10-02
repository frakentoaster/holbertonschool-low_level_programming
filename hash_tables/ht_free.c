#include "hashtable.h"
#include <stdlib.h>

/*
  Iterates through list, freeing keys, values, and nodes.
  When reaching the final node, frees that one as well.
  After freeing all nodes, frees the array and hashtable.
*/
void ht_free(HashTable *hashtable) {
  List *next_node;
  unsigned int i;
  for (i = 0; i < hashtable->size; i++) {
    while (hashtable->array[i] != NULL) {
      next_node = hashtable->array[i]->next;
      free(hashtable->array[i]->key);
      free(hashtable->array[i]->value);
      free(hashtable->array[i]);
      hashtable->array[i] = next_node;
    }
    free(hashtable->array[i]);
  }
  free(hashtable->array);
  free(hashtable);
}
