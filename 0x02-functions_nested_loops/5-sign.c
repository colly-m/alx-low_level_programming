#include "main.h"
/**
 *print_sign - function that print the sign of a number
 *@n: is the int we use for the argument of the function
 *Return: 1 if number is greater than zero
 *0 if number is zero
 *-1 if number is less than 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
