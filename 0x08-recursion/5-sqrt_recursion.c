#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * if n does not have a natural square root
 * the function return -1
 * Retrun: integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	int i = 1;
	result = 1;

	while (result <= n)
	{

