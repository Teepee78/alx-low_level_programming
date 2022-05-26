#include "lists.h"

/**
 * free_listint2 - frees  a linked list
 * @head: singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while ((temp = *head) != NULL)
	{
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
