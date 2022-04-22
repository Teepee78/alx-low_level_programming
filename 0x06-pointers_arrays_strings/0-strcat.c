#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, lengthsrc, lengthdest;

	/* get length of src */
	i = 0;
	lengthsrc = 0;
	while (*src[i] != '\0')
	{
		lengthsrc++;
	}

	/* get length of dest */
	i = 0;
	lengthdest = 0;
	while (*dest[i] != '\0')
	{
		lengthdest++;
	}

	/* iterate through src and add each element to dest */
	j = lengthdest;
	for (i = 0; i < lengthsrc; i++)
	{
		*dest[j] = *src[i];
		j++;
	}
	return (*dest);
}
