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
	r = ('0');
	
	while (r < 10)
	{
		putchar(r);
		r++;
	}
	return (0);
}
