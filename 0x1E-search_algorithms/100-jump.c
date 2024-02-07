#include "search_algos.h"

/**
 * jump_search - Function to search for a value in an integer
 * array using jump algorithm
 * @array: pointer to the array of integers
 * @value: pointer to the value to search for
 * @size: pointer to the size of the array
 * Return: -1 if not found, or the value being searched
 */
int jump_search(int *array, size_t size, int value)
{
	size_t lw = 0;
	size_t hg = 0, n = 0;

	if (array != NULL)
	{
		while (hg < size && array[hg] < value)
		{
			lw = hg;
			hg = hg + sqrt(size);
			printf("Value checked array[%lu] = [%d]\n",
			       lw, array[lw]);
		}
		printf("Value found between indexes [%lu] and [%lu]\n",
		       lw, hg);
		for (n = lw; n <= hg; n++)
		{
			if (n < size)
			{
				printf("Value checked array[%lu] = [%d]\n",
				       n, array[n]);
				if (array[n] == value)
					return (n);
			}
		}
	}
	return (-1);
}
