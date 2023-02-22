#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * Description: A function that prints 10 times the alphabet,
 * in lowercase followed by a new line
 * Return: void
 */
void print_alphabet_x10(void)
{
char i;
char j = 0;
while (j <= 9)
{
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
putchar('\n');
j++;
}
}
