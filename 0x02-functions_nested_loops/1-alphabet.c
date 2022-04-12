#include "main.h"

/**
 * print_alphabet - prints all letters of the alphabet in lowercase
 *
 * main - entry point
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	for (int i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
