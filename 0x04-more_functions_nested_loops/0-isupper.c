#include "main.h"

/**
 * _isupper - checks for uppercase character
 *
 * Returns: 1(upper), 0(lower)
 */
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
