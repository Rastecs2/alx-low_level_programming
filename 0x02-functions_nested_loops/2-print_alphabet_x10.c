#include "main.h"

/**
 * main -this function prints alphabets in rows of 10
 *
 * Return: void
 */

/*function to print x10 alphabets */
void print_alphabet_x10(void)
{
	/*local variable declaration */
	int i;

	i = 0;
	/* while loop to print 10 lines */
	while(i <= 10)
	{
		/* local variable declaration */
		int n;

		n = 'a';
		/*while loop to print alphabet */
		while(n <= 'z')
		{
			_putchar(n);
			n++;
		}
		
		_putchar('\n');
		i++;
	}
