#include "main.h"

/**
 * more_numbers - prints 0 - 14 ten times
 */
void more_numbers(void)
{
	int i = 0, j = 0;
	int first_number, second_number;

	while (i < 11)
	{
		while (j < 15)
		{
			if (j > 9)
			{
				first_number = j / 10;
				second_number = j % 10;

				_putchar(first_number + '0');
			} else
			{
				second_number = j;
			}
			_putchar(second_number + '0');
			j++;
		}
		i++;
		_putchar('\n');
	}
}
