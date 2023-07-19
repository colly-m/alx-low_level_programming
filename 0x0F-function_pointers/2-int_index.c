#include "function_pointers.h"

/**
 * int_index - function to search for an integer
 * @array: the array
 * @size: sixe of array
 * @cmp: a pointer to the function to compare values
 * Return: no matches or size <= 0 return -1
 * index of the first element of which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}
	return (-1);
}
