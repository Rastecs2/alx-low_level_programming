#include "function_pointers.h"
/**
 * print_name - function that prints a name
 *
 * @name: name input
 * @f: function pointer
 * Return: ---
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}