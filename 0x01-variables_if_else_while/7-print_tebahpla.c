#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program to print alphabets in reverse
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
