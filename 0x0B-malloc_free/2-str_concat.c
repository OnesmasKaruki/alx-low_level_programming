#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: pointer to the newly allocated space in memory
 * containing contents of s1 followed by those of s2
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int s = 1; /*length of the string */
	unsigned int l1 = 0;  /* length of s1 */
	unsigned int l2 = 0;  /* length of s2 */
	unsigned int i, j;    /* counters */

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0;
	while (s1[l1] != '\0')
		11++;
	12 = 0;
	while (s2[l2] != '\0')
		12++;

	s = l1 + l2;

	str = malloc((sizeof(char) * s) + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < 11)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= s)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}
