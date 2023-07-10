#include "main.h"
#include <stdlib.h>

/**
 * create_array - function to creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: char constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *s;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	for  (d = 0; d < size; d++)
	{
		s[d] = c;
	}

	return (s);
}
