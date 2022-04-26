#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: haystack if substring in haystack, else 0
 */
char *_strstr(char *haystack, char *needle)
{
	/* declare variables */
	int i, j;

	/* iterate through haystack */
	i = 0;
	while (haystack[i] != '\0')
	{
		/* iterate through needle to confirm all chars match */
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
		{
			return (haystack);
		}
		haystack + 1;
	}
	return (0);
}
