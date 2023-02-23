#include <stdio.h>
#include "main.h"

/**
 * _isdigit - Entry point
 * Description: checks for a digit
 * @c: received integer
 * Return: 1 if true. 0 if false
 */
int _isdigit(int c)
{
	for (i = '0'; i <= '9'; i++)
	{
		if (c != i)
		{
			return (0);
		}
	}
	return (1);
}
