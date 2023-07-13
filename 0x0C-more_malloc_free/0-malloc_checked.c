#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function to allocate memory using malloc
 * @b: number of bytes to allocate
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	char *s;

	s = malloc(b);
	if (s == NULL)
		exit(98);

	return (s);
}
