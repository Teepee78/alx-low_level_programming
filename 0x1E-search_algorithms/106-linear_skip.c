#include "search_algos.h"

/**
 * linear_skip - Linear search algorithm in a skip list
 * @list: skip list
 * @value: value to be searched for
 * Return: pointer to first node where value is found
*/
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *head = list, *prev = list;
	size_t i = 0, start = 0;

	if (list == NULL)
		return (NULL);

	head = list->express;
	i = head->index;
	while (head->n <= value && head->express != NULL)
	{
		prev = head;
		printf("Value checked at index [%lu] = [%d]\n", i, head->n);
		head = head->express;
		i = head->index;
	}

	if (head->express == NULL && head->n < value)
	{
		prev = head;
		/* Go to last element */
		while (head->next != NULL)
			head = head->next;
		i = head->index;
	}
	start = prev->index;
	printf("Value found between indexes [%lu] and [%lu]\n", start, i);
	/* Linear Search */
	while (prev->n <= value && prev != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->next == NULL)
			return (NULL);
		prev = prev->next;
	}

	return (NULL);


}
