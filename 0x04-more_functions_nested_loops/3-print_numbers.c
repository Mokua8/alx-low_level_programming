#include <stdio.h>
#include "main.h"

/**
 * print_number - Entry point
 * Description: prints numbers from 0 - 9 followed by a new line
 * Return: void
 */

void print_numbers(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
