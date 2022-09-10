#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program to convert an alphabet to capital letter
 */

int main(void)
{
	char n = 'A';
	char z = 'a';
	char l, r;
	while (n <= 'Z')
	{
		l = tolower(n);
		putchar(l);
		n++;
	}
	while (z <= 'z')
	{
		r = toupper(z);
		putchar(r);
		z++;
	}
	putchar('\n');
	return (0);
}
