#include "main.h"
#include <stdlib.h>

/**
 * create_array - creat array of char
 * and initialize it to a specific char
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to the array initialized to NULL
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
		return (0);
	while (size--)
	{
		m[size] = c;
		return (m);
	}
}
