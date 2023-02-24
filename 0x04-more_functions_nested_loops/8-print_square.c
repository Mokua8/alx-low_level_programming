#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * Description: prints a square followed by a new line
 * @size: received integer
 * Return: void
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
