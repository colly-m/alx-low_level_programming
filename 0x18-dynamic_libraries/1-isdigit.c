#include "main.h"

/**
 *_isdigit - check for a digit 0 through 9
 *@a: the number to be checked
 *Return: 1 for a digit, 0 for other
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
