#include "main.h"

/**
 * set_bit - function to set the value of a bit to 1 at an index
 * @n: a pointer to the number to change
 * @index: index to the bit setting to 1
 * Return: 1 if success or -1 if fails
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int b = 1;

	if (index > 64)
		return (-1);

	b = b << index;
	*n = (*n | b);

	return (1);
}
