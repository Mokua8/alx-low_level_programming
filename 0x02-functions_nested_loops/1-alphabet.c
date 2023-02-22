#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * Description: code that prints alphabets
 * in lowercase, followed by a niw line
 * Return: Always 0.
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
