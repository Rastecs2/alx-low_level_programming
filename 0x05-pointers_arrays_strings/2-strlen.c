#include "main.h"
/**
 * _strlen- gives the length of a string
 *
 * @s: the variable with the string
 *
 * Return: returns the number of characters i
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
		;
	return (i);
}
