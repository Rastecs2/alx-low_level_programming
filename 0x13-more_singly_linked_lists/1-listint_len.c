#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 *
 * @h: pointer to node
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	/* size pointer */
	size_t node_count = 1;

	/* if h equals null return 0 */
	if (h == NULL)
		return (0);

	/* if h is not null then note the number of nodes */
	while (h->next != NULL)
	{
		/* traverse to the next node */
		h = h->next;
		/* keep count on the number of nodes */
		node_count++;
	}

	/* return the number of nodes */
	return (node_count);
}
