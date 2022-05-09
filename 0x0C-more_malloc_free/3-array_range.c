#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of integer in array
 * @max: maximum value of integer in array
 * Return: buffer
 */
int *array_range(int min, int max)
{
	int i, len;
	int *buffer;

	if (min > max)
		return (NULL);

	len = (max - min) + 1;
	buffer = malloc(len);
	if (buffer == NULL)
		return (NULL);

	j = min;
	for (i = 0; i < len; i++, j++)
	{
		buffer[i] = j;
	}

	return (buffer);
}
