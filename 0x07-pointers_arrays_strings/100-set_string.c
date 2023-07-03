#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: input value to modify
 * @to: input value to assign
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
