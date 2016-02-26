/* This file will call function print_char 
   which will write the given char to stdout. */


/* We include the print_char function for print_z. */
int print_char(char c);

/* This function printz "z" followed by new line. */
void print_z(void)
{
	print_char('z');
        print_char('\n');
}
