#include "main.h"

/**
  * _strcat - Concatenates of two strings
  * @dest: Destination string
  * @src: Source string
  *
  * Return: concatination in dest
  */
char *_strcat(char *dest, char *src)
{
	int length = 0, i;

	/* store the length of string in length */
	while (dest[length])
	{
		length++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[length] = src[i];
		length++;
	}

	dest[length] = '\0';
	return (dest);
}
