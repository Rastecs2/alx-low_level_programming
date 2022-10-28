#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer to node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	/* size pointer */
	size_t nodes_count = 1;

	/* if h equals null return 0 */
	if (h == NULL)
		return (0);
	
	/* if h is not null then print the values in nodes */
	while (h->next != NULL)
	{
		/* print the value of first node */
		printf("%d\n", h->n);
		/* traverse to the next node */
		h = h->next;
		/* keep count on the number of nodes */
		nodes_count++;
	}
	/* print the final/last node */
	printf("%d\n", h->n);

	/* return the number of nodes */
	return (nodes_count);
}
