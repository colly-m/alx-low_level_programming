#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function to return pointer to newly allocated space
 * in memory containing a string copy as parameter
 * @str: string to copy
 * Return: coppied string
 */
char *_strdup(char *str)
{
	int i = 0, j = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[j])
	{
		j++;
	}

	s = malloc((sizeof(char) * j) + 1);

	if (s == NULL)
		return (NULL);

	while (i < j)
	{
		s[i] = str[i];
		i++;
	}

	s[i] = '\0';
	return (s);
}
