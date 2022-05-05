#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a specific character
 * @size: size of array
 * @c: character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(c) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
