#include "search_algos.h"

/**
 * print_array - Function to print an array of integers
 * @array: pointer to the array of integers
 * @size: pointer to the array size
 * Return: void
 */

void print_array(int *array, size_t size)
{
	size_t n;

	if (array == NULL)
	{
		printf("Array is NULL.\n");
		return;
	}
	printf("Searching in array: ");

	for (n = 0; n < size; n++)
	{
		printf("%d ", array[n]);
	}
	printf("\n");
}

/**
 * binary_search - Function to search for a value in a sorted array
 *  using Binary search algorithm
 *  @array: pointer to the array to search
 *  @size: pointer to the size of the array
 *  @value: pointer to the value to sort after
 *  Return: -1 if not found or the value
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		print_array(array, size);

		mid = low + (high - low) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}

		if (value > array[mid])
		{
			low = mid + 1;
		}

		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
