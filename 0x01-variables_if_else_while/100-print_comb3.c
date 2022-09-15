#include <stdio.h>
#include <stdlib.h>

/**
 * main -> Entry point
 *
 * Return: Always return 0 on Success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 2; j++)
		{
			putchar('i');
			putchar('j');
			putchar(',');
			putchar(' ');
		}
		putchar('\n');
	}
	return (0);
}
