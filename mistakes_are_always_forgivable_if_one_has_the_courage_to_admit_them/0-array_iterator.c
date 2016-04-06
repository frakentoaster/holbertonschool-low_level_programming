/* function prints each element of array */
void array_iterator(int *array, int size, void (*action_func)(int)) {
  int i;
/* iterate through length of array, calling func with given arr w/ index i */
  for (i = 0; i < size; i++) {
    action_func(array[i]);
  }
}
