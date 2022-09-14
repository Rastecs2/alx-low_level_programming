#include "main.h"

/**
 * _isalpha - function that checks for aphabetic character
 *
 * @c: ASCII value character
 *
 * Return: 1 if value stored in c is a letter otherwise returns 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
