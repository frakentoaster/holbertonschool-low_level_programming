/* This file will call function print_base16
*  which will write base_16 to stdout
*/

/* We include the print_char function for print_alphabet */
int print_char(char c);

/* This function prints base16 without new line. */
void print_base16(void)
{
        int i;
        int base;
        base = 48;
        for(i=0; i < 10; i++)
        {
		print_char(base);
		base++;
        }
	base = 65;
	for(i=0; i < 8; i++)
	{
		print_char(base);
		base++;
	}
}





