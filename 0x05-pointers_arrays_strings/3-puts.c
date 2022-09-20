#include "main.h"
/**
 * _puts - prints a string
 * @str: string to be printed
 * Return: ---
 */
void _puts(char *str)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
	return (0);
}
