int print_char(char c);

/* Prints "P", "N", "Z" if a given integer is positive, negative or 0 */
void positive_or_not(int n) {
	if (n == 0) {
		print_char('Z');
	}
	else if (n > 0) {
		print_char('P');
	}
	else {
		print_char('N');
	}
}
