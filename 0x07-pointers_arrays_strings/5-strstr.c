#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack if substring in haystack, else 0
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			return (haystack + i);
		}

		i++;
	}
	return (0);
}
