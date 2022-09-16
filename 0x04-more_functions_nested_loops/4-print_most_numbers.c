#include "main.h"

/**
 * print_most_numbers - prints a range of numbers 0-9 without 2 & 4
 *
 * Return: ...
 */

void print_most_numbers(void)
{
	/* loval variable declaration*/
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == 2 && i == 4)
		{
			continue;
		}
		_putchar(i);
	}
	_putchar ('\n');
}
