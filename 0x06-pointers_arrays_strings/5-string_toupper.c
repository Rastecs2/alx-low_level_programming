#include "main.h"

/**
  * string_toupper - Changes all lowercase letters of a string to uppercase
  * @p: lowercase string
  * Return: uppercase string
  */
char *string_toupper(char *p)
{
	int i = 0;

	while (p[i])
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] -= 32;
		}

		i++;
	}

	return (p);
}
