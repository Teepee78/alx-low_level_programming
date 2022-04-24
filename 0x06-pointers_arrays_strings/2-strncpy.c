#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be copied
 * Return: Dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	/* get length of dest */
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	/* copy n characters of src to dest */
	j = 0;
	/* while index is less than number of chars to be copied n */
	while (j < n)
	{
		/* if you encounter the NULL character at src, add null
		characters to dest until n characters have been written */
		if (src[j] == '\0')
		{
			while (j < n)
			{
				dest[i] = '\0';
				j++;
				i++;
			}
		} else
		{
			dest[i] = src[j];
			i++;
			j++;
		}
	}

	dest[i] = '\0';

	return (dest);
}
