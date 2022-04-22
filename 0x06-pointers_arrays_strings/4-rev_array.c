#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses an array
 * @a: array to be reversed
 * @n: numberof elements
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, temp, *start, *end;

	start = a;
	end = a;

	/* set end to index n - 1 */
	for (i = 0; i n - 1; i++)
	{
		end++;
	}

	for (i = 0; i < n / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		start++;
		end++;
	}
}
