#include "main.h"

/**
 * print_square - check for a digit
 * @n: number of _ to be printed
 */

void print_square(int n)
{
	int i = 0, u;

	while (i = n && n > 0)
	{
		u = 0;
		while (u < n)
		{
			_putchar('#');
			u++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
