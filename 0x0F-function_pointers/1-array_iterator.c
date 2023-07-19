#include "function_pointers.h"

/**
 * array_iterator - function to execute a function given as param
 * on each element of an array
 * @size: size of the array
 * @array: the array
 * @action: a pointer to the function in use
 * Return: empty
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int u = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (u < size)
		{
			action(array[u]);
			u++;
		}
	}
}
