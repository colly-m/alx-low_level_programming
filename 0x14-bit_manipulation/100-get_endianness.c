#include "main.h"

/**
 * get_endianness - function to check for endianess
 * Return: 0 if endian is big or 1 if endian is little
 */
int get_endianness(void)
{
	unsigned int ui = 1;
	char *a = (char *) &ui;

	return (*a);
}
