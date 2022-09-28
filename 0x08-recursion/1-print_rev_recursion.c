#include "main.h"
/**
 * _puts_recursion - prints a string in reverse
 * @s: pointer to the string
 *
 * Return: ---
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar (*s);
	}
	else if (*s == '\0')
	{
		_putchar ('\n');
	}
}
