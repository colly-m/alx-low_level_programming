#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array
 * of integers, followed by new line
 * @a: Array pointer of type int
 * @n: Number of array to be printed
 * Description: Numbers to be separated by comma and space
 * Return: void
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);
		if (index != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
