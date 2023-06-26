#include "main.h"
/**
 * puts_half - function that prints half of a string
 * Description: odd number of chars to be printed half
 * @str: string to print
 * Return: void
 */

void puts_half(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
		;

	index++;

	for (index /= 2; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
