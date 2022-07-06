#include "main.h"

/**
 * print_last_digit -> print the last digit
 * @n: the passed arg
 * Return: thelast digit
 */
int print_last_digit(int n)
{
	int i;

	if (n < 0)
	n = -n;
	i = n % 10;
	_putchar(i + '0');
	return (i);
}
