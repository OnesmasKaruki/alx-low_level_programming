#include "main.h"

/**
 * rev_string - Print string in reverse order
 * @s: Parameter to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char temp;
	int i, length_1 = 0, length_2 = 0;

	while (s[length_1] != '\0')
		length_1++;

	length_2 = length_1 - 1;

	for (i = 0; i < length_1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[length_2];
		s[length_2] = temp;
		length_2 -= 1;
	}
}
