#include "main.h"

/**
 * times_table - prints 9 times table
 *
 * Return: void
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j  = 0; j < 10; j++)
		{
			int result;

			result = i * j;

			if (j == 9)
			{
				_putchar(result + '0');
				_putchar('\n');
			} else
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
