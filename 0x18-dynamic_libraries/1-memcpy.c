#include "main.h"

/**
 * _memcpy - copy memory
 * @dest: pointer to return
 * @src: source memory
 * @n: number of bytes to be coppied
 * Return: the pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
