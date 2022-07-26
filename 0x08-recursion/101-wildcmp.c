#include "main.h"
#include <string.h>

/**
 * wildcmp - check the code forstudent
 * @s1: string
 * @s2: string
 *
 * Return: Always 0.
 */

int wildcmp(char *s1, char *s2)
{
	return (checker(s1, s2, 0, 0, -1));
}

/**
 * checker - helper
 * @s1: string
 * @s2: string
 * @b: int
 * @a: int
 * @wildUsed: int
 * Return: Always 0.
 */

int checker(char *s1, char *s2, int a, int b, int wildUsed)
{
if (s1[a] != '\0')
{
if (s2[b] == '\0')
	return (0);
else if (s2[b] == '*')
{
	if (s2[b + 1] == '*')
		return (checker(s1, s2, a, b + 1, b));
	else if (s2[b + 1] == s1[a])
		return (checker(s1, s2, a, b + 1, b));
	else if (s1[a + 1] != s2[b + 1])
		return (checker(s1, s2, a + 1, b, b));
	else if (s1[a + 1] == s2[b + 1])
		return (checker(s1, s2, a + 1, b + 1, b));
}
else if ((s1[a] == s2[b]) || (s2[b] == '*' && s2[b + 1] == s1[a + 1]))
	return (checker(s1, s2, a + 1, b + 1, wildUsed));

if (wildUsed == -1)
	return (0);

return (checker(s1, s2, a, wildUsed, wildUsed));


}
if (s2[b] != '\0')
	return (checkLast(s2, b));

return (1);
}