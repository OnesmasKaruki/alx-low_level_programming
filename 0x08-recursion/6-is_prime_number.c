#include "main.h"

/**
 * helper_fun - print prime number
 * @a: parameter 1
 * @b: parameter 2
 * Return: INT
 */

int helper_fun(int a, int b)
{
	if (b < a)
	{
		if (a % b == 0)
			return (0);
		else
			return (helper_fun(a, b + 1));
	}
	else
		return (1);
}
/**
 * is_prime_number - checks if a number is a prime number
 * @n: input int to be checked
 * Return: 1 if success and 0 if fail
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (helper_fun(n, 2));
}
