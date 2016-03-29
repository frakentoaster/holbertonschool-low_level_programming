/* recursive script to calculate sq roots */
int calc_sq(int n, int c) {
  /* return sq root when found */
  if (c * c == n){
    return c;
  }
  /* -1 if not valid sq root */
  else if (c * c > n) {
    return -1;
  }
  /* call self, increasing count(c) until a prev conditional met */
  else {
    return calc_sq(n, c + 1);
  }
}
/* calls calc_sq fn passing in 1 as counter */
int square_root(int n) {
  return calc_sq(n, 1);
}
