#include "main.h"

/**
 * times_table -> print multiple table
 */
void times_table(void)
{
	int i, num;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num < 10; num++)
		{
			num = num * i;
			_putchar(num);
			_putchar('\n');
		}
	}
}
