#include "main.h"

/**
 * positive_or_negative - checks if a number is positive or negative
 * @n: value to be checked
 *
 * Return: ....
 */
void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* if statements to find out if n is 0, positive or negative */
	if (i > 0)
	{
		printf(i, "%d is positive\n");
	}
	else if (n == 0)
	{
		printf(i, "%d is zero\n");
	}
	else if (n < 0)
	{
		printf(i, "%d is negative\n");
	}
	return (i);
}
