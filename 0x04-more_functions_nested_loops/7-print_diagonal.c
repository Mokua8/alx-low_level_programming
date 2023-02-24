#include <stdio.h>
#include "main.c"

/**
 * print_diagonal - Entry point
 * Description: draws a diagonal line on the terminal
 * @n: number of \ to be printed
 * Return: void 
 */

void print_diagonal(int n);
{
	int i = 0;
	int j;

	while (i < n && n > 0)
	{
		j = 0;

		while (j = i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
