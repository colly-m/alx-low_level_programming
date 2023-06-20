#include "main.h"
#include <unistd.h>
/**
 *_putchar - wries the character C to stdout
 *@c: The character to be printed
 *
 *Return: 1 (Success)
 *on error, -1 is returned, and error is set appropriately.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}	
