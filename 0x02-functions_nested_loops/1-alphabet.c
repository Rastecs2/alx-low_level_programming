#include "main.h"
/**
 * print_alphabet = output/print all alphabet in lower
 *
 * Return: none
 */
/* function outputs alphabets */
void print_alphabet(void)
{
	/* declare the variables */
	int i;
	i = 'a';
	while(i <= 'z')
	{
		/*call the putchar function */
		_putchar(i);
		i++;
	}
	putchar('\n');
}
