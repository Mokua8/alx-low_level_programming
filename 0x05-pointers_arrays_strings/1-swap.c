#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps values of two inegers
 * @a: 1st integer
 * @b: 2nd Integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
