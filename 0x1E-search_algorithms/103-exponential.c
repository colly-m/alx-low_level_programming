#include "search_algos.h"

/**
  * bin_search - Function to search for a value in a sorted array of integers
  * using binary search
  * @array: pointer to the array of integers
  * @left: pointer to the starting index of the sub-array to search
  * @right: pointer to the ending index of the sub-array to search
  * @value: pointer to the value to search for
  * Return: -1 if value not present, or index of he value location
  */
int bin_search(int *array, size_t left, size_t right, int value)
{
	size_t z;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (z = left; z < right; z++)
			printf("%d, ", array[z]);
		printf("%d\n", array[z]);

		z = left + (right - left) / 2;
		if (array[z] == value)
			return (z);
		if (array[z] > value)
			right = z - 1;
		else
			left = z + 1;
	}

	return (-1);
}

/**
 * exponential_search - Function to search for a value in a sorted array
 * of integers using exponential search
 * @array: pointer to the array of integers
 * @size: pointer to the size of the array
 * @value: pointer to the number to look for
 * Return: -1 if not found, or the number
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t n = 0;
	size_t right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (n = 1; n < size && array[n] <= value; n = n * 2)
			printf("Value checked array[%ld] = [%d]\n", n, array[n]);
	}

	right = n < size ? n : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", n / 2, right);
	return (bin_search(array, n / 2, right, value));
}
