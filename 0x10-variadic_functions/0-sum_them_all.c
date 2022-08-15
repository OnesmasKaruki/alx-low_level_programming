#include <stdarg.h>

/**
 * sum_them_all - function that adds all given parameter
 * @n: count of integers to add
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list list;

	va_start(list, n)
		if (n != 0)
			for (i = 0; i < n; i++)
				sum += va_arg(list, unsigned int);
	va_end(list);

	return (sum);
}
