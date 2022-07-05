#include "main.h"

/**
 * print_to_98 -> print all natural numbers from input to 98
 * @n: The number being counting at.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			_putchar('%d, ', n--);
	}

	else
	{
		while (n < 98)
			_putchar('%d, ', n++);
	}
}
