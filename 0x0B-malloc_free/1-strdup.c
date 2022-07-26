#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function returns a pointer to new string
 * which duplicate of a string
 * @str: input string
 *
 * Return: pointerto newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *ptr;
	int length = 0;
	int i;
	int j;

	if (str == NULL)
		return (NULL);
	/* find the length of str */
	for (i = 0; str[i] != '\0'; i++)
	{
		++length;
	}
	ptr = malloc(++length * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (j = 0; j < length; j++)
	{
		ptr[j] = str[j];
	}
	ptr[length] = '\0';
	return (ptr);
}
