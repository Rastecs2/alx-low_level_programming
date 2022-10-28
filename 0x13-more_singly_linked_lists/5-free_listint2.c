#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 *
 * @head: pointer to the first node
 *
 * Return: ---
*/
void free_listint2(listint_t **head)
{
	listint_t *node, *save;

	if (head != NULL)
	{
		/* set head to the resent node */
		node = *head;
		/* iterate through each node in list */
		while ((save = node) != NULL)
		{
			/* set node as the pointer to next node */
			node = node->next;
			free(node);
		}
	}
	*head = NULL;
}
