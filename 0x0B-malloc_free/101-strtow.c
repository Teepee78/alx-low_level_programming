#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: array of strings or NULL if fail
 */
char **strtow(char *str)
{
	int i, j, k, l, height, len, count;
	char **buffer;

	if (str == NULL || *str == '\0')
		return (NULL);

	len = strlen(str);

	height = 0;
	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ')
		{
			height++;
		}
	}
	height += 1;

	buffer = malloc(sizeof(char *) * height);
	if (buffer == NULL)
		return (NULL);

	l = 0;
	for (i = 0; i < height; i++)
	{
		count = 0;
		k = l;
		while (str[k] != ' ' || k < len)
		{
			count++;
		}
		buffer[i] = malloc(sizeof(char) * (count + 1));
		if (buffer[i] == NULL)
		{
			while (i >= 0)
				free(buffer[i--]);
			free(buffer);
			return (NULL);
		}

		for (j = 0; j < count; j++)
		{
			if (str[l] != ' ' || l < len)
			{
				buffer[i][j] = str[l];
				l++;
			} else
			{
				buffer[i][j] = '\0';
				l++;
				continue;
			}
		}
	}
	buffer[i] = '\0';

	return (buffer);
}
