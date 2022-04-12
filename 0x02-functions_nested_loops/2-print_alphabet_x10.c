/**
 * print_alphabet_x10 - prints letters of the alphabet x10
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
