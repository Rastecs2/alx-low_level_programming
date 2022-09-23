#include "main.h"

/**
  * _strncat - Concatenate two strings
  * @dest: Destination string
  * @src: Source string
  * @n: not null
  *
  * Return: concatination dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int length = 0, j = 0;

	while (dest[length])
	{
		length++;
	}

	while (j < n && src[j])
	{
		dest[length] = src[j];
		length++;
		j++;
	}

	dest[length + n + 1] = '\0';

	return (dest);
}
