#include "main.h"

/**
 *print_diagonal - function that draws a diagonal line
 *@n: The number of tines the line is printed
 *Return: empty
 */
void print_diagonal(int n)
{
	int l, d;

	if (n <= 0)
		_putchar('\n');
	for (l = 0; l < n; l++)
	{
		for (d = 0; d < l; d++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar('\n');
	}
}
