#include "main.h"
/**
  * _strchr - locate a character in a string
  * @s: The string
  * @c: The character to find
  *
  * Return: the string from character found
  */

char *_strchr(char *s, char c)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
