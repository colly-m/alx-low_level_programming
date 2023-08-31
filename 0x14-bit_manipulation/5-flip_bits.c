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
	unsigned long int xo;
	unsigned long int cur = 0;

	for (xo = n ^ m; xo > 0; xo >>= 1)
	{
		cur = cur + (xo & 1);
	}

	return (cur);
}
