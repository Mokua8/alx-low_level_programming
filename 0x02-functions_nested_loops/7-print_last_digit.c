#include "main.h"
/**
 * print_last_digit - Entry point
 * Description: prints last digit of interger
 * @n: interger argument
 * Return: interger
 */
int print_last_digit(int)
{
int last = n % 10;
if (n < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
