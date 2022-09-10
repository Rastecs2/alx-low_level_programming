#include<stdio.h>
#include<ctype.h>
/**
 * main - Entry point
 *
 * Return: program that prints all possible combinations of two two-digit numbers
 */
int main(void)
{
	int n, l, r, j;

	for (n = 48; n <= 57; n++)
	{
		for (l = 48; l <= 57; l++)
		{
			for (r = 48; r <= 57; r++)
			{
				for (j = 48; j <= 57; j++)
				{
					if (((r + j) > (n + i) &&  r >= n) || n < r)
					{
						putchar(n);
						putchar(l);
						putchar(' ');
						putchar(r);
						putchar(j);

					if (n + l + r + j == 227 && n == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
