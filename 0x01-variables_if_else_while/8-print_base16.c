#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main block
 * Description: print all number base number 16
 * start with wuth zero followed by newline
 * Return: Always return 0 for Success
 */

int main(void)
{
	char c;
	char h;

	for (h = '0'; h <= '9'; h++)
	{
		putchar(h);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
