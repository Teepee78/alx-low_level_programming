#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */

int main(void)
{
	int i;

	i = 98;
	positive_or_negative(i);

	if (positive_or_negative(0) == "0 is zero\n")
	{
		printf("0 is zero\n");
	}

	return (0);
}
