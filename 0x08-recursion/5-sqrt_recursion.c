#include "main.h"
#include <stdio.h>

/**
 * square -vfind square root
 * @n: int to find square root
 * @val: square root
 * Return: int
 */

int square(int n, int val)
{
	if (val * val == n)
	{
		return (val);
	}
	else if (val * val < n)
	{
		return  (square(n, val + 1));
	}
	else
		return (-1);
}
/**
 * _sqrt_recursion - print ssquare root
 * @n: Input number
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}
