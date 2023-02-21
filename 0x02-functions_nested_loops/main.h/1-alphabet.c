#include <stdio.h>
/**
 * main - check the code
 * code to print alphabet
 * Return: Always 0.
 */
void print_alphabet(void)
{
char i;

for(i = 'a'; 'a' <= 'z'; i++)
	putchar(i);
	return;
}
int main(void)
{
print_alphabet();
putchar('\n');
return (0);
}
