#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: 0 || positive || negative
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* if statements to find out if n is 0, positive or negative */
	if ( n > 0)
	{
		printf (n, "%d\n is positive");
	}
	else if (n==0)
	{
	        printf (n, "%d\n is zero");
	}
	else if (n <0 )
	{
	        printf (n,"%d\n is negative");
	}
	return (0);
}
