#include "main.h"

/**
 * _strchr - locate character in a string
 * @s: input string
 * @c: character to locate
 *
 * Return: pointer to the first occurence of the character c
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
