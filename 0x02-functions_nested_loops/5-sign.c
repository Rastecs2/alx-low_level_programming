#include "main.h"

/**
 * print_sign - this function prints the sign of a number
 *
 * @n: ASCII value characters
 *
 * Return: 1 if positive is encountered, 0 if zero and -1 if negative
 */

/* function that prints the sign of a number */
int print_sign(int n)
{
	if (n == 43)
	{
		_putchar('+');
		return(1);
	}
	else if (n == 48)
	{
		_putchar('0');
		return(0);
	}
	else if (n == 45)
	{
		_putchar('-');
		return(-1);
	}
	return(0);
}
