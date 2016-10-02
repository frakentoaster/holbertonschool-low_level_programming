#include "hashtable.h"
#include <stdlib.h>
#include <string.h>

/* Compares two strings */
int str_cmp(const char *str1, const char* str2)
{
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            return 0;
        }
    }
    if (str1[i] != str2[i]) {
        return 0;
    }
    return 1;
}

/* Adds an element to a HashTable */
int ht_put(HashTable *hashtable, const char *key, const char *value) {
  List *node;
  unsigned int idx;
  /* Get the 'index corresponding' to the key */
  idx = hash(key, hashtable->size);
  node = hashtable->array[idx];

  /*
    Iterate through list checking for duplicate keys, incrementing
    node as we go along.
  */
  if (node != NULL) {
    while (node != NULL) {
      if (str_cmp(node->key, key)) {
        break;
      }
      node = node->next;
    }
  }
  /*
    1. Check if node already exists and free allocated space.
    2. Update existing node's value.
    3. If doesn't exist, allocate memory for node.
    4. Set corresponding key, value pairs.
    5. Check for issues with malloc or key, val pairs.
    6. Free allocated space if step 4 fails and return 1.
    7. All the above passes, we set value for node->next.
    8. Set the node as the new head node.
  */
  if (node != NULL) {
    free(node->value);
    node->value = strdup(value);
  } else {
    node = malloc(sizeof(List));
    node->key = strdup(key);
    node->value = strdup(value);
    if ((node == NULL) || (node->key == NULL) || (node->value == NULL)) {
      free(node->key);
      free(node->value);
      free(node);
      return 1;
    } else {
      node->next = hashtable->array[idx];
      hashtable->array[idx] = node;
    }
  }
  return 0;
}
