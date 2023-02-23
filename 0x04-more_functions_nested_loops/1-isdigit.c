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
	if (c == '0')
	{
		return (1);
	}
	if (c <= '9')
	{
		return (1);
	}
	return (0);
}
