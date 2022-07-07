#include "main.h"

/**
 * print_diagonal - printing line
 * @n: integer params
 */

void print_diagonal(int n)
{
	int i = 0, u;

	while (i < n && n > 0)
	{
		u = 0;
		while (u < i)
		{
			_putchar(' ');
			u++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
