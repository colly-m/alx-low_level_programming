#include <stdio.h>

/**
 * funbmain - function to print before the main function is executed
 *
 */
void funbmain(void) __attribute__ ((constructor));

/**
 * funbmain - begining of funbmain
 */
void funbmain(void)
{
	printf("You're beat! and yet, you must allow\n");
	printf("I bore my house upon my back!\n");
}
