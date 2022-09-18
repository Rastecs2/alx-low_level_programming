#include "main.h"
/**
 * more_numbers - prints 10 times numbers from 0 to 14
 *
 * Return: ....
 */

void more_numbers(void)
{
	int i;
	int j;
	int k;

	for (k = 1; k <= 10; k++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar('i');
		}
		for (j = '0'; j <= '4'; j++)
		{
			_putchar('1');
			_putchar(j);
		}
	}
}
