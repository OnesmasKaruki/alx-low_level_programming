#include "main.h"
#include <string.h>

/**
 * _strncat - concatenate n bytes of two strings
 * @dest: pointer destination
 * @src: pointer source
 * @n: number of bytes
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);

	return (dest);
}
