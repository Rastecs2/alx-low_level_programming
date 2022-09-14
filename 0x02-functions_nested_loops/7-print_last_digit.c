#include "main.h"
/**
 * print_last_digit- checks and identifies the last digit
 *
 * @n: value of the digit
 *
 * Return: returns the last digit
 */

/* function to print the last digit of a number */
int print_last_digit(int n)
{
	int l_digit;

	l_digit = n % 10;
	if (l_digit < 0)
	{
		l_digit = -l_digit;
	}
	_putchar (l_digit + '0');
	return (l_digit);
}
