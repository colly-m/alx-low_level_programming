#include "main.h"

/**
 * binary_to_uint - function to convert a binary number to
 *  an unsigned int
 * @b: pointer to a string that takes binary numbers
 * Return: converted number or 0 if b is not binary or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int ui = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < 48 || b[k] > 49)
			return (0);
		ui = 2 * ui + (b[k] - 48);
	}
	return (ui);
}
