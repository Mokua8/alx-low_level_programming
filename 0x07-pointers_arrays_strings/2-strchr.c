#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: if c is found - a pointer to the first occurance
 * if c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return s;
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
