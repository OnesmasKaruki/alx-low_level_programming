#include "main.h"

/**
 * _sqrt_recursion - print sqaure root of int
 * @n: Input number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square -vfind square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, val)
{
	if (val *val == n)
	{
		return (val);
	}
	else if (val *val < n)
	{
		return  (square(n, val + 1));
	}
	else
		return (-1);
}
