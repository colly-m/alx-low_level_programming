#include "search_algos.h"

/**
 * interpolation_search - Function to search for a value in sorted array
 * of integers using interpolation algorithm
 * @array: pointer to the array of integers
 * @size: pointer to the size of the array
 * @value: pointer to the value to search
 * Return: -1 if value not found, or the value being searched
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	int lw = 0;
	int hg = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (lw <= hg && value >= array[lw] && value <= array[hg])
	{
		pos = lw + (((double)(hg - lw) /
		(array[hg] - array[lw])) * (value - array[lw]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			lw = pos + 1;
		else
			hg = pos - 1;
	}

	if (value == array[lw])
		return (lw);
	pos = lw + (((double)(hg - lw) /
	(array[hg] - array[lw])) * (value - array[lw]));
	printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
