#include "main.h"

/**
 * _pow_recursion - prints power of number
 * @x: base number
 * @y: power number
 *
 * Return: x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
