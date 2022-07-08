#include <stdio.h>

/**
 * main - main block
 *
 * @t: Parameter passed to function
 * Return: Always return 0
 */

int main(char t)
{
	t = '0';

	while (t <= 9)
	{
		putchar(t + '0');
		t++;
	}
	putchar('\n');
	return (0);
}
