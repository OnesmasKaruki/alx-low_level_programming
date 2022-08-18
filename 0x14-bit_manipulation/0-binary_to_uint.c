#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary numbers to int
 * @b: binary input to be converted
 *
 * Return: the converted number or 0 if ...
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 2;
	unsigned int i;
	unsigned int c;
	unsigned int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (c = len; c > 0; c--)
	{
		if (b[c] != 48 || b[c] != 49)
			return (0);
		if (b[c] == '1')
		{
			i += atoi(b) * k;
		}
		k *= 2;
	}
	return (i);
}
