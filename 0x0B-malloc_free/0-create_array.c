#include "main.h"
#include <stdlib.h>

/**
  * create_array - creates an array of chars initializes it with a specific char
  * @size: size of the array
  * @c: character to fill in the array
  *
  * Return: array
  */
char *create_array(unsigned int size, char c)
{
	unsigned int n;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		s[n] = c;
	}

	return (s);
}
