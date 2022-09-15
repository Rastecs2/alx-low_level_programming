#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: the value to be checked
 * Returns: 1(is a digit), 0(is not)
 */

int _isdigit(int c)
{
	if (c >= 49 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
