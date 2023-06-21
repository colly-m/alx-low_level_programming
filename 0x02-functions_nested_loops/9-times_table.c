#include "main.h"

/**
 *times_table - function that prints the 9 times table
 */
void times_table(void)
{
	int x, y, z, u, v;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			if (z > 9)
			{
				u = z % 10;
				v = (z - u) / 10;
				_putchar(44);
				_putchar(32);
				_putchar(v + '0');
				_putchar(u + '0');
			}
			else
			{
			if (y != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
			_putchar(z + '0');
		}
	}
	_putchar('\n');
	}
}
