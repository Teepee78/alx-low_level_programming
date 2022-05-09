#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: size of ptr
 * @new_size: new size to be allocated to ptr
 * Return: buffer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *buffer, *clone;

	if (ptr == NULL)
	{
		buffer = malloc(new_size);
		return (buffer);
	} else
	{
		clone = ptr;
	}

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	buffer = malloc(new_size * sizeof(char));
	if (buffer == NULL)
		return (NULL);

	for (i = 0; (i < old_size) || (i < new_size); i++)
	{
		buffer[i] = clone[i];
	}

	free(ptr);

	return (buffer);
}
