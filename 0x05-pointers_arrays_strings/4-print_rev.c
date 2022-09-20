#include "main.h"
/**
 * print_rev - prints a string in reverse
 * norm represents the sring and rev the reverse of the string
 * @s: the reverse string
 * Return: ---
 */
void print_rev(char *s)
{
	int i;
	int norm;
	int rev;

	for (i = 0; s[i] != '\0'; i++)
	{
		norm++;
	}
	for (rev = (norm - 1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar ('\n');
}
