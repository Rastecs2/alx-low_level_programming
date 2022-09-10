#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: program that prints all possible combinations of single-digit numbers
 */

int main (void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);

		if (n != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return 0;
}
