#include "search_algos.h"

/**
 * advanced_binary - Function to search for a value in a sorted
 *array of integers
 * @array: pointer to the first element of the array to search in
 * @size: pointer to the number of elements in array
 * @value: pointer to the value to search for
 * Return: The index where value is located, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t z;
	int idx;
	int result;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (z = 0; z < size; z++)
	{
		printf("%d", array[z]);
		if (z < size - 1)
			printf(", ");
		else
			printf("\n");
	}

	idx = size / 2;
	if (array[idx] == value)
	{
		if (size == 1)
			return (idx);
		return (idx + advanced_binary(array + idx, size - idx, value));
	}
	else if (array[idx] > value)
		return (advanced_binary(array, idx, value));

	result = advanced_binary(array + idx + 1, size - (idx + 1), value);
	return (result == -1 ? -1 : idx + 1 + result);
}
