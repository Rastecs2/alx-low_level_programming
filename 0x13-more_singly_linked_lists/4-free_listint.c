#include "lists.h"

/**
 * free_listint - free the linked list
 *
 * @head: pointer to the first node
 *
 * Return: ---
*/
void free_listint(listint_t *head)
{
	listint_t *node;

	/* iterate through each node in list */
	while ((node = head) != NULL)
	{
		/* set head as the pointer to next node */
		head = head->next;
		free(node);
	}
}
