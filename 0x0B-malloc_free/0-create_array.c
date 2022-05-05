#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array and initializes it with a specific character
 * @size: size of array
 * @c: character
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(array) * size);

	if (array == NULL)
	{
		printf("Error");
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
