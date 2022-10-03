#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - adds positive numbers.
 * @argc : arguments/ inputs to the function
 * @argv : array
 * Return: Always 0 (Success) and 1 (fail)
 */
int main(int argc, char *argv[])
{
	int m;
	unsigned int n;
	unsigned int add;
	char *i;

	if (argc > 1)
	{
		for (m = 1; m < argc; m++)
		{
			i = argv[m];

			for (n = 0; n < strlen(i); n++)
			{
				if (i[n] < 48 || i[n] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(i);
			i++;
		}

		printf("%d\n", add);
	}
	else
	{
		printf("%d\n", 0);
	}

	return (0);
}
