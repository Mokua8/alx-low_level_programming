#include "main.h"

/**
 * is_prime_number - returns 1 if the input is a prime number
 * otherwise returns 0
 * @n: input integer
 * Return: integer
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n == 2)
	{
		return (1);
	}
	if (n < 2)
	{
		return (0);
	}
	if (i * i > n)
	{
		return (1);
	}
	return is_prime_number(n, i + 1);
}
