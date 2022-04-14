#include "main.h"

/**
 *print_triangle - prints a triangle
 *@size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j, d, p;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		d = size - 1
		for (i = 0; i < size; i++)
		{
			for (j = d; j > 0; j--)
			{
				_putchar(' ');
			}
			for (p = 0; p <= i; p++)
			{
				_putchar(35);
			}
			d--;
			_putchar('\n');
		}
	}
}
