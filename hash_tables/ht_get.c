#include "hashtable.h"
#include <stdio.h>

unsigned int hash(const char *key, unsigned int size);
int str_cmp(const char *str1, const char* str2);

/* Iterate until we find node key that matches the given key */
char *ht_get(HashTable *hashtable, const char *key) {
  List *node;
  unsigned int idx;
  idx = hash(key, hashtable->size);
  node = hashtable->array[idx];

  if (node != NULL) {
    while (node != NULL) {
      if (str_cmp(node->key, key)) {
        return node->value;
      }
      node = node->next;
    }
  }
  return NULL;
}
