#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: string to be printed
 *
 * Return: void
 */
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
