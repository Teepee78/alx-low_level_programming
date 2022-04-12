#include <stdio.h>

/**
 * fibonacci - prints fibonacci numbers
 * @n: integer
 *
 * Return: result
 */
int fibonacci(int n)
{
	int result;

	if (n == 1)
	{
		printf("1");
		return (1);
	} else if (n == 2)
	{
		printf("2");
		return (2);
	} else if (n > 0)
	{
		result = fibonacci(n - 1) + fibonacci(n - 2);
		printf("%d\n", result);
		return (result);
	}
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
