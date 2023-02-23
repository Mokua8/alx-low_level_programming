#include <stdio.h>
#include "main.h"

/**
 * _isupper - Entry point
 * Description: checks if a character is uppercase
 * @c: the integer it receives
 * Return: 1 if true. 0 if false
 */
int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
return (0);
}
