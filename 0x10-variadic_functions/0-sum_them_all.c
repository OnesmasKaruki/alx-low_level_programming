#include <stdarg.h>

/**
 * sum_them_all - function that adds all given parameter
 * @n: count of integers to add
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list ap;

	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		/**
		 * va_arg() macro expands to an expression that has type
		 * and value of the next argument in the call
		 */
		sum += va_arg(ap, int);
	/*clean up*/
	va_end(ap);
	return (sum);
}
