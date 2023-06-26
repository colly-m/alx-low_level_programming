#include "main.h"
/**
 * _atoi - function to convert a string to an integer
 * @s: The string to be converted
 * Return: A converted integer
 */

int _atoi(char *s)
{
	int i;
	unsigned int num = 0;

	do {
		if (*s == '-')
		i *= -1;
		else if (*s >= 48 && *s <= 57)
		num = num * 10 + (*s - '0');
		else if (num > 0)
		break;
	} while (*s++);
	return (num * i);
}
