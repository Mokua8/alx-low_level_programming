#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: charcter pointer
 *
 * Return: length
 */

int _strlen(char *s)
{
	int Length = 0;

	while (s[Length])
		Length++;

	return (Length);
}

