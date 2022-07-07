#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at index
 * @head: head of doubly linked lits
 * @index: index of node
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int length, i;
	dlistint_t *temp = head;

	/* get length of list */
	while (temp->next != NULL)
	{
		length++;
		temp = temp->next;
	}
	length++;

	if (index > (length - 1))
		return (NULL);

	/* iterate till element */
	for (i = 0; i < index; i++)
		head = head->next;

	return (head);
}
