#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 * Description: checks for alphabetic character
 * @c: interger value it receives
 * Return: 1 if true. 0 if false.
 */
int _isalpha(int c)
{
int i;
for (i = 'a'||'A'; i <= 'z'||'Z'; i++)
{
if (c == i)
{
return (1);
}
}
return (0);
}
