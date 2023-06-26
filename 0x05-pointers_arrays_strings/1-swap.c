#include "main.h"
/**
 * swap_int - swap variables of two integers
 * @a: First pointer
 * @b: Second pointer
 * Return: Empty
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
