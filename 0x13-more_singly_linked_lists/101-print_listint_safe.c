#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list
 * @head: singly linked list
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;
	long int diff;

	if (!head)
		exit(98);

	while (head)
	{
		diff = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		len++;
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (len);
}
