#include <stdio.h>
#include "main.h"
/**
  * print_diagsums - prints a square matrix of integers
  * @a: The matrix
  * @size: The size of the matrix
  *
  * Return: ---
  */
void print_diagsums(int *a, int size)
{
	int i sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[(size + 1) * b];
		sum2 += a[(size - 1) * (b + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
