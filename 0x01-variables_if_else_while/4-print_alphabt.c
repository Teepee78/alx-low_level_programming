#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet = 97;

	while (alphabet < 123)
	{
		if (alphabet == 101 || alphabet == 113)
		{
			continue;
		} else
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
