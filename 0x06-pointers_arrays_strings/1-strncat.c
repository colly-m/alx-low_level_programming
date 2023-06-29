#include "main.h"

/**
 * _strncat - function that concatenates two strings with n bytes
 * @dest: the sring we are copyiny to
 * @src: the string to be copied
 * @n: number of bytes from src
 * Return: pointer to concatenated dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
			break;
		i++;
		j++;
	}
	return (dest);
}
