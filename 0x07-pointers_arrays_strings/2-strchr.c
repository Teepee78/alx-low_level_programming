#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	/* declare indexing variable, ret variable, len */
	int i, len;
	char *ret = 0;

	/* get length of s */
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	/* search through s for c */
	for (i = 0; i < len; i++)
	{
		if (c == s[i])
		{
			ret = &s[i];
			break;
		}
	}
	return (ret);
}
