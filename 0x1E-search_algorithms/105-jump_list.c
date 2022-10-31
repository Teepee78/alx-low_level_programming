#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Jump Search algorithm
 * @list: singly linked list of integers
 * @size: size of list
 * @value: value to search for
 * Return: pointer to first node of first element found in the list
*/
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *head = list, *prev = list;
	size_t jump, i = 0, start, next;

	if (head == NULL || size < 1)
		return (NULL);

	/* Jump Search */
	start = 0;
	jump = sqrt(size);
	while (head->index != jump)
		head = head->next;
	if (head->n >= value)
		printf("Value checked array[%lu] = [%d]\n", jump, head->n);
	for (i = jump; i < size && head->n < value; i += jump)
	{
		start = i;
		printf("Value checked array[%lu] = [%d]\n", i, head->n);
		if (head->n == value)
			return (head);
		/* Jump to next index */
		prev = head;
		next = i + jump;
		if (next > size)
			next = size - 1;
		while (head->index != next && head->next != NULL)
			head = head->next;
	}
	if (i >= size)
		i = size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", start, i);
	/* Linear search */
	for (; start <= i && start < size; start++)
	{
		printf("Value checked array[%lu] = [%d]\n", start, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}
	return (NULL);
}
