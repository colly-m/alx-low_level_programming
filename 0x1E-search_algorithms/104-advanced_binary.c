#include "search_algos.h"

int bin_recsearch(int *array, int value, size_t lw, size_t up);

/**
 * bin_recsearch - helper to `advanced_binary`, recursively searches
 * for a value in an integer array
 * @array: pointer to first element of array to seach
 * @value: pointer to the value to search for
 * @lw: pointer to the starting index in array
 * @up: pointer to the ending index in array
 * Return: index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */
int bin_recsearch(int *array, int value, size_t lw, size_t up)
{
	size_t n, mid;

	if (!array)
		return (-1);

	mid = (lw + up) / 2;
	printf("Searching in array: ");
	for (n = lw; n <= up; n++)
		printf("%i%s", array[n], n == up ? "\n" : ", ");

	if (array[lw] == value)
		return ((int)lw);

	if (array[lw] != array[up])
	{
		if (array[mid] < value)
			return (bin_recsearch(array, value,
							mid + 1, up));
		if (array[mid] >= value)
			return (bin_recsearch(array, value,
							lw, mid));
	}

	return (-1);
}

/**
 * advanced_binary - Function that searches for a value in a sorted
 *array of integers
 * using a binary search algorithm. Unlike `binary_search`, consistently
 * returns first appearance of `value` in array
 * @array: pointer to first element of array to search
 * @size: pointer to the number of elements in array
 * @value: pointer to the value to search for
 * Return: first index containing `value`, or -1 if `value` not found or
 * `array` is NULL
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t lw = 0;
	size_t up = size - 1;

	if (array == NULL)
		return (-1);

	return (bin_recsearch(array, value, lw, up));
}
