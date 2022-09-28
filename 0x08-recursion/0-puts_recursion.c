#include "main.h"
/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to the string
 *
 * Return: ---
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar (*s);
		return (_puts_recursion (s + 1));
	}
	_putchar ('\n');
}
