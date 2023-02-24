#include <stdio.h>
#include "main.h"

/**
 * more_numbers - Entry point
 * Description: prints 10 times the numbers, from 0 - 14, followed by a new line
 * Return: void
 */

void more_numbers(void)
{
	char i, n;
	char j = 0;

	while (j <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i > 9)
			{
				_putchar('1');
				n = i % 10;
			}
			_putchar('0' + n);
		}

		_putchar('\n');
		j++;
	}
}
