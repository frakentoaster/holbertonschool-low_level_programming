/* Function prints alphabet */

int print_char(char c);

void print_alphabet(void)
{
	int i;
	char letter;
	letter = 'a';
	for(i = 0; i < 26; i++)
	{
		print_char(letter);
		letter++;
	}
}
