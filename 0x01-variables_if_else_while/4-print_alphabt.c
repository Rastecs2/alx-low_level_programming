#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program to convert an alphabet to lowercase
 */

int main(void)
{
	char n = 'A';
	char l;

	while (n <= 'Z')
	{
		if (n == 'Q')
		{
			n++;
			continue;
		}
		else if (n == 'E')
		{
			n++;
			continue;
		}
		l = tolower(n);
		putchar(l);
	}
	putchar('\n');
	return (0);
}
