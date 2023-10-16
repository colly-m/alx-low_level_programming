#include "main.h"
/**
 * _strlen - Function that return the length of a string
 * @l: The pointer to the string to check
 * Return: length of @l
 */
int _strlen(char *l)
{
	int length = 0;

	while (l[length])
		length++;

	return (length);
}
