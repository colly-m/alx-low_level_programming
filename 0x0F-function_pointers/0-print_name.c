#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: name to print
 * @f: pointer to function that prints name
 * Return: empty
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
