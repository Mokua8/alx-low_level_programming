#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 * Description: prints 10 times the numbers, from 0 - 14, followed by a new line
 * Return: void
 */
void more_numbers(void)
{
	char i;
	char j = 0;
	while (j <= 9)
	{
		for (i = '0'; i <= '14'; i++)
		{
			_putchar(i);
		}
		putchar('\n');
		j++;
	}
	return;
}
