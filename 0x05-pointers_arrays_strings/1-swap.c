#include "main.h"
/**
 * swap_int - swaps values of two integers
 *
 * @a: first value to swap
 * @b: second value to swap
 *
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int ch;

	ch = *a;
	*a = *b;
	*b = ch;
}
