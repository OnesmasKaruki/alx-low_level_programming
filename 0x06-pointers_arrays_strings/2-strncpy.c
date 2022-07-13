#include "main.h"
#include <string.h>

/**
 * _strcmp - function to copy a string
 * @s1: First string
 * @s2: Second string
 * Return: String
 */

int _strcmp(char *s1, char *s2)
{
	char cmpstring;

	cmpstring = strcmp(s1, s2);

	return (cmpstring);
}
