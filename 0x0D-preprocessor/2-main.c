#include <stdio.h>

/**
 * main - print the file name it was compiled from
 * Return: 0 Always
 */
int main(void)
{
	printf("%s\n", _FILE_);
	return (0);
}
