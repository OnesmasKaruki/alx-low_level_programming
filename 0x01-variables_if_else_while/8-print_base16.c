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
	char n = 0;
	char t = 'a';

	while (n <= 15)
	{
		putchar(n);
		n++;
	}

	while (t <= 'f')
	{
		putchar(t);
		t++;
	}
	putchar('\n');
	return (0);
}
