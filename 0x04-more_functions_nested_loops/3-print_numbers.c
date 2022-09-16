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

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar ('\n');
}
