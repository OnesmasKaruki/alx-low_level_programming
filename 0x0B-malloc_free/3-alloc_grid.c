#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return a pointer to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j, k, l;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		arr = (int **) malloc(height * sizeof(int *));
		if (!arr)
		{
		free(arr);

		return (NULL);
		}
		for (i = 0; i < height; i++)
		{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (!arr)
		{
			for (j = 0; j <= i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		}
		for (k = 0; k < height; k++)
		{
			for (l = 0; l < width; l++)
			{
				arr[k][l] = 0;
			}
		}
		return (arr);

	}
}
