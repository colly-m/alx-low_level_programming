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
	
	index = 0;
	for (n--; n >= 0; n--, index++)
	{
		printf("%d", a[index]);
		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
