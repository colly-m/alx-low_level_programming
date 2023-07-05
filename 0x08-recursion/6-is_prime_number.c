#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - function that returns 1 if prime number 0 if not
 * @n: the number to check
 * Return: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if number is prime
 * @n: the number to check
 * @i: iteration times
 * Return: 1 for prime number 0 for otherwise
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);
	return (check_prime(n, i + 1));
}
