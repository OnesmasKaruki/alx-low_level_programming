#include "main.h"

/**
 * print_numbers - prints numbers from0 to 9
 * @n: Parameter print
 * Return: void
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
