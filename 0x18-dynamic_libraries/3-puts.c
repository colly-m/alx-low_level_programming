#include "main.h"
/**
 * _puts - function that prints a string and a new line
 * @str: pointer to the string to print
 * Return: Empty
 */
void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
