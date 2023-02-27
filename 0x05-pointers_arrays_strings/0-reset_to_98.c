#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Takes a pointer to an int as parameter
 * and updates the value it points to 98
 * @*n: pointer n
 *
 * Return: void
 */

void reset_to_98(int *n)
{
	int x = 0;
	n = &x;
	*n = 98;
	return;
}
