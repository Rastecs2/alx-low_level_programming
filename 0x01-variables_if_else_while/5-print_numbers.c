#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program that prints all single digit numbers 0f base 10
 */

int main(void)
{
	int r = 0;

	while (r < 10)
	{
		printf("%d", r);
		r++;
	}
	printf("\n");
	return (0);
}
