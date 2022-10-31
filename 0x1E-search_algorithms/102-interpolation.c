#include "search_algos.h"

/**
 * interpolation_search - Interpolation Search Algorithm
 * @array: array of integers
 * @size: size of array
 * @value: value to be searched for
 * Return: index of value if found else -1
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos, high = size - 1, low = 0;

	if (array == NULL || size < 1)
		return (-1);

	while ((low < high) && (value >= array[low]))
	{
		pos = low + (((double)(high - low) /
								(array[high] - array[low])) * (value - array[low]));

		if (pos > high)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked [%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (value < array[pos])
			high = pos - 1;
		else
			return (pos);
	}

	if (value == array[low])
		return (low);
	return (-1);
}
