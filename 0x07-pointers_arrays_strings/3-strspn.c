#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s:
 * @accept:
 * Return: returns the number of bytes in the initial segment of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	/* declare variable */
	unsigned int i, j, ret;

	ret = 0;

	/* iterate through s to find accept */
	i = 0;
	while (s[i] != '\0')
	{
		/* iteerate through accept */
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				ret++;
				break;
			}
			j++;
		}

		if (s[i] != accept[j])
		{
			break;
		}

		i++;
	}
	return (ret);

}
