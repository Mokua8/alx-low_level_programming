#include <stdio.h>
#include "main.h"
/**
 * print_triangle - Entry point
 * Description: prints a triangle, followed by a new line
 * @size: received integer
 * Return: void
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return;
	}
	
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
