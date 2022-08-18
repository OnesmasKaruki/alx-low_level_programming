#include <stdio.h>
#include "main.h"

/**
 * print_binar - printts binary representation of number
 * @n: number to convert to binary
 *
 * Return: void
 */
void print_binar(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
