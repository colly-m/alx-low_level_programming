#include <stdio.h>

/**
 * funmain - function to print before the main function is executed
 * Return: Void
 */
void __attribute__((constructor)) funmain()
{
	printf("Youre beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
