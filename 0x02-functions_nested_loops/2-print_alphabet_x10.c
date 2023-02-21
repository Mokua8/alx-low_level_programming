#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char i;
char j = 0;
while (j <= 9)
{
	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
putchar('\n');
j++;
}
}
int main(void)
{
print_alphabet_x10();
return (0);
}
