#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program to add positive numbers and a new line
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int j, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];

			for (j = 0; j < strlen(c); j++)
			{
				if (c[j] < 48 || c[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
			c++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
