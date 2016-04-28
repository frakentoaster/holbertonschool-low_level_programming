/* Function prints alphabet in reverse */

int print_char(char c);
void print_tebahpla(void)
{
	int i;
	char letter;
	letter = 'z';
	for(i = 26; i > 0; i--)
	{
		print_char(letter);
		letter--;
	}
}
