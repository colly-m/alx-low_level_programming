#include "main.h"

/**
 *print_square - function that prints squares using #
 *@size: The size of the square
 *
 *Return: empty
 */
void print_square(int size)
{
	int s, h;

	if (size <= 0)
		_putchar('\n');
	for (s = 0; s < (size); s++)
	{
		for (h = 0; h < (size); h++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
