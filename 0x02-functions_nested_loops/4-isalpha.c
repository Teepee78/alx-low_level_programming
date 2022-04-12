#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 *
 * Return - 1 if alphabetic, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c) > 0)
		return (1);
	else
		return (0);
}
