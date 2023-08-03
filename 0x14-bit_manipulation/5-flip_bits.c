#include "main.h"

/**
 * flip_bits - function to return number of bits you need to flip
 * to get from one number to another
 * @n: first num
 * @m: last num
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x;
	unsigned long int cur = 0;

	for (x = n ^ m; x > 0; x >>= 1)
	{
		cur = cur + (x & 1);
	}

	return (cur);
}
