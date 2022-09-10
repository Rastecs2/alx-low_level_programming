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
	char l, r;
	
	while (n <= 'Z')
	{
		l = tolower(n);
		r = toupper(n);
		putchar(l);
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
