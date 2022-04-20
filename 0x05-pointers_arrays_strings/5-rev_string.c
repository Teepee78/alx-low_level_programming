#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: string
 */
void rev_string(char *s)
{
	int i, j, sizenew_s, sizeint, lennew_s;
	char new_s[200];

	i = strlen(s) - 1;
	j = 0;
	while (i >= 0)
	{
		new_s[j] = s[i];
		j++;
		i--;
	}

	sizenew_s = sizeof(new_s);
	sizeint = sizeof(int);
	lennew_s = sizenew_s / sizeint;

	new_s[lennew_s] = '\0';
	*s = new_s;
}
