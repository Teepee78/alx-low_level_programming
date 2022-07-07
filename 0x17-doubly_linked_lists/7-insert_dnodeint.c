#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at given position
 * @h: pointer to head of doubly linked list
 * @idx: index of the list were element should be added
 * @n: number
 * Return: address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int length = 0, i;
	dlistint_t *temp = *h, *list = *h, *new;

	if (h == NULL || *h == NULL)
		return (NULL);

	/* get length of list and check index */
	while (temp->next != NULL)
	{
		length++;
		temp = temp->next;
	}
	length++;
	if (idx > (length - 1))
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));
	/* go to index */
	for (i = 0; i < idx; i++)
		list = list->next;
	if (list->next == NULL)
		return (add_dnodeint_end(h, n));
	/* create and add node */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = list->prev;
	new->next = list;
	list->prev = new;
	list->prev->next = new;
	return (new);
}
