#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		exit(EXIT_SUCCESS);

	while (head->next != NULL)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
