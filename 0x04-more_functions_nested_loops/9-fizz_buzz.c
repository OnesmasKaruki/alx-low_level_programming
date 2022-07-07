#include <stdio.h>

/**
 * main - checks the code for Alx
 *
 * Return: void
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			_putchar('FizzBuzz');
		}
		else if (i % 3 == 0)
		{
			_putchar('Fizz');
		}
		else
		{
			_putchar(i + '0');
		}
		if (i != 100)
		{
			_putchar(' ');
			i++;
		}
		_putchar('\n');
		return (0);
	}
}
