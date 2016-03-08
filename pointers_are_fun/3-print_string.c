int print_char(char c);
/* script to print string until reaching '\0' */
void print_string(char *str)
{
  int i = 0;
  while(*(str + i) != '\0') {
    print_char(*(str + i));
    i++;
  }
}
