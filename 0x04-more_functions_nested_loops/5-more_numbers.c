#include "main.h"

/**
 *more_numbers - Print numbers from 0 to 14, 10 times
 *followed by a new line
 *Return: 10 times of the numbers 0 up to 14
 */
void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m > 9)
			{
			_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
