#include "main.h"

/**
 * get_bit - function to return the value of a bit given the index
 * @n: parameter to search with index
 * @index: index to number of bits to get
 * Return: value of bit,-1 if fails
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val_bit;

	if (index > 63)
		return (-1);

	val_bit = (n >> index);
	return (val_bit & 1);
}
