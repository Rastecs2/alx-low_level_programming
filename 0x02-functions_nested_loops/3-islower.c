#include "main.h"

/**
 * _islower - finds the lowercase character
 *
 * c - ASCII character values
 *
 * Return: returns 1 if lowercase 0 if otherwise
 */

/* function to identify a lowercase character */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
