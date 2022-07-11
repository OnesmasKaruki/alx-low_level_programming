#include "main.h"
#include <stdio.h>

/**
 * print_array - print_array - prints elements of an array of integers
 * @a: Array of integers
 * @n: Number of elements of the array
 *
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (n != (n - 1))
		{
			printf(",");
		}
	}
	printf("\n");
}
