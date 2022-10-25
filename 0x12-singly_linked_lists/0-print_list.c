#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 *
 * @h: pointer to head first node
 * Return: Number of nodes
*/

size_t print_list(const list_t *h)
{
	size_t node_num = 1;

	/*return 0 if h points to NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);

		/*point to the next node*/
		h = h->next;
		/*count number of nodes*/
		node_num += 1;
	}

	/*outputs the last node*/
	printf("[%d] %s\n", h->len, h->str);

	return (node_num);
}
