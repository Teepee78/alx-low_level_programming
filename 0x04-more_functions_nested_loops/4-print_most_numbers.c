#include "main.h"

/**
 * print_numbers - prints 0-9
 */
void print_most_numbers(void)
{
	int i = 48;

	while (i < 58)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
