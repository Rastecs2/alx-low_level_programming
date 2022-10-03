#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc : arguments/ inputs to the function
 * @argv : array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	printf("\n");
	return (0);
}
