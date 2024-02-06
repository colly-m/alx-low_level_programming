#include "search_algos.h"

/**
 * binary_search - Function to search for values in a sorted array
 * of integers using Binary search algorithm
 * @array: pointer to the array of integers
 * @size: pointer to the size of the array
 * @value: pointer to the integere being searched
 * Return: -1 if not found, the value being searched
 */
int binary_search(int *array, size_t size, int value)
{
	int down, mid, up;
	int n;

	if (array == NULL)
	{
		return (-1);
	}

	down = 0;
	up = size - 1;

	while (down <= up)
	{
		mid = (down + up) / 2;

		printf("Searching in array: ");
		for (n = down; n <= up; n++)
			printf("%i%s", array[n], n == up ? "\n" : ", ");

		if (array[mid] < value)
			down = mid + 1;
		else if (array[mid] > value)
		up = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
