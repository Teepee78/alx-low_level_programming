#include "main.h"

/**
 * print_diagonal - prints diagonal on the terminal
 * @n: number of time \ should be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n < 0)
	{
		n = 0;
	}

	i = 0;
	while (i < n)
	{
		_putchar(92);
		i++;
	}
	_putchar('\n');
}
