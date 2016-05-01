#include <stdio.h>
int strings_n_compare(char *s1, const char *s, size_t n);

int main(void)
{
   char s1[] = "Hello";
   char s2[] = "World!";
	 int n = 3;
   char s3[] = "Home";
   char s4[] = "Homer!";

   printf("%d\n", strings_n_compare(s1, s2, n));
   printf("%d\n", strings_n_compare(s2, s1, n));
   printf("%d\n", strings_n_compare(s1, s1, n));
	 printf("%d\n", strings_n_compare(s3, s4, n));
   return (0);
}
