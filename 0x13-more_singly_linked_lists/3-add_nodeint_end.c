#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the node
 *
 * @head: pointer to the first node
 * @n: value/content of the new node
 *
 * Return: address of the new element(SUCCESS), NULL(FAIL)
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* declare the new variables */
	listint_t *new_node, *save;

	/* assign memory to the new node */
	new_node = malloc(sizeof(listint_t));
	/* let it return 0 if the new node has a null value */
	if (new_node == NULL)
		return (NULL);
	/* assign the new node with value n then point it to the next node*/
	new_node->n = n;
	new_node->next = NULL;

	/* create a variable pointer to struct containing a head pointer */
	save = *head;

	/* if head is NULL place it at the head */
	if (save == NULL)
		*head = new_node;
	else
	{
		/* if head is not NULL, and next is not NULL got to last */
		while (save->next != NULL)
			save = save->next;

		/*place the new node at the end*/
		save->next = new_node;
	}

	return (*head);
}
