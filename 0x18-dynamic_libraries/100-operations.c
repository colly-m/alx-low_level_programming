#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - function to sum up two integers
 * @a: an integer
 * @b: an integer
 * Return: sum of the result
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function to minus two integers
 * @a: an integer
 * @b: an integer
 * Return: result of the subtraction
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - function to multiply two integers
 * @a: an integer
 * @b: an integer
 * Return: result of the multiplication
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function to divide two integers
 * @: an integer
 * @b: an integer
 * Return: result of the division
 */
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - function to get the modulus of two integers
 * @a: an integer
 * @b: an integer
 * Return: result of the modulas
 */
int mod(int a, int b)
{
	return (a % b);
}
