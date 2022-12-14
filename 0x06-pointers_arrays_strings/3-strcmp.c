#include "main.h"

/**
  * _strcmp - Compares two strings
  * @s1: String 1
  * @s2: String 2
  *
  * Return: an integer
  */
int _strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, d = 0, lim;

	while (s1[a])
	{
		a++;
	}
	while (s2[b])
	{
		b++;
	}
	if (a <= b)
	{
		lim = a;
	}
	else
	{
		lim = b;
	}
	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			d = s1[c] - s2[c];
			break;
		}

		c++;
	}

	return (d);
}
