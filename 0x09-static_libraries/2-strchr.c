#include "main.h"
#include <stdio.h>

/**
 * _strchr - function to locate character in a string
 * @s: source string
 * @c: character to be found
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] >= '\0'; j++)
	{
		if (s[j] == c)
			return (s + j);
	}
	return (NULL);
}
