#include "3-calc.h"
#include <srdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_sub(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Function to return sum of two numbers
 * @a: first number
 * @b: second number
 * Return: sum a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to return subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply two numbers
 * @a: first number
 * @b: second number
 * Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide two numbers
 * @a: first number
 * @b: second number
 * Return: quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function to return remainder of division of two numbers
 * @a: first number
 * @b: second number
 * Return: remainder of division between a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
