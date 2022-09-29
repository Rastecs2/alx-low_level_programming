#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * sqr - finds the natural square root numbers
 * @n: number to find the squire root
 * Return : squire root or -1 if not
 */
int sqr(int n, int i)
{
	int sqrn = i * i;
	if (sqrn > n)
	{
		return (-1);
	}
	if (sqrn == n)
	{
		return (sqr(n, i+1));
	}
	else
	{
		return (-1);
	}
}
int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
