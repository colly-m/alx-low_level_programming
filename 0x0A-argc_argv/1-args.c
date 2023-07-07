#include "main.h"
#include <stdio.h>

/**
 * main - program to print number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
