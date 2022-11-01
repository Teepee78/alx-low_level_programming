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
	size_t jump, i, jumpi;
	listint_t *prev, *current;

	if (list == NULL)
		return (NULL);
	jump = sqrt(size);
	jumpi = 0;
	current = list;
	for (i = 0; i < size; i++)
	{
		if (current->index == jumpi)
		{
			if (current->n >= value)
			{
				break;
			}
			printf("Value checked at index [%lu] = [%d]\n", i, current->n);
			jumpi += jump;
			prev = current;
		}
		current = current->next;
	}
	printf("Value found between indices [%lu] and [%lu]\n", prev->index, i);
	for (i = prev->index; prev->index <= current->index; prev = prev->next, i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, prev->n);
		if (prev->n == value)
			return (prev);
	}
	return (NULL);
}
