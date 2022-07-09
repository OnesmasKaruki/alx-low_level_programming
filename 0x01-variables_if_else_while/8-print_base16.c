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
	char ch;

	for (ch = '0'; ch <= '9'; ch++)

	{
		putchar(ch);
		ch++;
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
