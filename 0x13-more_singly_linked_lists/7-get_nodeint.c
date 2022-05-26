#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: singly linked list
 * @index: index of the node
 * Return: the node or NULL if it doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	if (index == 0)
		return (head);

	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}

	temp = head;

	for (i = 0; temp && i < index; i++)
	{
		temp = temp->next;
	}

	return (head);
}
