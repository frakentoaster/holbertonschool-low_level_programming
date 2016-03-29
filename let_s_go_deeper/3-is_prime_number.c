/* recursive function to calculate prime numbers */
int is_prime(int n, int c) {
  /* 0 if n is not prime */
  if (n <= 1 || n % c == 0) {
    return 0;
  }
  /* 1 if c is prime */
  else if (c > n / 2) {
    return 1;
  }
  /* call self, increasing count(c) until a prev conditional met */
  else {
    return is_prime(n, c + 1);
  }
}
/* calls is_prime fn passing in 2 as counter */
int is_prime_number(int n) {
  return is_prime(n, 2);
}
