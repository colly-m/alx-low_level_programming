#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input number
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - function to calculate natural square root
 * @n: input number
 * @i: iterate number
 * Return: natural square root or -1
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
