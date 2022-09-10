#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: print all possible different combinations of three digits
 */

int main(void)
{
	int n, l, k;

	for (n = '0'; n <= '9'; n++)
	{
		for (l = '0'; l <= '9'; l++)
		{
			for (r = '0'; r <= '9'; r++)
			{
				if (n < l && l < r)
				{
					putchar(n);
					putchar(l);
					putchar(r);

					if (n != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
