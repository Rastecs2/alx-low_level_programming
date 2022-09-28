#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: ---
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		_putchar (*s);
		_puts_recursion (s + 1);
		break;
	}
	_putchar('\n');
}
