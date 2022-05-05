#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: arguments
 * Return: new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len, count;
	char *buffer;

	if (ac == 0 || av == NULL)
		return (NULL);

	buffer = malloc(sizeof(char) * ac);

	count = 0;
	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		buffer[i] = malloc(sizeof(char) * (len + 1));

		for (j = 0; j < len; j++)
		{
			buffer[count] = av[i][j];
			count++;
		}
		buffer[count] = '\n';
		count++;
	}
	buffer[count] = '\0';
}
