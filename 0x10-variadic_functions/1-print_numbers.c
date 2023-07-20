#include "variadic_functions.h"

/**
 * print_numbers - function to print numbers
 * @separator: string to be separated between numbers
 * @n: number of integers passed into function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int u;
	va_list ap;

	va_start(ap, n);

	for (u = 0; u < n; u++)
	{
		printf("%d", va_arg(ap, int));

		if (u != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
