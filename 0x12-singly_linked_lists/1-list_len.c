#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 *
 * @h: pointer to the first node
 * Return: number of elements
*/

size_t list_len(const list_t *h)
{
	size_t node_num = 1;

	/* return 0 if h points to nothing */
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		/*go to the next node*/
		h = h->next;
		/*count node*/
		node_num++;
	}

	return (node_num);
}
