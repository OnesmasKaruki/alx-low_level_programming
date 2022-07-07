#include "main.h"

/**
 * print_most_numbers - print all numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int xi;

	for (xi = 0; xi < 10; xi++)
	{
		if (xi != 2 && xi != 4)
			_putchar(xi + '0');
	}
	_putchar('\n');
}
