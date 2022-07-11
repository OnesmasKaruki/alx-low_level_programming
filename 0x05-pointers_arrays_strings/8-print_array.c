#include "main.h"

/**
 * print_array - print_array - prints elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array
 *
 */

void print_array(int *a, int n)
{
	int j;
	for (j= 0; j < n; j++)
	{
		_putchar(a[j] + '0');
	}
	_putchar('\n');
}
