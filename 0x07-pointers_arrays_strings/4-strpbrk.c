#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - locates the first occurence of string s
 * Description: of any other bytes in string accept
 * @s: first string occured
 * @accept: string to be checked
 * Return: pointer to s that matchs 1byte in accept or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *ptr;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				ptr = &s[i];
				return (ptr);
			}
		}
	}
	return (ptr);
}
