#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program to print all the numbers of base 16
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
