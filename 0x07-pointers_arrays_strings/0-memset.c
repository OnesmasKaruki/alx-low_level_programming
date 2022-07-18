#include "main.h"

/**
 * _memset - function fills the first n bytes
 * @s: pointer to put the constant
 * @b: max bytes to use
 * @n: constant byte
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
