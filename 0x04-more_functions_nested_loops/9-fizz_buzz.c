#include <stdio.h>
#include "main.h"

/**
 *main - entry point
 *Description: Prints numbers 1 to 100 with a new line
 *but for multiplesof 3 print Fizz, for multiple of 5
 *print Buzz and for multiple of both print FizzBuzz
 *Return: 0 always
 */
int main(void)
{
	int j;

	for (j = 1; j <= 100; j++)
	{
		if ((j % 3 == 0) && (j % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", j);
		}
		if (j != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
