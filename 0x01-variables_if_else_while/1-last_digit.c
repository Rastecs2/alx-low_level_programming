#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: value is less than 6, grater than 5 and equal to zero
 */
int main(void)
{
	int n, l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if statements to find out if the last digit of n is >5, ==0, <6 */
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	else if (l < 6 && l != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}

