#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program to print alphabets in reverse
 */

int main(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
