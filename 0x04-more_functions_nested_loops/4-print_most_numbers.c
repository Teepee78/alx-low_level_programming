#include "main.h"

/**
 *print_most_numbers - prints 0-9, except 2 and 4
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
