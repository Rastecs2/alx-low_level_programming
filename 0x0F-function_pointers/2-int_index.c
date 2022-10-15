#include <stdbool.h>
#include <stddef.h>
#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @array: array pointer to int
 * @size: array size
 * @cmp: pointer for function comparison
 * Return: -1(0 elements, size <= 0)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;
	bool n;

	if (array != NULL && size > 0 && cmp != NULL)
	{
		if (size <= 0)
			return (-1);

		for (index = 0; index < size; index++)
		{
			n = cmp(array[index]);
			if (n == TRUE)
				return (index);
		}
	}

	return (-1);

}
