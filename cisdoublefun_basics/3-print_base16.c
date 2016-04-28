
/* Prints base16 0-F */
int print_char(char c);
void print_base16(void) {
  int i;
  int base;

  base = 48;
  for(i=0; i < 10; i++) {
		print_char(base);
		base++;
  }

	base = 65;
	for(i=0; i < 6; i++) {
		print_char(base);
		base++;
	}
}
