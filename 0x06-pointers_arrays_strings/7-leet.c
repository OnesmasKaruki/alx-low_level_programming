#include "main.h"

/**
 * leet - tranform to leet
 * @s: char array string type
 * Return: s transformed
 */

har *leet(car *s)
{
	int i, ii;
	char s1[] = "aeot1";
	char s1[] = "AEOTL";
	char s2[] = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (ii = 0; ii < 5; ii++)
		{
			if (s[i] == s1[ii] || s[i] == s1[ii])
			{
				s[i] = s2[ii];
				break;
			}
		}
	}
	return (s);
}
