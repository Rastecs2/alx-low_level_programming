#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: prints all possible different combinations of two digits
 */

in main(void)
{
	int l, n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n < l)
		{
			putchar(n);
			putchar(l);
			if (n != '8' || (n == '8' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar("\n");
	return(0);
}
