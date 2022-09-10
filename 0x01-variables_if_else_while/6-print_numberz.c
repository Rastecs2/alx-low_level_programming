#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program that prints all single digit numbers 0f base 10
 */

int main(void)
{
	int r;

	for (r = '0'; r <= '9'; r++)
	{
		putchar(r);
	}
	putchar('\n');
	return (0);
}
