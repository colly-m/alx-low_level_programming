#include "variadic_functions.h"

/**
 * print_strings - function to print strings
 * @separator: the string to be printed between functions
 * @n: number of passed strings to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int u;
	char *s;
	va_list ap;

	va_start(ap, n);

	for (u = 0; u < n; u++)
	{
		if (separator != NULL && u != 0)
			printf("%s", separator);
		s = va_arg(ap, char *);
			printf("%s", (s == NULL) ? "(nil)" : s);
	}
	printf("\n");
	va_end(ap);
}
