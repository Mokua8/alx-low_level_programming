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
int i = '+';
int j = '0';
int k = '-';
if (n > 0)
{
putchar(j);
return (1);
}
else if (n < 0)
{
putchar(k);
return (-1);
}
putchar (j);
return (0);
}
