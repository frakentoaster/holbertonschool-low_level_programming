/* This file will call function print_tebahpla
*  which will write the alphabet to stdout
*/
/* We include the print_char function for print_tebahpla */
int print_char(char c);

/* This function prints the alphabet in reverse without new line */
void print_tebahpla(void)
{
        int i;
        char letter;
        letter = 'z';
        for(i=0; i < 26; i++)
        {
                print_char(letter);
                letter--;
        }
}




