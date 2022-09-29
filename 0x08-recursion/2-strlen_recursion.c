#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s : pointer to the string
 *
 * return: ----
 */
int _strlen_recursion(char *s)
{
	/* base case */
	if (*s != '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s));
}
