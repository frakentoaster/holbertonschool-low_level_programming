int advanced_search(int *array, int size, int (*check_func)(int)) {
  int i;
/* iterate through length of array, calling func with given arr w/ index i */
  for (i = 0; i < size; i++) {
  /* check if array element i is equivalent to value passed via check_func */
    if (check_func(array[i]) == 1) {
      return 1;
    }
  }
  return -1;
}
