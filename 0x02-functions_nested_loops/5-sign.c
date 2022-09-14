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
	if (n > 0)
	{
		_putchar(43);
		return(1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
}
