#include "main.h"
/**
 * rev_string - function prints reverse strings
 *
 * return ---
 */
void rev_string(char *s)
{
	int i;
	int norm;
	int rev;

	norm = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		norm++;
	}
	for (rev = (norm - 1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar ('\n');
}
