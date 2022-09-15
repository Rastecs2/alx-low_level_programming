#include "main.h"

/**
 * _isupper - checks for uppercase character
 *@c: the value/alphabet to be checked
 * Return: 1(upper), 0(lower)
 */
/* function to check for uppercase characters */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
