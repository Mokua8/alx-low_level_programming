#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 * Description: code that prints alphabets
 * in lowercase, followed by a niw line
 * Return: void
 */
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
}
putchar('\n');
return;
}
