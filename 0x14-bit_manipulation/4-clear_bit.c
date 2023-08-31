#include "main.h"

/**
 * clear_bit - function to set the value of a bit to 0 at an index
 * @n: pointer to the bit to change
 * @index: pointer to the index to position to change the bit
 * Return: 1 if success or -1 if fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1 << index) & *n);

	return (1);
}
