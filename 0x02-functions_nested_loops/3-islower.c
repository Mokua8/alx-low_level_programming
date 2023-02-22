#include "main.h"
/**
 * _islower - Entry point
 * Description: checks if a character is lowercase 
 * @c: the integer it receives
 * Return: 1 if true. 0 if false
 */
int _islower(int c)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
if (c == i)
{
return 1;
}
}
return (0);
}

