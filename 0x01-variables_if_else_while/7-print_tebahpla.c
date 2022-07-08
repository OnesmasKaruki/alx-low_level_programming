#include <stdio.h>

/**
 * main -> Print alphabets in reverse order
 *
 * Return: Always return 0
 */
int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
