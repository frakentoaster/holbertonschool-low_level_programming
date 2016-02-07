/* This file will call function print_alphabet 
* which will write the alphabet to stdout
*/
/* We include the print_char function for print_alphabet */
int print_char(char c);

/* This function prints the alphabet without new line. */
void print_alphabet(void)
{
	int x;
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	for(x = 0; x < 27; x++)
	{
		print_char(alpha[x]);
	}
}
