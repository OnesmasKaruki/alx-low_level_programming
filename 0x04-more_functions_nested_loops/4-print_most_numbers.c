#include "main.h"

/**
 * print_moast_numbers: - print all numbers except 2 and 4
 * @x: Number passed
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');
	}
	_putchar('\n');
}
