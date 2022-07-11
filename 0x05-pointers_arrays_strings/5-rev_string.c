#include "main.h"

/**
 * rev_string - print string in reverse
 * @s: Pointer to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	{
		i = 0;

		while (len--)
		{
			temp = s[i];
			temp = s[len - 1];
			i++;
		}
	}
}
