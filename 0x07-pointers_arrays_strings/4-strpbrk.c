#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: string
 * @accept: substring
 * Return: return s if it matches accept, 0 if not
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '0')
	{
		while (*accept != '0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}

		s++;
	}
	return (0);
}
