#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the start node
 * @n: value int to be added
 *
 * Return: address of new element(SUCCESS), NULL(FAIL)
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* declare the new node */
	listint_t *new_node;

	/* assign it memory */
	new_node = malloc(sizeof(listint_t));
	/* make sure the new node is not empty */
	if (new_node == NULL)
		return (NULL);
	/* connet the new node with the 1st node */
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (*head);
}
