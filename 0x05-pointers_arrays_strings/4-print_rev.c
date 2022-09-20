#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the reverse string
 * Return: ---
 */
void print_rev(char *s)
{
	int i;

	for (i = s[-1]; i >= *s; --i)
	{
		_putchar (i);
	}
	_putchar ('\n');
}
