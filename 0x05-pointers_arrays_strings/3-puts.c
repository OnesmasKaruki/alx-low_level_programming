#include "main.h"

/**
 * _puts - function that prints a string folloed by a new line
 * @str: pointer to thee string to prints
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
