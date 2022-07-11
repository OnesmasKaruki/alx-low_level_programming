#include "main.h"

/**
 * puts2 - prints other character of a string, starting with first character
 * followed by a newline
 * @str: Parameter to be passed
 * Return: Void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
