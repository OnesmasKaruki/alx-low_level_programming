#include "main.h"

/**
 * times_table -> print multiple table
 */
void times_table(void)
{
	int i, num, d;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (num = 0; num <= 9; num++)
		{
			d = (i * num);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((d % 10) + '0');
			}
			if (num < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
