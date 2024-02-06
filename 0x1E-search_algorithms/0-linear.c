#include "search_algos.h"

/**
 * linear_search - Function to search for a value in an array
 * using Linear search algorithm
 * @array: pointer to the array if integers
 * @size: pointer to the size of the array
 * @value: pointer to the value being sort after
 * Return: -1 if value not present or the value found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (; n < size; n++)
	{
		printf("Value checked array[%lu] = [%d]\n", n, array[n]);
		if (array[n] == value)
		{
			return (n);
		}
	}
	return (-1);
}
