#include "main.h"

/**
 * _strncpy - function to copy a string with n
 * @dest: the string to copy to
 * @src: the string to be copied
 * @n: the number of bytes to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
