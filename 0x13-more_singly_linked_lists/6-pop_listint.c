#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: the head node's data (n)
*/
int pop_listint(listint_t **head)
{
	int node;
	listint_t *save, *next;

	/*if list is empty return 0*/
	if (*head == NULL)
		return (0);

	save = *head;
	next = save->next;
	/*get element of first node*/
	node = save->n;

	/*free first node*/
	free(save);

	/*set head to second node*/
	*head = next;

	/*return element of first node*/
	return (node);
}
