#include "main.h"

/**
 * print_numbers - prints a range of numbers 0-9
 *
 * Return: ...
 */

void print_numbers(void)
{
	/* loval variable declaration*/
	int i;
	
	i = 0;
	while (i <= 10)
	{
		_putchar (i);
		i++;
	}
	_putchar ('\n');
}
