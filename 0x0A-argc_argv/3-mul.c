#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc : arguments/ inputs to the function
 * @argv : array
 * Return: Always 0 (Success) and 1 (fail)
 */
int main(int argc, char *argv[])
{
	int n, i, m;

	if (argc == 3)
	{
		n = atoi(argv[1]);
		i = atoi(argv[2]);
		m = n * i;
		printf("%d\n", m);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
