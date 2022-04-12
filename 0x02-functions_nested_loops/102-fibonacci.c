#include <stdio.h>

/**
 * fibonacci - prints fibonacci numbers
 * @n: integer
 *
 * Return: result
 */
void fibonacci(int n)
{
	long int f1 = 1, f2 = 2, i, next;

	if (n < 1)
	{
		return;
	}
	printf("%ld, ", f1);
	for (i = 1; i < n; i++)
	{
		printf("%ld, ", f2);

		next = f1 + f2;
		f1 = f2;
		f2 = next;
	}
	printf("\n");
}
/**
 * main - entry point
 *
 * Return: (0) success
 */
int main(void)
{
	fibonacci(50);
	return (0);
}
