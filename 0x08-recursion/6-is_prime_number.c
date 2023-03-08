#include "main.h"

int is_divisible(int i, int div);

/**
 * is_divisible - checks if number is divisible
 * @i: number to be checked
 * @div: divider
 * Return: 0 if number is divisible. 1 if number is not divisible
 */

int is_divisible(int i, int div)
{
	if (i % div == 0)
	{
		return (0);
	}
	if (div == i / 2)
	{
		return (1);
	}

	return (is_divisible(i, div + 1));

/**
 * is_prime_number - returns 1 if the input is a prime number
 * otherwise returns 0
 * @n: input integer
 * Return: integer
 */

int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
	{
		return (0);
	}
	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (is_divisible(n, div));
}
