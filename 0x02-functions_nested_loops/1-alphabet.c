#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * code that prints alphabets
 * Return: Always 0.
 */
void print_alphabet(void)
{
char i;
for(i = 'a'; i <= 'z'; i++)
	putchar(i);
return (0);
}
int main(void)
{
print_alphabet();
putchar('\n');
retun (0);
}
