#include "main.h"
#include <stdbool.h>
#include <string.h>

/**
 * _strspn -> prints length of prefix substring
 * @s: initial substring
 * @accept: string to be checked from the initial substring
 *
 * Return: number of byte in the initial string that consist of substring only
 */
unsigned int _strspn(char *s, char *accept)
{
		int i, j, len_initial = 0;
		int len_s = strlen(s);
		int len_accept = strlen(accept);

		for (i = 0; i < len_s; i++)
		{
			bool found_match = false;

			for (j = 0; j < len_accept; j++)
			{
				if (s[i] == accept[j])
				{
					found_match = true;
					break;
				}
				if (!found_match)
					break;
				else
					len_initial++;
			}
		}
		return (len_initial);
}
