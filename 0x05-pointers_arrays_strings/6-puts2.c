#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: string
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < (strlen(str) - 1); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
