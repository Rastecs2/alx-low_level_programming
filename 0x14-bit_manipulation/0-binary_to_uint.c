#include "main.h"

/**
 * conv - chars to integer
 *
 * @i: conversion character
 *
 * Return: converted integer
*/
unsigned int conv(char i)
{
	return ((unsigned int) c - '0');
}

/**
 * strlen - length of a string
 *
 * @str: string input
 *
 * Return: string length
*/
unsigned int strlen(const char *str)
{
	unsigned int index = 0;

	while (str[index] != '\0')
		index++;
	return (index);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: string pointer
 *
 * Return: unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0, base2 = 1,  num = 0;

	/*if b is NULL return 0*/
	if (b == NULL)
		return (0);

	#ifdef DEBUG /*print debug statement*/
	printf("String is %s, and length is %u.\n", b, strlen(b));
	#endif

	for (index = strlen(b) - 1; index >= 0; index--)
	{
		num = conv(b[index]); /*convert char to number*/

		#ifdef DEBUG /*print debug statements*/
		printf("Number is %u, index is %i and base is %u.\n\n", num, index, base2);
		#endif

		/*if 0 or 1 return 0*/
		if (num != 0 && num != 1)
			return (0);

		result += num * base2;
		base2 *= 2;

		#ifdef DEBUG /*print debug statements*/
		printf("Result is %u.\n", result);
		#endif
	}

	return (result);

}
