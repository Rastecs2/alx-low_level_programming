#include "main.h"
/**
 * print_alphabet - this function prints alphabets
 *
 * Return: none
 */
/* function outputs alphabets */
void print_alphabet(void)
{
	/* declare the variables */
	int i;

	i = 'a';
	while (i <= 'z')
	{
		/*call the putchar function */
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
