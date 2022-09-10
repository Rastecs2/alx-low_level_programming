#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program to convert an alphabet to capital letter
 */

int main(void)
{

	int n = 'A';
	int l;

	while (n <= 'Z')
	{
		l = tolower(n);
		putchar(l);
		n++;
	}
	return (0);
}
