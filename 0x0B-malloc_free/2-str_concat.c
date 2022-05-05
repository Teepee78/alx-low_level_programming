#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 */
char *str_concat(char *s1, char *s2)
{
	char *buffer;
	unsigned int i, j, lens1, lens2;

	if (s1 == NULL)
	{
		lens1 = 0;
	} else
	{
		lens1 = strlen(s1);
	}

	if (s2 == NULL)
	{
		lens2 = 0;
	} else
	{
		lens2 = strlen(s2);
	}

	buffer = malloc(sizeof(char) * (lens1 + lens2 + 1))

	if (buffer == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (s1[i] != '\0')
	{
		buffer[j] = s1[i];
		j++;
		i++;
	}

	i = 0;
	while (s2[i] != '\0')
	{
		buffer[j] = s2[i];
		j++;
		i++;
	}
	buffer[j] = '\0';

	return (buffer);
}
