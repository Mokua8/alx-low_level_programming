#include "main.h"

int find_sqrt(int num, int root);

/**
 * find_sqrt - find natural square root of an input number
 * @num: number to find square root
 * @root: root to be tested
 * Return: square root if number has natural square root
 * if not returns -1
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (rrot);
	}
	if (root == num / 2)
	{
		return (-1);
	}

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * if n does not have a natural square root
 * the function return -1
 * Retrun: integer
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (find_sqrt(n, root));
}

