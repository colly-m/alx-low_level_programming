#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @n: number of array elements
 * @a: array
 * Return:
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
