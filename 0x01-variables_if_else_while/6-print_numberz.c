#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program that prints all single digit numbers 0f base 10
 */

int main(void)
{
	char r = '0';
	
	while (r <= "9")
	{
		putchar(r);
		r++;
	}
	putchar("\n");
	return (0);
}