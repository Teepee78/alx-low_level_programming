#include "main.h"

/**
 * cap_string - capitalizes every word of a string
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	int i;

	/* capitalize first character of words */
	for (i = 0; str[i] != '\0'; i++)
	{
		/* check first character is lowercase alphabet */
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
			/* subtract 32 to make it capital */
			str[i] = str[i] - 32;
			/* continue to the loop */
			continue;
		}
		/* check space */
		if (str[i] == ' ')
		{
			/* if space is found, check next character */
			++i;
			/* check next character is lowercase alphabet */
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				/* subtract 32 to make it capital */
				str[i]=str[i]-32;
				/* continue to the loop */
				continue;
			}
		} else
		{
			/* all other uppercase characters should be in lowercase */
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				/* subtract 32 to make it small/lowercase */
				str[i]=str[i]+32;
			}
		}
	}
	return (str);
}
