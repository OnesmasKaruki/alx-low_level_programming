#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Checkmain
 * @n: input int
 * Description: Function that prints natural numbers from n to 98
 */

void print_to_98(int n)
{
	{
		for (n = 0; n <= 98; n++)
		{
			printf("%d, ", n);

			if (n == 98)
				continue;
			printf("%d, ", n);
		}
		printf("\n");

		for (n = 0; n >= 98; n--)
		{
			printf("%d, ", n);

			if (n == 98)
				continue;
			printf("%d, ", n);
		}
		printf("\n");
	}
}
