#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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

	lenstr = strlen(str) + 1;

	if (str == 0)
		return (NULL);

	buffer = malloc(sizeof(char) * lenstr);

	if (buffer == 0)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		buffer[i] = str[i];
	}
	buffer[i] = '\0';

	return (buffer);
}
