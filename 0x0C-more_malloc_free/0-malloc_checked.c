#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: size in bytes
 * Return: 98 status value (Termination - Fail)
*/
void *malloc_checked(unsigned int b)
{
	void *a;/* variable for a new memory location */

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
