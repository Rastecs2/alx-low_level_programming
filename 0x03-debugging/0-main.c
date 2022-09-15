#include "main.h"

/**
 * positive_or_negative - checks if a number is positive or negative
 * @n: value to be checked
 *
 * Return: ....
 */
void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if statements to find out if n is 0, positive or negative */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
