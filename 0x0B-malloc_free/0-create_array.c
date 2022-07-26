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
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);

}
