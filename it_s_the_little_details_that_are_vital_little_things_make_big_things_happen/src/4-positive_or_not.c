/* This file will call function positive_or_not
*  which will write P,N or Z if number
*  is positive, negative or zero respectively.
*/

/* We include the print_char function for this function */
int print_char(char c);

/* This function prints PZN with new line. */
void positive_or_not(int n)
{
        if (n > 0)
	{
		print_char('P');
	}
	else if (n < 0)
	{
		print_char('N');
	}
	else
	{
		print_char('Z');
	}
}



