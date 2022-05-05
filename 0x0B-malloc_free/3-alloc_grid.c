#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array
 * @width: width
 * @height: height
 * Return: NULL on failure, else return pointer to array
 */
int **alloc_grid(int width, int height)
{
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int) * (width * height));
	if (array == NULL)
		return (NULL);

	return (array);
}
