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
	unsigned int value = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		value = value << 1;

		if (*b != '1' && *b != '0')
			return (0);
		if (*b == '1')
			value = value | 1;
		b++;
	}
	return (value);
}
