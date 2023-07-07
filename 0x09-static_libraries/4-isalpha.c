#include "main.h"

/**
 *_isalpha - checks for alphabets both lower and upper
 *@c: character to be checked
 *
 *Return: 1 if character is a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
