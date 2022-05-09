#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _isdigit - checks if a string contains only digits
 * @str: string
 * Return: 1 (success)
 */
int _isdigit(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 48 || str[i] > 57)
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: agument variables
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	unsigned long result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!_isdigit(argv[1]))
	{
		printf("Error\n");
		exit(98);
	}
	if (!_isdigit(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%ld\n", result);
	return (0);
}
