#include <stdio.h>
/**
 * main - check the code
 * code that prints alphabets
 * Return: Always 0.
 */
void print_alphabet(void)
{
char i;
for(i = 'a'; i <= 'z'; i++)
	_putchar(i);
return;
}
int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
