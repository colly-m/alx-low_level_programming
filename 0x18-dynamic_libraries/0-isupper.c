#include "main.h"

/**
 *_isupper - checks for uppercase letter
 *@a: the number to be checked
 *Return: 1 for uppercase, 0 for any other
 */

int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	return (0);
}
