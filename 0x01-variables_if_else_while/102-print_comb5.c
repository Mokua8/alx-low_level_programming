#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;
	
	for (i = '0'; i <= '99'; i++)
	{	
		for (j = i; j <= '99'; j++)
		{
			putchar(i/10 + '0');
			putchar(i%10 + '0');
			putchar(' ');
			putchar(j/10 + '0');
			putchar(j%10 + '0');
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
