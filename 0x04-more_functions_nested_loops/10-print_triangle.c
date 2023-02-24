#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle using the # character
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
