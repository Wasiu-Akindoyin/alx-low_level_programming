#include <stdio.h>

/**
 * main - prints a series if numbers with commas
 * Return: 0
 */

int main(void)
{
int c;
for (c = '0'; c <= '9'; c++)
{
	purchar(c);
if (c != '9')
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
