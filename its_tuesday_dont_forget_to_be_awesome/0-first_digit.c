int first_digit(int n)
{
  long int m;
  m = n;
    if (m < 0) {
	m = (m * -1);
      }
    while (m >= 10) {
      m /= 10;
    }
  return m;
}
