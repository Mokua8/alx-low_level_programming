#include <stdio.h>
#include "main.h"
/**
 * print_sign - Entry point
 * @n: carrier variable
 * Description: prints sign of number
 * Return: 1 if n>0, 0 if n==0, -1 if n<0
 */
int print_sign(int n)
{
if (n > 0)
{
putchar('+');
return (1);
}
else if (n < 0)
{
putchar('-');
return (-1);
}
putchar ('0');
return (0);
}
