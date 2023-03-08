#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: received integer
 *
 * Return: integer
 */

int factorial(int n)
{
	if (n == 0 || 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
