#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - funtion that executes a function given as a parameter
 * on each element of an arrry
 * @array: input array
 * @size: size of array
 * @action: function pointer that takes an int as argument
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
