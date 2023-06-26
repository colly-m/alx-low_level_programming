#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: Pointer to the string to print
 * Return: Empty
 */

void print_rev(char *s)
{
	int index = 0;

	while (s[index])
		index++;

	while (index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
