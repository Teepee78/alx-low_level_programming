#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: given string
 * Return: pointer to string
 */
char *_strdup(char *str)
{
	int i, lenstr;
	char *buffer;

	lenstr = 0;
	while (str != '\0')
	{
		lenstr++;
		str++;
	}

	if (lenstr == NULL)
		return (NULL);

	buffer = malloc(sizeof(char) * lenstr);

	if (buffer == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[i] = str[i];
	}

	return (buffer);
}
