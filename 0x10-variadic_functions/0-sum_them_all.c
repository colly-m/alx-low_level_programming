#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function to return the sum of all parameters
 * @n: number of parameters passed to function
 * Return: 0 if n == 0, or result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int u;
	int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (u = 0; u < n; u++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

