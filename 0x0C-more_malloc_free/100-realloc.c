#include "main.h"
#include <stdlib.h>

/**
 * lenarray - gets length of array
 * @ptr: pointer to array
 * Return: length of array
 */
int lenarray(char *ptr)
{
	int len = 0;

	while (ptr[len])
	{
		len++;
	}

	return (len);
}

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of ptr
 * @new_size: new size to be allocated to ptr
 * Return: buffer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, lenptr = 0;
	char *buffer, *clone;

	clone = ptr;

	if (ptr == NULL)
	{
		buffer = malloc(new_size);
		return (buffer);
	}
	if (new_size == old_size)
		return (clone);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	/* get length of array */
	lenptr = lenarray(clone);

	buffer = malloc(new_size * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < lenptr + 1; i++)
	{
		buffer[i] = clone[i];
	}

	free(ptr);

	return (buffer);
}
