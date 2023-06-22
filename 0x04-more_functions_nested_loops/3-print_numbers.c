#include "main.h"

/**
 *print_numbers - a function that prints the numbers 0 up to 9
 *Return:numbers 0 through 9 
 */

void print_numbers(void)
{
	int a;

	for(a = 0; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
